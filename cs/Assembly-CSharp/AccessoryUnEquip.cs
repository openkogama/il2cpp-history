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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryUnEquip : MonoBehaviour
{
	// Fields
	private AccessorySlotType avatarAccessorySlot;
	public UnityAction OnUnequipFinished;
	private MVBody AvatarBody;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Constructors
	public AccessoryUnEquip();

	// Methods
	public void Initialize(AccessorySlotType avatarAccessorySlot, MVBody body);
	public void UnEquip();
	private void OnUnequipPop(bool setSlotSuccess);
	private void OnDestroy();
	private void Game_OnSetAvatarAccessorySlotResponseUnequipHandler(bool setSlotSuccess);
	[CompilerGenerated]
	private static void _UnEquip_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnUnequipPop_m__1(IUIStack x, BaseEventData y);
}

