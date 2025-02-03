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

public class MaterialsControllerEditMode : MaterialsController, IHandleCubeModelEdit
{
	// Fields
	[SerializeField]
	private CreateCubeModelController createCubeModelController;
	[SerializeField]
	private DesktopCubeModelingController desktopCubeModelingControllerEditCubeModelPrefab;
	public static byte targetMaterial;
	private DesktopCubeModelingController desktopCubeModelingControllerEditMode;
	private UnityAction closeCallback;
	private byte prevMaterial;

	// Properties
	public Transform CubeModelingControllerTransform { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_1;
		public static ExecuteEvents.EventFunction<IShortcutKeyUnRegister> __9__14_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Open_b__10_1(IUIStack handler, BaseEventData data);
		internal void _OnPop_b__14_0(IShortcutKeyUnRegister x, BaseEventData y);
	}

	// Constructors
	public MaterialsControllerEditMode();

	// Methods
	private void OnEnable();
	public override Transform SetActive();
	public void Open(UnityAction closeCallback);
	public override void OnMaterialChanged(byte id);
	public void Close();
	private void PlayModeToggleOverwrite();
	private new void OnPop();
	[CompilerGenerated]
	private void _Open_b__10_0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _Open_b__10_2(IUIStack x, BaseEventData y);
}

