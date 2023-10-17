/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public MaterialsController __4__this;
		public UIPushOption pushOption;
		public UnityAction onPop;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _Push_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__16_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__17_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnMaterialClicked_b__16_0(IUIStack x, BaseEventData y);
		internal void _ShowInventory_b__17_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public MaterialsController __4__this;
		public UIPushOption pushOption;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal void _ShowInventory_b__1(IUIStack x, BaseEventData y);
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
}

