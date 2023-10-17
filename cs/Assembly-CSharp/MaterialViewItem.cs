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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public MaterialPurchasePopup materialPurchasePopup;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _OnClick_b__3(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__11_2;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__11_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__13_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnClick_b__11_2(IUIStack handler, BaseEventData data);
		internal void _OnClick_b__11_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnInfoClick_b__13_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public MaterialPurchasePopup materialPurchasePopup;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _OnInfoClick_b__1(IUIStack x, BaseEventData y);
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
	private void _OnClick_b__11_1(IMaterialClicked x, BaseEventData y);
}

