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

public class FirstTimeActivatablePopupPressKeyToSkip : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private GameObject popup;
	[SerializeField]
	private float minLifeTime;
	[SerializeField]
	private List<KogamaControls> keysToDetect;
	private float currentlifeTime;
	private bool visible;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnShow_c__AnonStorey0
	{
		// Fields
		internal GameObject instantiatedPopup;

		// Constructors
		public _OnShow_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatablePopupPressKeyToSkip();

	// Methods
	private void Update();
	public override void OnShow();
	protected override void OnDisable();
	private void Clear();
	private void OnShown();
	[CompilerGenerated]
	private static void _Clear_m__0(IUIStack x, BaseEventData y);
}

