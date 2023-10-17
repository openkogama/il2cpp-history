/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableMessagePopup : FirstTimeActivatableElementBase
{
	// Fields
	private float showedTime;
	private bool isShown;
	private bool isDone;
	[SerializeField]
	private string messageText;
	[SerializeField]
	private FirstTimeEventMessage firstTimeEventMessagePrefab;
	[SerializeField]
	private List<UIPushOption> pushOptions;
	[SerializeField]
	private float stayTimeInSeconds;
	protected FirstTimeEventMessage firstTimeEventMessage;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public GameObject firstTimeEventMessage;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _OnFinished_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatableMessagePopup();

	// Methods
	public override void OnShow();
	private void PushToStack();
	private void OnFinished(GameObject firstTimeEventMessage);
	private void OnPop();
	public void FadeOut();
	private void Update();
	[CompilerGenerated]
	private void _PushToStack_b__11_0(IUIStack x, BaseEventData y);
}

