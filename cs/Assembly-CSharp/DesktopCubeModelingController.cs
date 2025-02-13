/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
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
	private IEnumerator setButtonTextureRoutine;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__11_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__11_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__13_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _PublishCallback_b__11_0(IModalPopupCreator x, BaseEventData y);
		internal void _PublishCallback_b__11_2(IUIStack x, BaseEventData y);
		internal void _OnPublishPlanetFinished_b__12_0(IUIStack x, BaseEventData y);
		internal void _TakeScreenshot_b__13_0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public string errorText;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _PublishCallback_b__3(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _SetButtonTextureRoutine_d__8 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public DesktopCubeModelingController __4__this;
		public byte materialId;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _SetButtonTextureRoutine_d__8(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public DesktopCubeModelingController();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
	public void SetMaterial(byte materialId);
	[IteratorStateMachine(typeof(_SetButtonTextureRoutine_d__8))]
	private IEnumerator SetButtonTextureRoutine(byte materialId);
	public void SwitchToDefaultTool();
	public void PublishGame();
	public void PublishCallback(bool confirmed, ConfirmationPopup popup);
	private void OnPublishPlanetFinished(string completionMessage);
	public void TakeScreenshot();
	[CompilerGenerated]
	private void _PublishGame_b__10_0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _PublishCallback_b__11_1(string errorText);
}

