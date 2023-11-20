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
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public FirstTimeActivatableEditToolPopup __4__this;
		public bool blocked;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _Update_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public GameObject popupGameObject;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _OnPopupRemoved_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public bool blocked;
		public FirstTimeActivatableEditToolPopup __4__this;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _OnShow_b__0(IUIStack x, BaseEventData y);
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
	private void _ShowPopup_b__10_0(IUIStack x, BaseEventData y);
}

