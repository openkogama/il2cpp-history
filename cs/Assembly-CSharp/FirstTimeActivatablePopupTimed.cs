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

public class FirstTimeActivatablePopupTimed : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private CanvasGroup popupPrefab;
	[SerializeField]
	private float visibleDuration;
	[SerializeField]
	private float fadeTime;
	[SerializeField]
	private List<UIPushOption> pushOptions;
	[SerializeField]
	private bool inputRequired;
	protected bool isShown;
	private float currentTime;
	private CanvasGroup createdPopup;
	private const string mouseX = "Mouse X";
	private const string mouseY = "Mouse Y";
	private bool isFading;
	private bool isUpdating;
	private bool destroyCreatedPopup;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__15_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__15_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_0
	{
		// Fields
		public FirstTimeActivatablePopupTimed __4__this;
		public UIPushOption options;

		// Constructors
		public __c__DisplayClass20_0();

		// Methods
		internal void _PushToStack_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatablePopupTimed();

	// Methods
	private void Update();
	public override void OnShow();
	protected void ParentPopupToGameObject();
	protected override void OnDestroy();
	protected void CreatePopup();
	private void PushToStack();
	private void OnPop();
}

