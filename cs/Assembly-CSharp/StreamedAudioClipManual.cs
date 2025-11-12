/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedAudioClipManual : StreamedAudioClip, IReceiver
{
	// Fields
	[CompilerGenerated]
	private AudioClip _Clip_k__BackingField;

	// Properties
	public AudioClip Clip { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public StreamedAudioClipManual();

	// Methods
	[Obsolete("This is not supported in this class.", true)]
	public new void Initialize(IReceiver receiver);
	protected override void Start();
	public void OnAudioReceived(AudioClip streamedClip);
}

