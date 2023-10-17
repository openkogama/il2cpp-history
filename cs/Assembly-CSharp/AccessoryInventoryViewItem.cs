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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IInventoryChanged> __9__33_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnPurchasePopupPop_b__33_0(IInventoryChanged x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnAndroidEndHoverEvent_d__41 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AccessoryInventoryViewItem __4__this;
		private float _androidStartTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OnAndroidEndHoverEvent_d__41(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _OnHoverEvent_d__43 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AccessoryInventoryViewItem __4__this;
		public float sizeOffset;
		private float _startTime_5__2;
		private Vector2 _startSize_5__3;
		private Vector2 _targetSize_5__4;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OnHoverEvent_d__43(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
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
	[IteratorStateMachine(typeof(_OnAndroidEndHoverEvent_d__41))]
	private IEnumerator OnAndroidEndHoverEvent();
	[IteratorStateMachine(typeof(_OnHoverEvent_d__43))]
	private IEnumerator OnHoverEvent(float sizeOffset);
	[CompilerGenerated]
	private void _OnClicked_b__30_0(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private void _OnClicked_b__30_1(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private void _OnEquip_b__31_0(IAttachToBody x, BaseEventData y);
}

