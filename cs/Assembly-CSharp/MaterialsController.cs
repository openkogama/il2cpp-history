/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialsController : MonoBehaviour, IMaterialClicked, IHandleMaterial
{
	// Fields
	protected CubeModelingStateMachine cubeModelingStateMachine;
	private TabState tab;
	private InventoryController inventoryController;
	protected DesktopCubeModelingController desktopCubeModelingController;
	[SerializeField]
	private InventoryController inventoryControllerPrefab;
	[SerializeField]
	private DesktopCubeModelingController desktopCubeModelingControllerPrefab;
	[SerializeField]
	private int numberOfSlotsPrPage;
	[SerializeField]
	private MaterialViewItem materialViewItemPrefab;
	public UnityAction<byte> materialChange;
	public UnityAction materialsPop;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _Push_c__AnonStorey0
	{
		// Fields
		internal UIPushOption pushOption;
		internal UnityAction onPop;
		internal MaterialsController _this;

		// Constructors
		public _Push_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowInventory_c__AnonStorey1
	{
		// Fields
		internal UIPushOption pushOption;
		internal MaterialsController _this;

		// Constructors
		public _ShowInventory_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public MaterialsController();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
	public virtual Transform SetActive();
	public void Push(UIPushOption pushOption, UnityAction onPop);
	public virtual void OnMaterialChanged(byte id);
	public void ShowMaterialInventory();
	public void ShowMaterialInventoryFirstPage();
	public void OnMaterialClicked(byte materialID);
	private void ShowInventory(UIPushOption pushOption, int page = 1);
	public void PageTurned(int dir);
	public void UpdateContent();
	private void InitializeMaterialInventoryData();
	private void OnPop();
	[CompilerGenerated]
	private static void _OnMaterialClicked_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ShowInventory_m__1(IUIStack handler, BaseEventData data);
}

