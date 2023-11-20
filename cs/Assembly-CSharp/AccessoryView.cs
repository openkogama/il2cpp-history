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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__46_0;
		public static ExecuteEvents.EventFunction<IAccessoryClicked> __9__50_0;
		public static ExecuteEvents.EventFunction<IAccessoryInventoryControl> __9__50_1;
		public static ExecuteEvents.EventFunction<IAccessoryClicked> __9__52_0;
		public static ExecuteEvents.EventFunction<IAccessoryInventoryControl> __9__52_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Pop_b__46_0(IUIStack x, BaseEventData y);
		internal void _BackToShop_b__50_0(IAccessoryClicked x, BaseEventData y);
		internal void _BackToShop_b__50_1(IAccessoryInventoryControl x, BaseEventData y);
		internal void _EquipPopupResultCallback_b__52_0(IAccessoryClicked x, BaseEventData y);
		internal void _EquipPopupResultCallback_b__52_1(IAccessoryInventoryControl x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass42_0
	{
		// Fields
		public AvatarAccessoryEquipPopup popup;

		// Constructors
		public __c__DisplayClass42_0();

		// Methods
		internal void _OnDisable_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass47_0
	{
		// Fields
		public AvatarAccessoryErrorPopup errorPopup;

		// Constructors
		public __c__DisplayClass47_0();

		// Methods
		internal void _OnPurchaseButtonPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass47_1
	{
		// Fields
		public LevelErrorPopup errorPopup;

		// Constructors
		public __c__DisplayClass47_1();

		// Methods
		internal void _OnPurchaseButtonPressed_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass48_0
	{
		// Fields
		public AvatarAccessoryPurchasePopup popUp;
		public AccessoryView __4__this;

		// Constructors
		public __c__DisplayClass48_0();

		// Methods
		internal void _Purchase_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass48_1
	{
		// Fields
		public AvatarAccessoryErrorPopup popUp;
		public AccessoryView __4__this;

		// Constructors
		public __c__DisplayClass48_1();

		// Methods
		internal void _Purchase_b__1(IUIStack x, BaseEventData y);
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
	private void _Initialize_b__39_0(IGetCurrentBody x, BaseEventData y);
}

