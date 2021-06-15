/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialViewItem : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	private byte id;
	private bool locked;
	private bool isAvailable;
	[SerializeField]
	private Image lockedImage;
	[SerializeField]
	private RawImage buttonImage;
	[SerializeField]
	private MaterialPurchasePopup materialPurchasePopupPrefab;
	[SerializeField]
	private float unavailableAlpha;
	[SerializeField]
	private Image selectedBackground;
	[SerializeField]
	private ToolTip toolTip;
	[SerializeField]
	private GameObject mouseHoverDescriptionFrame;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnClick_c__AnonStorey0
	{
		// Fields
		internal MaterialPurchasePopup materialPurchasePopup;

		// Constructors
		public _OnClick_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnInfoClick_c__AnonStorey1
	{
		// Fields
		internal MaterialPurchasePopup materialPurchasePopup;

		// Constructors
		public _OnInfoClick_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public MaterialViewItem();

	// Methods
	public void Initialize(byte id, bool locked, Texture2D texture2D, bool isAvailable, bool isSelected);
	public void OnClick();
	private void PurchaseCallback(bool success, Dictionary<object, object> purchaseData);
	public void OnInfoClick();
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	[CompilerGenerated]
	private static void _OnClick_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _OnClick_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _OnClick_m__2(IMaterialClicked x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnInfoClick_m__3(IUIStack handler, BaseEventData data);
}

