/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.Avatar.Accessories;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryInventoryViewItem : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
{
	// Fields
	private bool locked;
	[SerializeField]
	private RectTransform previewImage;
	[SerializeField]
	private StreamedSpriteToImageManual previewImageStreaminAssetManual;
	[SerializeField]
	private GameObject loadingWheel;
	[SerializeField]
	private AccessoryItemBackground accessoryItemBackground;
	[SerializeField]
	private Button purchasePopupButton;
	[SerializeField]
	private AvatarAccessoryPurchasePopup purchasePopupPrefab;
	[SerializeField]
	private Toggle equipCheckbox;
	[SerializeField]
	private GameObject priceDisplay;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private GameObject priceStrikeout;
	[SerializeField]
	private UnityEngine.UI.Text priceStrikeoutText;
	[SerializeField]
	private AccessoryPreviewer accessoryPreviewerPrefab;
	[SerializeField]
	private GameObject discount;
	[SerializeField]
	private UnityEngine.UI.Text discountText;
	[SerializeField]
	private GameObject freeLabel;
	[SerializeField]
	private GameObject newAccessoryImage;
	[SerializeField]
	private GameObject redDotNotification;
	[SerializeField]
	private RawImage levelRequirement;
	[SerializeField]
	private AccessoryTimeLimitDisplayer timeLimitDisplayer;
	private Transform rootTransform;
	private AccessoryLoader accessoryLoader;
	private MVBody targetBody;
	private AccessoryDataClient accessoryDataClient;
	private Texture2D levelRequirementTextureAsset;
	private int highlightId;
	private bool bundleView;
	private bool wasDestroyed;
	private float effectDuration;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IInventoryChanged> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnHoverEvent_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _startTime___0;
		internal Vector2 _startSize___0;
		internal float sizeOffset;
		internal Vector2 _targetSize___0;
		internal AccessoryInventoryViewItem _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OnHoverEvent_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public AccessoryInventoryViewItem();

	// Methods
	public void Initialize(AccessoryDataClient accessoryDataClient, Transform rootTransform, MVBody targetBody, bool bundleView = false);
	private void SetLevelBadge();
	private void OnLevelRequirementLoaded(UnityWebRequest www);
	public void OnClicked();
	public void OnEquip(bool onEquip);
	private void UnequipAccessoryCallback();
	private void OnPurchasePopupPop();
	private void OnDestroy();
	private void AccessoryCreatedCallback(AvatarAccessory avatarAccessory);
	private void OnPreviewImageDownloadFinished();
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void OnPointerClick(PointerEventData eventData);
	[DebuggerHidden]
	private IEnumerator OnHoverEvent(float sizeOffset);
	[CompilerGenerated]
	private void _OnClicked_m__0(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private void _OnClicked_m__1(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private void _OnEquip_m__2(IAttachToBody x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPurchasePopupPop_m__3(IInventoryChanged x, BaseEventData y);
}

