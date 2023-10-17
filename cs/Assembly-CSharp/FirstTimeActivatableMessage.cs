/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class FirstTimeActivatableMessage : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private FirstTimeEventMessage firstTimeEventMessagePrefab;
	[SerializeField]
	private Transform firstTimeMessageParentTransform;
	protected FirstTimeEventMessage firstTimeEventMessage;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	protected FirstTimeActivatableMessage();

	// Methods
	public override void OnShow();
	public void FadeOut();
	public void DoDisabled();
	private void OnFinished(GameObject firstTimeEventMessage);
	protected void DestroyMessage();
}

