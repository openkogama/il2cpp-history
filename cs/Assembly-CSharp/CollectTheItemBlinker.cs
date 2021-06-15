/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CollectTheItemBlinker : BlinkerBase
{
	// Fields
	[SerializeField]
	private Color dropOffCollectedItemColor;
	[SerializeField]
	private Color DespawnColor;

	// Constructors
	public CollectTheItemBlinker();

	// Methods
	private new void Awake();
	public void OnBlinkingActivated(bool shouldBlink, BlinkType type);
	public void DeactivateBlinking();
}

