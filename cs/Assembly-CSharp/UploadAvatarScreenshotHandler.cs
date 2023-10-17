/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public GameObject popup;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _PrepareScreenshot_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__11_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnScreenshotReadyUploadDirect_b__10_0(IUIStack x, BaseEventData y);
		internal void _OnScreenshotReady_b__11_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public PleaseWaitPopup popup;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _OnUpdatePressed_b__0(IUIStack x, BaseEventData y);
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
}

