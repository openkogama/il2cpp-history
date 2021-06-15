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

public class FirstTimeActivatableEditToolPopup : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private List<EditCubeChange> cubeChangesToCheck;
	[SerializeField]
	private FirstTimeEventPopup popupPrefab;
	[SerializeField]
	private GameObject stackParent;
	private FirstTimeEventPopup popup;
	private bool showing;
	private bool wantsToShow;
	[SerializeField]
	protected bool skipAllowed;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnShow_c__AnonStorey0
	{
		// Fields
		internal bool blocked;
		internal FirstTimeActivatableEditToolPopup _this;

		// Constructors
		public _OnShow_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Update_c__AnonStorey1
	{
		// Fields
		internal bool blocked;
		internal FirstTimeActivatableEditToolPopup _this;

		// Constructors
		public _Update_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnPopupRemoved_c__AnonStorey2
	{
		// Fields
		internal GameObject popupGameObject;

		// Constructors
		public _OnPopupRemoved_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatableEditToolPopup();

	// Methods
	public override void OnShow();
	private void ShowPopup();
	private void Update();
	private void OnCubeChanged(int cubeCount, EditCubeChange changeMade);
	protected void OnShown();
	private void OnPopupRemoved(GameObject popupGameObject);
	[CompilerGenerated]
	private void _ShowPopup_m__0(IUIStack x, BaseEventData y);
}

