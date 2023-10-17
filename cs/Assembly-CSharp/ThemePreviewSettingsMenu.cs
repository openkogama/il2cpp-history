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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private ThemeData _ThemeData_k__BackingField;

	// Properties
	private ThemeData ThemeData { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public ThemePreviewSettingsMenu __4__this;
		public ThemeData data;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _Initialize_b__0();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public string msg;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _DisplayInsufficientLevelNotification_b__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public string msg;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _DisplayInsufficientGoldNotification_b__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass16_0
	{
		// Fields
		public string msg;
		public ThemePreviewSettingsMenu __4__this;

		// Constructors
		public __c__DisplayClass16_0();

		// Methods
		internal void _DisplaySkyboxWarning_b__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass18_0
	{
		// Fields
		public string msg;
		public ThemePreviewSettingsMenu __4__this;

		// Constructors
		public __c__DisplayClass18_0();

		// Methods
		internal void _DisplayThemeSwitchWarning_b__0(IModalPopupCreator x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__20_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__20_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__20_3;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__20_4;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnPurchaseResponse_b__20_0(IUIStack x, BaseEventData y);
		internal void _OnPurchaseResponse_b__20_1(IModalPopupCreator x, BaseEventData y);
		internal void _OnPurchaseResponse_b__20_3(IModalPopupCreator x, BaseEventData y);
		internal void _OnPurchaseResponse_b__20_4(IModalPopupCreator x, BaseEventData y);
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
	private void _OnPurchaseResponse_b__20_2(IModalPopupCreator x, BaseEventData y);
}

