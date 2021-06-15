/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CachedGetRequest : GetRequest
{
	// Constructors
	public CachedGetRequest(string path, Action<UnityWebRequest> callback, WWWRequestPriority requestPriority);

	// Methods
	public virtual bool FoundInCache(AsyncWWWManager.Cache cache);
	protected void AddToCallback(Action<UnityWebRequest> callbackOther);
}

