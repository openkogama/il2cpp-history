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

public class AvatarAccessoryErrorPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private StreamedSpriteToImageManual preview;
	[SerializeField]
	private AccessoryItemBackground itemBackground;
	[SerializeField]
	private UnityEngine.UI.Text header;
	[SerializeField]
	private UnityEngine.UI.Text buttonText;
	[SerializeField]
	private GameObject loadingWheel;
	[SerializeField]
	private GameObject emptyFrame;
	private UnityAction<bool> resultCallback;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public AvatarAccessoryErrorPopup();

	// Methods
	public void Initialize(UnityAction<bool> resultCallback, string previewImageUrl, AccessoryDataClient accessoryData, string header, string buttonText);
	public void OnButtonPressed(bool confirmed);
	private void OnPreviewImageDownLoaded();
	[CompilerGenerated]
	private static void _OnButtonPressed_m__0(IUIStack x, BaseEventData y);
}

