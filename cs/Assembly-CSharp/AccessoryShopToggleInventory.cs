/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryShopToggleInventory : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Toggle toggle;
	[SerializeField]
	private GameObject backpackOn;
	[SerializeField]
	private GameObject backpackOff;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private Image checkBox;
	[SerializeField]
	private Color toggleOnColor;
	[SerializeField]
	private Color toggleOffColor;

	// Constructors
	public AccessoryShopToggleInventory();

	// Methods
	public void SetBackpackIconIsEnabled(bool enable);
	public void OnValueChanged();
	[CompilerGenerated]
	private void _OnValueChanged_b__8_0(IAccessoryInventoryControl x, BaseEventData y);
}

