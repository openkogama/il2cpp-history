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

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Clear_b__10_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public GameObject instantiatedPopup;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal void _OnShow_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatablePopupPressKeyToSkip();

	// Methods
	private void Update();
	public override void OnShow();
	protected override void OnDisable();
	private void Clear();
	private void OnShown();
}

