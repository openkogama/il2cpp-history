import argparse
import datetime
import json
import os
import re
import shutil
import subprocess
import tarfile
import urllib.request

SOURCE = "https://cdn.openkogama.org/versions.json"
UNSAFE = re.compile(r'[<>:"|?*\\`]')


def versions():
    req = urllib.request.Request(SOURCE, headers={"User-Agent": "il2cpp-history"})
    with urllib.request.urlopen(req, timeout=120) as r:
        entries = [e for e in json.load(r)["versions"] if e["il2cpp"]]
    return sorted(entries, key=lambda e: (e["timestamp"], e["version"], e["sha256"]))


def git(repo, *cmd, env=None):
    return subprocess.run(["git", "-C", repo, *cmd], check=True, capture_output=True, text=True, env=env).stdout


def recorded(repo):
    if not os.path.exists(os.path.join(repo, ".git")) or not git(repo, "rev-list", "--all", "--max-count=1").strip():
        return set()
    return set(git(repo, "log", "--format=%(trailers:key=Build-Sha256,valueonly)", "--all").split())


def sanitize(root):
    for d, dirs, files in os.walk(root, topdown=False):
        for name in files + dirs:
            clean = UNSAFE.sub("_", name)
            if clean != name:
                os.replace(os.path.join(d, name), os.path.join(d, clean))


def run_list(args):
    done = recorded(args.repo) if args.repo else set()
    todo = [e["sha256"] for e in versions() if e["sha256"] not in done]
    print(json.dumps(todo))


def run_assemble(args):
    if not os.path.exists(os.path.join(args.repo, ".git")):
        os.makedirs(args.repo, exist_ok=True)
        git(args.repo, "init", "-q", "-b", "history")
    done = recorded(args.repo)
    commits = missing = 0
    for e in versions():
        if e["sha256"] in done:
            continue
        archive = os.path.join(args.src, e["sha256"] + ".tar.gz")
        if not os.path.exists(archive):
            missing += 1
            print(f"missing {e['version']} {e['sha256'][:8]}", flush=True)
            continue
        for p in os.listdir(args.repo):
            if p != ".git":
                full = os.path.join(args.repo, p)
                shutil.rmtree(full) if os.path.isdir(full) else os.remove(full)
        with tarfile.open(archive) as t:
            t.extractall(args.repo, filter="data")
        sanitize(args.repo)
        when = datetime.datetime.fromtimestamp(e["timestamp"], datetime.UTC).strftime("%Y-%m-%dT%H:%M:%SZ")
        env = {**os.environ, "GIT_AUTHOR_DATE": when, "GIT_COMMITTER_DATE": when}
        git(args.repo, "add", "-A")
        git(
            args.repo, "commit", "-q", "--allow-empty",
            "-m", f"{e['version']} ({e['unityVersion']})",
            "-m", f"Build-Id: {e['id']}\nBuild-Sha256: {e['sha256']}",
            env=env,
        )
        git(args.repo, "tag", "-f", f"v{e['version']}-{e['sha256'][:8]}")
        commits += 1
    print(f"{commits} commits, {missing} missing")


def main():
    p = argparse.ArgumentParser()
    sub = p.add_subparsers(dest="cmd", required=True)
    ls = sub.add_parser("list")
    ls.add_argument("--repo")
    a = sub.add_parser("assemble")
    a.add_argument("--src", default="src")
    a.add_argument("--repo", default="hist")
    args = p.parse_args()
    run_list(args) if args.cmd == "list" else run_assemble(args)


if __name__ == "__main__":
    main()
