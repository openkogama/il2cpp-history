/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeleteWoidController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PickHelper pickHelperPrefab;
	private int woid;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass2_0
	{
		// Fields
		public PickHelper pickHelper;

		// Constructors
		public __c__DisplayClass2_0();

		// Methods
		internal void _Initialize_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__4_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_3;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _DeleteWorldObject_b__4_0(IUIStack x, BaseEventData y);
		internal void _DeleteWorldObject_b__4_2(IModalPopupCreator x, BaseEventData y);
		internal void _DeleteWorldObject_b__4_3(IUIStack x, BaseEventData y);
	}

	// Constructors
	public DeleteWoidController();

	// Methods
	public void Initialize();
	private void OnPick(MVWorldObjectClient wo, MVWorldObjectClient woParent);
	private void DeleteWorldObject(bool success, ConfirmationPopup popup);
	[CompilerGenerated]
	private void _OnPick_b__3_0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _OnPick_b__3_1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _DeleteWorldObject_b__4_1(IEditModeController x, BaseEventData y);
}

