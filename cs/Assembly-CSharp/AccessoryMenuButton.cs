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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IActivateUIElement> __9__12_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _CalculateShouldShowBundleAd_b__12_0(IActivateUIElement x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public bool uiBlocked;
		public AccessoryMenuButton __4__this;

		// Constructors
		public __c__DisplayClass10_0();

		// Methods
		internal void _CalculateShouldShowAccessoryPopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass10_1
	{
		// Fields
		public AccessoryPreviewPopup popup;

		// Constructors
		public __c__DisplayClass10_1();

		// Methods
		internal void _CalculateShouldShowAccessoryPopup_b__1(IUIStack x, BaseEventData y);
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
}

