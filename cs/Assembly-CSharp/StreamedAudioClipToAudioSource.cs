/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedAudioClipToAudioSource : StreamingAsset<AudioClip, AudioClip>
{
	// Fields
	[Header]
	[SerializeField]
	protected AudioSource audioSource;

	// Constructors
	public StreamedAudioClipToAudioSource();

	// Methods
	public void Reset();
	protected override void OnAssetSet();
}

