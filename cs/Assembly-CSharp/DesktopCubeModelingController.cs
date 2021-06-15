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

public class DesktopCubeModelingController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage materialsButtonImage;
	[SerializeField]
	private DesktopCubeModelingToolsController desktopCubeModelingController;
	[SerializeField]
	private Sprite errorSprite;
	[SerializeField]
	private UploadGameScreenshotHandler screenshotHandler;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache3;

	// Nested types
	[CompilerGenerated]
	private sealed class _PublishCallback_c__AnonStorey0
	{
		// Fields
		internal string errorText;

		// Constructors
		public _PublishCallback_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public DesktopCubeModelingController();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
	public void SetMaterial(byte materialId);
	public void PublishGame();
	public void PublishCallback(bool confirmed, ConfirmationPopup popup);
	private void OnPublishPlanetFinished(string completionMessage);
	public void TakeScreenshot();
	[CompilerGenerated]
	private void _PublishGame_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PublishCallback_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PublishCallback_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPublishPlanetFinished_m__3(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _TakeScreenshot_m__4(IModalPopupCreator x, BaseEventData y);
}

