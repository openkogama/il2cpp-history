/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryUnEquip : MonoBehaviour
{
	// Fields
	private AccessorySlotType avatarAccessorySlot;
	public UnityAction OnUnequipFinished;
	private MVBody AvatarBody;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__4_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__5_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _UnEquip_b__4_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnUnequipPop_b__5_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AccessoryUnEquip();

	// Methods
	public void Initialize(AccessorySlotType avatarAccessorySlot, MVBody body);
	public void UnEquip();
	private void OnUnequipPop(bool setSlotSuccess);
	private void OnDestroy();
	private void Game_OnSetAvatarAccessorySlotResponseUnequipHandler(bool setSlotSuccess);
}

