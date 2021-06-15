/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ModalPopupCreator : MonoBehaviour, IModalPopupCreator
{
	// Fields
	[SerializeField]
	private UIPushOption popupPushOption;
	[SerializeField]
	private ConfirmationPopup confirmationPopupPrefab;
	[SerializeField]
	private NotificationPopup notificationPopupPrefab;
	[SerializeField]
	private PleaseWaitPopup waitPopupPrefab;
	[CompilerGenerated]
	private static UnityAction<bool, ConfirmationPopup> __f__mg_cache0;
	[CompilerGenerated]
	private static UnityAction<bool, ConfirmationPopup> __f__mg_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _Create_c__AnonStorey0
	{
		// Fields
		internal NotificationPopup notificationPopup;
		internal ModalPopupCreator _this;

		// Constructors
		public _Create_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Create_c__AnonStorey1
	{
		// Fields
		internal ConfirmationPopup confirmationPopup;
		internal ModalPopupCreator _this;

		// Constructors
		public _Create_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Create_c__AnonStorey2
	{
		// Fields
		internal PleaseWaitPopup waitPopup;

		// Constructors
		public _Create_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Create_c__AnonStorey3
	{
		// Fields
		internal ConfirmationPopup confirmationPopup;
		internal ModalPopupCreator _this;

		// Constructors
		public _Create_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ModalPopupCreator();

	// Methods
	public NotificationPopup Create(string text, string header = "");
	public ConfirmationPopup Create(string text, UnityAction<bool, ConfirmationPopup> resultCallback, string header = "");
	public PleaseWaitPopup Create();
	public void Create(MVPurchaseReturnCode returnCode, int priceGold);
	public void CreateErrorNotificationPopup(string error, string header = "Error");
	private static void OnGoldPurchaseDialogResult(bool result, ConfirmationPopup confirmationPopup);
}

