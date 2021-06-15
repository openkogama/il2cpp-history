/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarShopController : MonoBehaviour, IPurchaseAvatar
{
	// Fields
	private InventoryController inventoryController;
	private TabState tab;
	[SerializeField]
	private int numberOfSlotsPrPage;
	[SerializeField]
	private InventoryController inventoryControllerPrefab;
	[SerializeField]
	private AvatarShopPreviewItem previewItemPrefab;
	private Transform previewRootTransform;
	private AvatarEditModeBodyController avatarEditModeBodyController;
	private AvatarRepository avatarRepository;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _Activate_c__AnonStorey0
	{
		// Fields
		internal UIPushOption pushOption;
		internal AvatarShopController _this;

		// Constructors
		public _Activate_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AvatarShopController();

	// Methods
	public void Initialize(AvatarEditModeBodyController editModeBodyController);
	private static MVWorldObjectClient GetWorldObjectFromItemData(AvatarRepositoryItem item);
	public void Activate(UIPushOption pushOption);
	private void UpdateContent();
	private void AddPreviewObjectForIndex(int index);
	private void OnPop();
	public void PageTurned(int dir);
	public void PurchaseAvatar(AvatarRepositoryItem item);
	[CompilerGenerated]
	private static void _Activate_m__0(IUIStack handler, BaseEventData data);
}

