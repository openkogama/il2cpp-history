/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeMenuButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Button button;
	[SerializeField]
	private ToolTip toolTip;
	private static readonly string toolTipStr_ButtonDisabled;
	private static readonly string toolTipStr_ButtonEnabled;

	// Nested types
	public interface IClickHandler : IEventSystemHandler
	{
		// Methods
		void OpenThemesMenu();
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IClickHandler> __9__6_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnClick_b__6_0(IClickHandler handler, BaseEventData data);
	}

	// Constructors
	public ThemeMenuButton();
	static ThemeMenuButton();

	// Methods
	protected void Awake();
	private void SetButtonAvailability(PlanetOwnershipType planetOwnership);
	public void OnClick();
}

