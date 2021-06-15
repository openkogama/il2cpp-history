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

public class AccessoryMenuButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject redDotNotification;
	[SerializeField]
	private AccessoryShinyButton shineEffect;
	[SerializeField]
	private UnityEngine.UI.Text redDotNotificationText;
	[SerializeField]
	private AccessoryPreviewPopup accessoryPreviewPopup;
	private bool playerReady;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IActivateUIElement> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _CalculateShouldShowAccessoryPopup_c__AnonStorey0
	{
		// Fields
		internal bool uiBlocked;
		internal AccessoryMenuButton _this;

		// Constructors
		public _CalculateShouldShowAccessoryPopup_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CalculateShouldShowAccessoryPopup_c__AnonStorey1
	{
		// Fields
		internal AccessoryPreviewPopup popup;

		// Constructors
		public _CalculateShouldShowAccessoryPopup_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AccessoryMenuButton();

	// Methods
	private void Start();
	private void OnJoinChanged(MVJoinState joinState);
	private void OnEnable();
	private void PlayerReady();
	private void OnAccessoryDataReady();
	private void CalculateShouldShowAccessoryPopup();
	private void CalculateShouldShowHighlightIcon();
	private void CalculateShouldShowBundleAd();
	[CompilerGenerated]
	private static void _CalculateShouldShowBundleAd_m__0(IActivateUIElement x, BaseEventData y);
}

