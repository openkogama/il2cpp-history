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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Equip_b__9_1(IUIStack x, BaseEventData y);
		internal void _DontEquip_b__10_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AvatarAccessoryEquipPopup();

	// Methods
	public void Initialize(UnityAction resultCallback, string previewImageUrl, AccessoryDataClient accessoryData, float accessoryOffset, float accessoryScale);
	public void Equip();
	public void DontEquip();
	private void OnPreviewImageDownLoaded();
	[CompilerGenerated]
	private void _Equip_b__9_0(IAttachToBody x, BaseEventData y);
}

