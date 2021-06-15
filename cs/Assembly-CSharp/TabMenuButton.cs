/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TabMenuButton : TabMenuButtonBase
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text buttonText;
	[SerializeField]
	private Button button;

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal int tabId;
		internal TabMenuButton _this;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal void __m__0();
		internal void __m__1(ITabSelected x, BaseEventData y);
	}

	// Constructors
	public TabMenuButton();

	// Methods
	public override void Initialize(int tabId, string categoryName);
	public override void SetAsSelected();
	public override void SetAsDeselected();
}

