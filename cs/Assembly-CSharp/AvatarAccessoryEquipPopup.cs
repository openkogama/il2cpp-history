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

public class AvatarAccessoryEquipPopup : MonoBehaviour, IEventSystemHandler
{
	// Fields
	[SerializeField]
	private StreamedSpriteToImageManual preview;
	[SerializeField]
	private AccessoryItemBackground itemBackground;
	[SerializeField]
	private GameObject loadingWheel;
	[SerializeField]
	private GameObject emptyFrame;
	private UnityAction resultCallback;
	private AccessoryDataClient accessoryDataClient;
	private float accessoryOffset;
	private float accessoryScale;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Constructors
	public AvatarAccessoryEquipPopup();

	// Methods
	public void Initialize(UnityAction resultCallback, string previewImageUrl, AccessoryDataClient accessoryData, float accessoryOffset, float accessoryScale);
	public void Equip();
	public void DontEquip();
	private void OnPreviewImageDownLoaded();
	[CompilerGenerated]
	private void _Equip_m__0(IAttachToBody x, BaseEventData y);
	[CompilerGenerated]
	private static void _Equip_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _DontEquip_m__2(IUIStack x, BaseEventData y);
}

