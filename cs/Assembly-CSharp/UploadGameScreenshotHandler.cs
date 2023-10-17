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

public class UploadGameScreenshotHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AudioSource screenShotSound;
	[SerializeField]
	private RawImage fromImage;
	[SerializeField]
	private RawImage toImage;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__5_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__6_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__6_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _UploadScreenshot_b__5_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnScreenShotUploaded_b__6_0(IUIStack x, BaseEventData y);
		internal void _OnScreenShotUploaded_b__6_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public string text;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _OnScreenShotUploaded_b__2(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public UploadGameScreenshotHandler();

	// Methods
	public void TakeScreenshot();
	private void OnScreenshotReady(byte[] imageData);
	public void UploadScreenshot();
	private void OnScreenShotUploaded(object sender, ScreenshotUploadedEventArgs args);
}

