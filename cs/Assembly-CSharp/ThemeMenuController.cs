/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.ThemesData;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeMenuController : MonoBehaviour, ThemeMenuButton.IClickHandler
{
	// Fields
	[SerializeField]
	private ThemeSelection selectionPrefab;
	[SerializeField]
	private ThemeSettingsMenu settingsPrefab;
	[SerializeField]
	private ThemePreviewSettingsMenu previewSettingsPrefab;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static UnityAction __9__3_1;
		public static UnityAction __9__4_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OpenThemesMenu_b__3_1();
		internal void _OpenSelection_b__4_1();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass3_0
	{
		// Fields
		public ThemeSelection menu;

		// Constructors
		public __c__DisplayClass3_0();

		// Methods
		internal void _OpenThemesMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public ThemeSelection menu;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _OpenSelection_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public Theme theme;
		public ThemeSettingsMenu settings;
		public UnityAction commitChanges;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal void _OpenSettings_b__0();
		internal void _OpenSettings_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public ThemePreviewSettingsMenu settings;
		public Theme theme;
		public UnityAction __9__1;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _OpenSettingsForPreview_b__0(IUIStack x, BaseEventData y);
		internal void _OpenSettingsForPreview_b__1();
	}

	// Constructors
	public ThemeMenuController();

	// Methods
	public void OpenThemesMenu();
	public void OpenSelection();
	public void OpenSettings(Theme theme);
	public void OpenSettingsForPreview(Theme theme, ThemeData entry);
}

