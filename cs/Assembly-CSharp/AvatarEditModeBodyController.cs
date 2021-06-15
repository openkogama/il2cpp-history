/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static Func<MVWorldObjectClient, bool> __f__am_cache0;
	[CompilerGenerated]
	private static Func<MVWorldObjectClient, bool> __f__am_cache1;
	[CompilerGenerated]
	private static Func<MVWorldObjectClient, int> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditStateCommands> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache5;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache6;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache7;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache8;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache9;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheA;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cacheB;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IPurchaseSoundManager> __f__am_cacheC;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheD;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditStateCommands> __f__am_cacheE;

	// Properties
	public MVBody CurrentBody { get; }
	public Vector3 DisplayPos { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _ResetCurrentBody_c__AnonStorey0
	{
		// Fields
		internal ResetAvatarHandler resetHandler;

		// Constructors
		public _ResetCurrentBody_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnPurchaseAvatarConfirmation_c__AnonStorey1
	{
		// Fields
		internal PleaseWaitPopup popup;

		// Constructors
		public _OnPurchaseAvatarConfirmation_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnProductPurchaseAvatarResponse_c__AnonStorey2
	{
		// Fields
		internal int returnCode;
		internal AvatarEditModeBodyController _this;

		// Constructors
		public _OnProductPurchaseAvatarResponse_c__AnonStorey2();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _MVNetworGame_ScreenshotUploadedHandler_c__AnonStorey3
	{
		// Fields
		internal NotificationPopup popup;

		// Constructors
		public _MVNetworGame_ScreenshotUploadedHandler_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AvatarEditModeBodyController();
	static AvatarEditModeBodyController();

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
	private static bool _Initialize_m__0(MVWorldObjectClient wo);
	[CompilerGenerated]
	private static bool _Initialize_m__1(MVWorldObjectClient wo);
	[CompilerGenerated]
	private static int _Initialize_m__2(MVWorldObjectClient s);
	[CompilerGenerated]
	private void _ResetCallback_m__3(IAvatarSetBodyGroup x, BaseEventData y);
	[CompilerGenerated]
	private static void _ResetCallback_m__4(IEditStateCommands x, BaseEventData y);
	[CompilerGenerated]
	private static void _ResetCallback_m__5(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ResetCallback_m__6(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _TakeScreenshot_m__7(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _PurchaseAvatar_m__8(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPurchaseAvatarConfirmation_m__9(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnProductPurchaseAvatarResponse_m__A(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _InitializedPurchasedAvatar_m__B(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _InitializedPurchasedAvatar_m__C(IAvatarSetBodyGroup x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnActiveAvatarSetAfterPurchase_m__D(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnActiveAvatarSetAfterPurchase_m__E(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _MVNetworGame_ScreenshotUploadedHandler_m__F(IPurchaseSoundManager x, BaseEventData y);
	[CompilerGenerated]
	private static void _MVNetworGame_ScreenshotUploadedHandler_m__10(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _MVNetworGame_ScreenshotUploadedHandler_m__11(IEditStateCommands x, BaseEventData y);
}

