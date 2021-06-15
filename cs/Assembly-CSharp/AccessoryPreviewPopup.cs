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

public class AccessoryPreviewPopup : MonoBehaviour, IAccessoryClicked
{
	// Fields
	[SerializeField]
	private AccessoryInventoryViewItem accessoryPopupItemPrefab;
	[SerializeField]
	private HorizontalLayoutGroup layoutGroup;
	private Transform tempTransform;
	private MVBody body;

	// Nested types
	[CompilerGenerated]
	private sealed class _OpenAccessoryManagementScreen_c__AnonStorey0
	{
		// Fields
		internal AccessoryDataClient accessoryData;

		// Constructors
		public _OpenAccessoryManagementScreen_c__AnonStorey0();

		// Methods
		internal void __m__0(IAccessoryPopupHandler x, BaseEventData y);
	}

	// Constructors
	public AccessoryPreviewPopup();

	// Methods
	public void Initialize(List<AccessoryDataClient> previewedAccessories);
	private void SetBody(MVBody avatarBody);
	public void OpenAccessoryManagementScreen(AccessoryDataClient accessoryData);
	public void DisplayCategoryFeatures(AccessoryCategoryClient category);
	public void OpenCategoryScreen(bool canSortByInventory);
	public void UpdateHighlightedTab(AccessoryCategoryClient category);
	private void OnDestroy();
	[CompilerGenerated]
	private void _Initialize_m__0(IGetCurrentBody x, BaseEventData y);
}

