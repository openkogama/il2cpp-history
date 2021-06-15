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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IShortcutKeyUnRegister> __f__am_cache1;

	// Constructors
	public MaterialsControllerEditMode();
	static MaterialsControllerEditMode();

	// Methods
	private void OnEnable();
	public override Transform SetActive();
	public void Open(UnityAction closeCallback);
	public override void OnMaterialChanged(byte id);
	public void Close();
	private void PlayModeToggleOverwrite();
	private new void OnPop();
	[CompilerGenerated]
	private void _Open_m__0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private static void _Open_m__1(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _Open_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPop_m__3(IShortcutKeyUnRegister x, BaseEventData y);
}

