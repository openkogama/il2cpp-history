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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass21_0
	{
		// Fields
		public ThemeSelectionButton b;
		public string identifier;
		public ThemeData copy;
		public ThemeSelection __4__this;

		// Constructors
		public __c__DisplayClass21_0();

		// Methods
		internal void _CreateThemeButtons_b__2();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass23_0
	{
		// Fields
		public string msg;
		public ThemeSelection __4__this;

		// Constructors
		public __c__DisplayClass23_0();

		// Methods
		internal void _ShowThemeRemovalWarning_b__0(IModalPopupCreator x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__25_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnThemeRemovalWarningResolved_b__24_0(IUIStack x, BaseEventData y);
		internal void _GoBackToSettings_b__25_0(IUIStack x, BaseEventData y);
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
	private void _CreateThemeButtons_b__21_0();
	[CompilerGenerated]
	private void _CreateThemeButtons_b__21_1();
}

