import hashlib
import io
import json
import os
import sys
import urllib.request
import zipfile

SOURCE = "https://cdn.openkogama.org/versions.json"
WANTED = ("GameAssembly.dll", "global-metadata.dat")


def get(url):
    req = urllib.request.Request(url, headers={"User-Agent": "il2cpp-history"})
    with urllib.request.urlopen(req, timeout=300) as r:
        return r.read()


def main():
    sha, out = sys.argv[1], sys.argv[2]
    entry = next(e for e in json.loads(get(SOURCE))["versions"] if e["sha256"] == sha)
    for url in entry["urls"]:
        try:
            data = get(url)
        except Exception as e:
            print(f"{url}: {e}")
            continue
        if hashlib.sha256(data).hexdigest() == sha:
            break
    else:
        sys.exit("no mirror returned the expected sha256")
    os.makedirs(out, exist_ok=True)
    z = zipfile.ZipFile(io.BytesIO(data))
    for name in z.namelist():
        if name.endswith(WANTED):
            with open(os.path.join(out, os.path.basename(name)), "wb") as f:
                f.write(z.read(name))
    with open(os.path.join(out, "build.json"), "w", encoding="utf-8") as f:
        json.dump({k: entry[k] for k in ("id", "version", "unityVersion", "timestamp", "sha256")}, f, indent=4)
    print(entry["version"], entry["unityVersion"], sorted(os.listdir(out)))


main()
