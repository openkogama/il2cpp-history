/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarSound : MonoBehaviour
{
	// Fields
	[SerializeField]
	private StreamedAudioClipManual parkourAudioManual;
	[SerializeField]
	private StreamedAudioClipManual bouncyAudioManual;

	// Constructors
	public AvatarSound();

	// Methods
	public void HandleWallJump();
	public void HandleActiveBounce();
}

