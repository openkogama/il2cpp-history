/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.ThemesData;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeSelection : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ThemeRepository themeRepo;
	[SerializeField]
	private ThemeSelectionButton buttonPrefab;
	[SerializeField]
	private Button themeRemovalButtonPrefab;
	[SerializeField]
	private RectTransform themeButtonContainer;
	[SerializeField]
	private UnityEngine.UI.Text themeDescription;
	[SerializeField]
	private Image close;
	[SerializeField]
	private Image back;
	public const string menuDescription = "_(\"Hover over a theme to know more about it. Click it to see it in game.\")";
	public string currentDescription;
	private ThemeMenuController menuController;
	private Theme previewTheme;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Properties
	public string ThemeDescription { set; }
	private Theme PreviewTheme { get; set; }

	// Nested types
	public static class CallbackHandler
	{
		// Fields
		public static Action<ThemeData[]> OnThemeDataReceived;
	}

	[CompilerGenerated]
	private sealed class _CreateThemeButtons_c__AnonStorey0
	{
		// Fields
		internal ThemeSelectionButton b;
		internal ThemeSelection _this;

		// Constructors
		public _CreateThemeButtons_c__AnonStorey0();

		// Methods
		internal void __m__0();
	}

	[CompilerGenerated]
	private sealed class _CreateThemeButtons_c__AnonStorey1
	{
		// Fields
		internal string identifier;
		internal ThemeData copy;
		internal _CreateThemeButtons_c__AnonStorey0 __f__ref_0;

		// Constructors
		public _CreateThemeButtons_c__AnonStorey1();

		// Methods
		internal void __m__0();
	}

	[CompilerGenerated]
	private sealed class _ShowThemeRemovalWarning_c__AnonStorey2
	{
		// Fields
		internal string msg;
		internal ThemeSelection _this;

		// Constructors
		public _ShowThemeRemovalWarning_c__AnonStorey2();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public ThemeSelection();

	// Methods
	public void InitializeWithBackButton(ThemeMenuController menuController);
	public void Initialize(ThemeMenuController menuController);
	protected void Awake();
	protected void OnDestroy();
	private void CreateThemeButtons(ThemeData[] data);
	private void LoadTheme(string identifier, ThemeData data);
	private void ShowThemeRemovalWarning();
	private void OnThemeRemovalWarningResolved(bool answer, ConfirmationPopup popup);
	private void GoBackToSettings();
	private void LocalizeAndSetDescriptionText();
	[CompilerGenerated]
	private void _CreateThemeButtons_m__0();
	[CompilerGenerated]
	private static void _OnThemeRemovalWarningResolved_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _GoBackToSettings_m__2(IUIStack x, BaseEventData y);
}

