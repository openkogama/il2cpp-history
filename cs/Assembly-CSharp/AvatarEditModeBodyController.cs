/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarEditModeBodyController : MonoBehaviour, IAvatarEditAnimationState
{
	// Fields
	private List<MVBody> bodies;
	private MVSpawnPointRed bodySpawnPoint;
	private Vector3 displayPos;
	private Quaternion displayRotation;
	private Vector3 hidePos;
	private int currentBodyIndex;
	private AvatarRepositoryItem purchasingItem;
	private string currentActionSuccessMessage;
	private bool playingPurchaseSoundAfterScreenshot;
	[SerializeField]
	public AvatarPictureTakerUGUI pictureTaker;
	[SerializeField]
	private NotificationPopup notificationPopup;
	[SerializeField]
	private PleaseWaitPopup pleaseWaitPopupPrefab;
	[SerializeField]
	private UploadAvatarScreenshotHandler uploadAvatarScreenshotHandler;
	[SerializeField]
	private ResetAvatarHandler resetAvatarHandler;
	private List<string> animations;
	private int currentAnimationIndex;
	public Action<int, Texture2D> Picture2DTakenCallback;
	private GameObject publishAvatarBtn;
	public static CloudyThemeBase Theme;

	// Properties
	public MVBody CurrentBody { get; }
	public Vector3 DisplayPos { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<MVWorldObjectClient, bool> __9__23_0;
		public static Func<MVWorldObjectClient, bool> __9__23_1;
		public static Func<MVWorldObjectClient, int> __9__23_2;
		public static ExecuteEvents.EventFunction<IEditStateCommands> __9__27_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__27_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__27_3;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__34_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__36_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__37_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__38_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__39_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__39_1;
		public static ExecuteEvents.EventFunction<IPurchaseSoundManager> __9__43_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__43_1;
		public static ExecuteEvents.EventFunction<IEditStateCommands> __9__43_3;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _Initialize_b__23_0(MVWorldObjectClient wo);
		internal bool _Initialize_b__23_1(MVWorldObjectClient wo);
		internal int _Initialize_b__23_2(MVWorldObjectClient s);
		internal void _ResetCallback_b__27_1(IEditStateCommands x, BaseEventData y);
		internal void _ResetCallback_b__27_2(IUIStack x, BaseEventData y);
		internal void _ResetCallback_b__27_3(IUIStack x, BaseEventData y);
		internal void _TakeScreenshot_b__34_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnPurchaseAvatarConfirmation_b__36_0(IUIStack x, BaseEventData y);
		internal void _OnProductPurchaseAvatarResponse_b__37_0(IUIStack x, BaseEventData y);
		internal void _InitializedPurchasedAvatar_b__38_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnActiveAvatarSetAfterPurchase_b__39_0(IUIStack x, BaseEventData y);
		internal void _OnActiveAvatarSetAfterPurchase_b__39_1(IModalPopupCreator x, BaseEventData y);
		internal void _MVNetworGame_ScreenshotUploadedHandler_b__43_0(IPurchaseSoundManager x, BaseEventData y);
		internal void _MVNetworGame_ScreenshotUploadedHandler_b__43_1(IUIStack x, BaseEventData y);
		internal void _MVNetworGame_ScreenshotUploadedHandler_b__43_3(IEditStateCommands x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass25_0
	{
		// Fields
		public ResetAvatarHandler resetHandler;

		// Constructors
		public __c__DisplayClass25_0();

		// Methods
		internal void _ResetCurrentBody_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass36_0
	{
		// Fields
		public PleaseWaitPopup popup;

		// Constructors
		public __c__DisplayClass36_0();

		// Methods
		internal void _OnPurchaseAvatarConfirmation_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass37_0
	{
		// Fields
		public int returnCode;
		public AvatarEditModeBodyController __4__this;

		// Constructors
		public __c__DisplayClass37_0();

		// Methods
		internal void _OnProductPurchaseAvatarResponse_b__1(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass43_0
	{
		// Fields
		public NotificationPopup popup;

		// Constructors
		public __c__DisplayClass43_0();

		// Methods
		internal void _MVNetworGame_ScreenshotUploadedHandler_b__2(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AvatarEditModeBodyController();

	// Methods
	public void Initialize();
	public void SetPublishAvatarGO(GameObject publishAvatarGO);
	public void ResetCurrentBody();
	private void ExecuteReset();
	private void ResetCallback(object sender, InitializedGameQueryDataEventArgs e);
	public void SetCurrentBodyByWoId(int woId);
	public void SetCurrentBody(int index);
	private void SetPublishAvatarButtonActive();
	public void CaptureScreenshotForBody(int index, Action<int, Texture2D> OnPictureTaken);
	public void CaptureScreenshotsForAllAvatars(Action<int, Texture2D> OnPictureTaken);
	private void GenerateIconForBody(int index);
	public void TakeScreenshot();
	public void PurchaseAvatar(AvatarRepositoryItem item);
	private void OnPurchaseAvatarConfirmation(bool confirmed, ConfirmationPopup confirmationPopup);
	private void OnProductPurchaseAvatarResponse(int returnCode, Dictionary<object, object> purchaseResponseData);
	private void InitializedPurchasedAvatar(object sender, InitializedGameQueryDataEventArgs e);
	private void OnActiveAvatarSetAfterPurchase();
	public void SellCurrentAvatar(SellAvatarController avatarSeller);
	private void ScreenShotCallback(Texture2D screenshotTex, string successMessage);
	private void UploadedImageData();
	private void MVNetworGame_ScreenshotUploadedHandler(object sender, ScreenshotUploadedEventArgs e);
	public void SetToNextAnimation();
	public void Set(string animation);
	[CompilerGenerated]
	private void _ResetCallback_b__27_0(IAvatarSetBodyGroup x, BaseEventData y);
	[CompilerGenerated]
	private void _PurchaseAvatar_b__35_0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _InitializedPurchasedAvatar_b__38_1(IAvatarSetBodyGroup x, BaseEventData y);
}

