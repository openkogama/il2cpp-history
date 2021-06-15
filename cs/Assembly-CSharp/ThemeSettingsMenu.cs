/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeSettingsMenu : ThemeSettingsMenuBase
{
	// Fields
	[SerializeField]
	private TextButton browseThemesButton;
	private ThemeSettingsSideBar sideBar;

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal ThemeMenuController menuController;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal void __m__0();
	}

	// Constructors
	public ThemeSettingsMenu();

	// Methods
	public void Initialize(ThemeMenuController menuController, Theme theme);
}

