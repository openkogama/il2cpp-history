/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _PushToStack_c__AnonStorey0
	{
		// Fields
		internal UIPushOption options;
		internal FirstTimeActivatablePopupTimed _this;

		// Constructors
		public _PushToStack_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _Update_m__0(IUIStack x, BaseEventData y);
}

