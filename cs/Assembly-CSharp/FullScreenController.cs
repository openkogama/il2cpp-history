/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Misc;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class FullScreenController
{
	// Fields
	private static int screenWidthBeforeFullscreen;
	private static int screenHeightBeforeFullscreen;
	private static bool fullScreen;
	private static bool fullscreenStatCollected;
	public static bool fullscreenSupported;
	private static bool fakeFullscreen;
	private static bool initialized;
	private static bool debugging;
	public static UnityAction<bool> OnFullScreenChange;
	[CompilerGenerated]
	private static bool _WaitingForFullscreenChange_k__BackingField;

	// Properties
	public static bool WaitingForFullscreenChange { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static bool FullScreen { get; set; }
	public static bool ShouldHideOrientationWarning { get; }

	// Constructors
	static FullScreenController();

	// Methods
	private static void PrintLog(string s);
	public static void Init(int width, int height, bool init);
	public static void InitSupports(bool fsSupport, bool fake);
	private static void UpdateFullscreenIfApplicable();
	public static Tuple<int, int> GetWidthHeight(MVOrientation orientation, int widthInput, int heightInput);
	public static void PrintMeasures(string prefix);
	public static void LateUpdate();
	public static bool AllowFullscreenChange();
	private static bool IsFullscreenSupported();
}

