/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TabMenuButton : TabMenuButtonBase
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text buttonText;
	[SerializeField]
	private Button button;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass2_0
	{
		// Fields
		public TabMenuButton __4__this;
		public int tabId;
		public ExecuteEvents.EventFunction<ITabSelected> __9__1;

		// Constructors
		public __c__DisplayClass2_0();

		// Methods
		internal void _Initialize_b__0();
		internal void _Initialize_b__1(ITabSelected x, BaseEventData y);
	}

	// Constructors
	public TabMenuButton();

	// Methods
	public override void Initialize(int tabId, string categoryName);
	public override void SetAsSelected();
	public override void SetAsDeselected();
}

