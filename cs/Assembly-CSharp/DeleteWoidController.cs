/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeleteWoidController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PickHelper pickHelperPrefab;
	private int woid;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal PickHelper pickHelper;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public DeleteWoidController();

	// Methods
	public void Initialize();
	private void OnPick(MVWorldObjectClient wo, MVWorldObjectClient woParent);
	private void DeleteWorldObject(bool success, ConfirmationPopup popup);
	[CompilerGenerated]
	private void _OnPick_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _OnPick_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _DeleteWorldObject_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private void _DeleteWorldObject_m__3(IEditModeController x, BaseEventData y);
	[CompilerGenerated]
	private static void _DeleteWorldObject_m__4(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _DeleteWorldObject_m__5(IUIStack x, BaseEventData y);
}

