/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.ThemesData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemePreviewSettingsMenu : ThemeSettingsMenuBase
{
	// Fields
	[SerializeField]
	private RectTransform topArea;
	[SerializeField]
	private SwitchThemeButton switchThemeButtonPrefab;
	private Theme previewTheme;
	private int previewID;
	private string previewDisplayName;
	private ThemeMenuController menuController;
	private ConfirmationPopup openPopup;
	private ThemeSettingsSideBar sideBar;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private ThemeData _ThemeData_k__BackingField;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache3;

	// Properties
	private ThemeData ThemeData { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal ThemeData data;
		internal ThemePreviewSettingsMenu _this;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal void __m__0();
	}

	[CompilerGenerated]
	private sealed class _DisplayInsufficientLevelNotification_c__AnonStorey1
	{
		// Fields
		internal string msg;

		// Constructors
		public _DisplayInsufficientLevelNotification_c__AnonStorey1();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _DisplayInsufficientGoldNotification_c__AnonStorey2
	{
		// Fields
		internal string msg;

		// Constructors
		public _DisplayInsufficientGoldNotification_c__AnonStorey2();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _DisplaySkyboxWarning_c__AnonStorey3
	{
		// Fields
		internal string msg;
		internal ThemePreviewSettingsMenu _this;

		// Constructors
		public _DisplaySkyboxWarning_c__AnonStorey3();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _DisplayThemeSwitchWarning_c__AnonStorey4
	{
		// Fields
		internal string msg;
		internal ThemePreviewSettingsMenu _this;

		// Constructors
		public _DisplayThemeSwitchWarning_c__AnonStorey4();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public ThemePreviewSettingsMenu();

	// Methods
	public void Initialize(Theme theme, ThemeData data, ThemeMenuController menuController);
	private void SwitchThemeButtonClicked(int themeID, int levelReq);
	private void DisplayInsufficientLevelNotification(int levelReq);
	private void DisplayInsufficientGoldNotification(int price);
	private void DisplaySkyboxWarning();
	private void OnSkyboxWarningResolved(bool b, ConfirmationPopup popup);
	private void DisplayThemeSwitchWarning();
	private void OnThemeSwitchWarningResolved(bool b, ConfirmationPopup popup);
	private void OnPurchaseResponse(int returnCode, Dictionary<object, object> purchaseResponseData);
	[CompilerGenerated]
	private static void _OnPurchaseResponse_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPurchaseResponse_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _OnPurchaseResponse_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPurchaseResponse_m__3(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPurchaseResponse_m__4(IModalPopupCreator x, BaseEventData y);
}

