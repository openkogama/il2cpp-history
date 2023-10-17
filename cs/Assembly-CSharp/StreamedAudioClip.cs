/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedAudioClip : StreamingAsset<AudioClip, AudioClip>
{
	// Fields
	private IReceiver receiver;

	// Nested types
	public interface IReceiver
	{
		// Methods
		void OnAudioReceived(AudioClip a);
	}

	// Constructors
	public StreamedAudioClip();

	// Methods
	public void Initialize(IReceiver receiver);
	protected override void OnAssetSet();
}

