/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class AsyncWWWManager
{
	// Fields
	private const int quitTimeOut = 5000;
	private const int maxRequests = 4;
	private static readonly HashSet<AsyncWebRequest> activeRequests;
	private static readonly TemporaryHashSet<AsyncWebRequest> tempHashSet;
	private static int retries;
	public static readonly int[] RetryTimeouts;
	private static Action quitCallback;
	private static int quitTime;
	private static bool isQuiting;
	private static readonly Dictionary<WWWRequestPriority, Queue<AsyncWebRequest>> requests;
	private static Cache cache;

	// Properties
	public static int Retries { get; }

	// Nested types
	public class Cache
	{
		// Fields
		private Dictionary<string, CachedGetRequest> cachedRequests;

		// Constructors
		public Cache();

		// Methods
		public bool TryGet(string path, out CachedGetRequest cachedGetRequest);
		public void Add(string path, CachedGetRequest cachedGetRequest);
		public void UnsubscribeCached(Action<UnityWebRequest> callback);
		public void Clear();
	}

	private class TemporaryHashSet<T> : HashSet<T>, IDisposable
	{
		// Constructors
		public TemporaryHashSet();

		// Methods
		public void Dispose();
	}

	// Constructors
	static AsyncWWWManager();

	// Methods
	public static void WWWRequest(AsyncWebRequest asyncRequest);
	public static void ShutDown(Action quitHandled);
	public static void UnsubscribeWWWRequest(Action<UnityWebRequest> callback);
	public static void BackgroundUpdate();
	public static void Update();
	public static void Reset();
	public static void PostResetCleanup();
	private static void Unsubscribe(AsyncWebRequest request, Action<UnityWebRequest> callback);
	private static void AddRequestsToActiveRequests(Queue<AsyncWebRequest> requestQueue, int maxRequestForQueue);
	private static void Quit();
}

