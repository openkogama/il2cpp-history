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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private sealed class _OpenThemesMenu_c__AnonStorey0
	{
		// Fields
		internal ThemeSelection menu;
		private static UnityAction __f__am_cache0;

		// Constructors
		public _OpenThemesMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		private static void __m__1();
	}

	[CompilerGenerated]
	private sealed class _OpenSelection_c__AnonStorey1
	{
		// Fields
		internal ThemeSelection menu;
		private static UnityAction __f__am_cache0;

		// Constructors
		public _OpenSelection_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		private static void __m__1();
	}

	[CompilerGenerated]
	private sealed class _OpenSettings_c__AnonStorey2
	{
		// Fields
		internal Theme theme;
		internal ThemeSettingsMenu settings;
		internal UnityAction commitChanges;

		// Constructors
		public _OpenSettings_c__AnonStorey2();

		// Methods
		internal void __m__0();
		internal void __m__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OpenSettingsForPreview_c__AnonStorey3
	{
		// Fields
		internal ThemePreviewSettingsMenu settings;
		internal Theme theme;

		// Constructors
		public _OpenSettingsForPreview_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		internal void __m__1();
	}

	// Constructors
	public ThemeMenuController();

	// Methods
	public void OpenThemesMenu();
	public void OpenSelection();
	public void OpenSettings(Theme theme);
	public void OpenSettingsForPreview(Theme theme, ThemeData entry);
}

