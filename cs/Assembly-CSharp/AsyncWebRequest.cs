/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class AsyncWebRequest
{
	// Fields
	protected Action<UnityWebRequest> callback;
	protected readonly string path;
	protected int retries;
	protected TimeSpan currentTimeout;
	protected DateTime retryTime;
	protected State state;
	protected UnityWebRequest request;
	protected bool isDone;
	public readonly WWWRequestPriority requestPriority;

	// Properties
	protected static bool CacheCompatibility { get; }
	public Action<UnityWebRequest> Callback { get; set; }

	// Nested types
	protected enum State
	{
		Created = 0,
		Running = 1,
		Waiting = 2
	}

	// Constructors
	protected AsyncWebRequest(string path, Action<UnityWebRequest> callback, WWWRequestPriority requestPriority);

	// Methods
	private static bool CheckCacheCompatibility();
	public bool Update();
	public void Dispose();
	private void GotoRunState();
	protected virtual bool UpdateRunningState();
	protected bool ReadyToDoCallback();
	private bool IsWaitingStateDone();
	protected abstract UnityWebRequest Create();
	public override string ToString();
}

