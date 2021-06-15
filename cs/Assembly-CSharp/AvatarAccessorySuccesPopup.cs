/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarAccessorySuccesPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage preview;
	[SerializeField]
	private AccessoryItemBackground itemBackground;
	private UnityAction resultCallback;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public AvatarAccessorySuccesPopup();

	// Methods
	public void Initialize(UnityAction resultCallback, Texture previewImage, AccessoryDataClient accessoryData);
	public void OnButtonPressed();
	[CompilerGenerated]
	private static void _OnButtonPressed_m__0(IUIStack x, BaseEventData y);
}

