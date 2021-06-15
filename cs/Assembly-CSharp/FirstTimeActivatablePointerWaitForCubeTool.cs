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

public class FirstTimeActivatablePointerWaitForCubeTool : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private bool checkCubeCount;
	[SerializeField]
	private List<EditCubeChange> cubeChangesToCheck;
	[SerializeField]
	private int numberOfChangesBeforePointer;
	[SerializeField]
	private FirstTimeEventPopupWithProgress meanwhilePopup;
	private FirstTimeEventPopupWithProgress popup;
	private int currentChangeCount;
	private bool isShown;
	private bool canShow;
	private bool completed;
	[SerializeField]
	protected bool skipAllowed;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnPopupRemoved_c__AnonStorey0
	{
		// Fields
		internal GameObject popupGameObject;

		// Constructors
		public _OnPopupRemoved_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatablePointerWaitForCubeTool();

	// Methods
	public override void OnActivate();
	public override void OnShow();
	private void OnCubeChanged(int cubeCount, EditCubeChange changeMade);
	protected override void OnDestroy();
	private void OnClosed();
	protected void OnShown();
	private void OnPopupRemoved(GameObject popupGameObject);
	[CompilerGenerated]
	private void _OnShow_m__0(IUIStack x, BaseEventData y);
}

