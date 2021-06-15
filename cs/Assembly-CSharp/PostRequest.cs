/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PostRequest : AsyncWebRequest
{
	// Fields
	private readonly WWWForm form;

	// Constructors
	public PostRequest(string path, WWWForm form, Action<UnityWebRequest> callback, WWWRequestPriority requestPriority);

	// Methods
	protected override UnityWebRequest Create();
}

