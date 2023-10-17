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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public NotificationPopup notificationPopup;
		public ModalPopupCreator __4__this;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _Create_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public ConfirmationPopup confirmationPopup;
		public ModalPopupCreator __4__this;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal void _Create_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public PleaseWaitPopup waitPopup;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _Create_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public ModalPopupCreator __4__this;
		public ConfirmationPopup confirmationPopup;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _Create_b__0(IUIStack x, BaseEventData y);
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

