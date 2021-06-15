/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.Avatar.Accessories;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryView : MonoBehaviour
{
	// Fields
	private AccessoryDataClient accessoryDataClient;
	[SerializeField]
	private Image previewImage;
	[SerializeField]
	private StreamedSpriteToImageManual previewImageStreamingManager;
	[SerializeField]
	private UnityEngine.UI.Text nameText;
	[SerializeField]
	private Button purchaseButton;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private UnityEngine.UI.Text priceTextWithoutDiscount;
	[SerializeField]
	private UnityEngine.UI.Text originalPriceText;
	[SerializeField]
	private GameObject discountTag;
	[SerializeField]
	private UnityEngine.UI.Text discountTagText;
	[SerializeField]
	private UnityEngine.UI.Text goldSavedText;
	[SerializeField]
	private AccessoryOffsetSlider offsetSlider;
	[SerializeField]
	private AccessorySizeSlider sizeSlider;
	[SerializeField]
	private AccessoryItemBackground accessoryItemBackground;
	[SerializeField]
	private AccessoryTimeLimitDisplayer timeLimitDisplayer;
	[SerializeField]
	private RawImage levelRequirementPurchaseButton;
	[SerializeField]
	private GameObject newAccessoryImage;
	[SerializeField]
	private TabMenuAccessoryShop tabMenu;
	[SerializeField]
	private AvatarAccessoryPurchasePopup AvatarAccessoryPurchasePopupPrefab;
	[SerializeField]
	private AccessoryPreviewer accessoryPreviewerPrefab;
	[SerializeField]
	private PlayerCurrentGoldAmountTracker currentGoldAmountTracker;
	[SerializeField]
	private AvatarAccessoryEquipPopup avatarAccessoryEquipPopup;
	[SerializeField]
	private AvatarAccessoryErrorPopup insufficientResourcePopup;
	[SerializeField]
	private LevelErrorPopup insufficientLevelPopup;
	[SerializeField]
	private GameObject shopCloseButton;
	[SerializeField]
	private GameObject loadingWheel;
	[SerializeField]
	private GameObject emptyFrame;
	[SerializeField]
	private UnityEngine.UI.Text claimText;
	[SerializeField]
	private AvatarAccessoryErrorPopup touristErrorPopup;
	[SerializeField]
	private AccessoryShinyButton buttonAnimation;
	[SerializeField]
	private GameObject lockIcon;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private AccessoryPreviewer previewer;
	private Transform rootTransform;
	private AccessoryLoader accessoryLoader;
	private Action OnFinished;
	private bool isPreviewing;
	private MVBody avatarBody;
	private string previewImageUrl;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryClicked> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryInventoryControl> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryClicked> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryInventoryControl> __f__am_cache4;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnDisable_c__AnonStorey0
	{
		// Fields
		internal AvatarAccessoryEquipPopup popup;

		// Constructors
		public _OnDisable_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnPurchaseButtonPressed_c__AnonStorey1
	{
		// Fields
		internal AvatarAccessoryErrorPopup errorPopup;

		// Constructors
		public _OnPurchaseButtonPressed_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnPurchaseButtonPressed_c__AnonStorey2
	{
		// Fields
		internal LevelErrorPopup errorPopup;

		// Constructors
		public _OnPurchaseButtonPressed_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Purchase_c__AnonStorey3
	{
		// Fields
		internal AvatarAccessoryPurchasePopup popUp;
		internal AccessoryView _this;

		// Constructors
		public _Purchase_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Purchase_c__AnonStorey4
	{
		// Fields
		internal AvatarAccessoryErrorPopup popUp;
		internal AccessoryView _this;

		// Constructors
		public _Purchase_c__AnonStorey4();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AccessoryView();

	// Methods
	public void Initialize(AccessoryDataClient accessoryData);
	public bool CurrentlyViewingAccessory(AccessoryDataClient data);
	private void OnEnable();
	private void OnDisable();
	private void HandlePreviewing(MVBody avatarBody);
	private void OnLevelRequirementLoaded(UnityWebRequest www);
	public void Destroy();
	public void Pop();
	public void OnPurchaseButtonPressed();
	public void Purchase();
	private void OnGoldPurchaseDialogResult(bool result);
	public void BackToShop();
	private void DestroyFeaturedTab();
	private void EquipPopupResultCallback();
	private void AvatarAccessoryCreateHandler(AvatarAccessory avatarAccessory);
	private void OnPreviewImageFinishedDownloading();
	private void HandlePrices(AccessoryDataClient streamingAssetInfo);
	private void SetShowPrices(bool shouldShow);
	private void HandleNotOwnedUI();
	private void HideNotLoadedStreamingAssetsObject();
	private void ShowLoadedStreamingAssetsObject();
	private void SetShowNotOwnedUI(bool shouldShow);
	private void OnTouristSignupClicked(bool confirmed);
	[CompilerGenerated]
	private void _Initialize_m__0(IGetCurrentBody x, BaseEventData y);
	[CompilerGenerated]
	private static void _Pop_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _BackToShop_m__2(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private static void _BackToShop_m__3(IAccessoryInventoryControl x, BaseEventData y);
	[CompilerGenerated]
	private static void _EquipPopupResultCallback_m__4(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private static void _EquipPopupResultCallback_m__5(IAccessoryInventoryControl x, BaseEventData y);
}

