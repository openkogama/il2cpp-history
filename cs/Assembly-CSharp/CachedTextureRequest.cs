/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CachedTextureRequest : CachedGetRequest
{
	// Fields
	[CompilerGenerated]
	private bool _ReadableTextureData_k__BackingField;

	// Properties
	private bool ReadableTextureData { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public CachedTextureRequest(string path, Action<UnityWebRequest> callback, WWWRequestPriority requestPriority, bool readable = false);

	// Methods
	protected override UnityWebRequest Create();
}

