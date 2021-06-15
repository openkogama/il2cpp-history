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

public class UploadGameScreenshotHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AudioSource screenShotSound;
	[SerializeField]
	private RawImage fromImage;
	[SerializeField]
	private RawImage toImage;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnScreenShotUploaded_c__AnonStorey0
	{
		// Fields
		internal string text;

		// Constructors
		public _OnScreenShotUploaded_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public UploadGameScreenshotHandler();

	// Methods
	public void TakeScreenshot();
	private void OnScreenshotReady(byte[] imageData);
	public void UploadScreenshot();
	private void OnScreenShotUploaded(object sender, ScreenshotUploadedEventArgs args);
	[CompilerGenerated]
	private static void _UploadScreenshot_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnScreenShotUploaded_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnScreenShotUploaded_m__2(IUIStack x, BaseEventData y);
}

