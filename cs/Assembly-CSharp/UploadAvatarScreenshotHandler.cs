/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UploadAvatarScreenshotHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AvatarScreenShooter screenShooter;
	[SerializeField]
	private PleaseWaitPopup pleaseWaitPopupPrefab;
	[SerializeField]
	private GameObject invisibleBlocker;
	[SerializeField]
	private RawImage fromImage;
	[SerializeField]
	private RawImage toImage;
	private Action<Texture2D, string> OnUploadScreenshot;
	private MVBody avatarBody;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _PrepareScreenshot_c__AnonStorey0
	{
		// Fields
		internal GameObject popup;

		// Constructors
		public _PrepareScreenshot_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnUpdatePressed_c__AnonStorey1
	{
		// Fields
		internal PleaseWaitPopup popup;

		// Constructors
		public _OnUpdatePressed_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public UploadAvatarScreenshotHandler();

	// Methods
	public void TakeScreenshot(MVBody currentBody, Action<Texture2D, string> onUploadScreenshot, bool purchasedAvatar = false);
	public void TakePurchasedScreenshot(MVBody currentBody, Action<Texture2D, string> onUploadScreenshot, bool purchasedAvatar = true);
	private void PrepareScreenshot(MVBody currentBody, Action<Texture2D, string> onUploadScreenshot, bool purchasedAvatar, out string successText);
	private void OnScreenshotReadyUploadDirect(Texture2D texture, string text);
	private void OnScreenshotReady(Texture2D texture, string text);
	public void OnUpdatePressed();
	private void UploadAndDestroy(Texture2D texture, string successText);
	[CompilerGenerated]
	private static void _OnScreenshotReadyUploadDirect_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnScreenshotReady_m__1(IUIStack x, BaseEventData y);
}

