/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using IngameController.CubeModeling;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopCubeModelingController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage materialsButtonImage;
	[SerializeField]
	private DesktopCubeModelingToolsController desktopCubeModelingController;
	[SerializeField]
	private DesktopCubeModelingTogglesController togglesController;
	[SerializeField]
	private Sprite errorSprite;
	[SerializeField]
	private UploadGameScreenshotHandler screenshotHandler;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__9_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__11_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _PublishCallback_b__9_0(IModalPopupCreator x, BaseEventData y);
		internal void _PublishCallback_b__9_2(IUIStack x, BaseEventData y);
		internal void _OnPublishPlanetFinished_b__10_0(IUIStack x, BaseEventData y);
		internal void _TakeScreenshot_b__11_0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public string errorText;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _PublishCallback_b__3(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public DesktopCubeModelingController();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
	public void SetMaterial(byte materialId);
	public void SwitchToDefaultTool();
	public void PublishGame();
	public void PublishCallback(bool confirmed, ConfirmationPopup popup);
	private void OnPublishPlanetFinished(string completionMessage);
	public void TakeScreenshot();
	[CompilerGenerated]
	private void _PublishGame_b__8_0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _PublishCallback_b__9_1(string errorText);
}

