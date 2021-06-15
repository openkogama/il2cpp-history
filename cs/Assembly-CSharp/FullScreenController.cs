/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class FullScreenController
{
	// Fields
	private static int screenWidthBeforeFullscreen;
	private static int screenHeightBeforeFullscreen;
	private static bool fullScreen;
	private static bool waitingForFullscreenChange;
	private static bool fullscreenStatCollected;
	public static UnityAction<bool> OnFullScreenChange;

	// Properties
	public static bool FullScreen { get; set; }

	// Constructors
	static FullScreenController();

	// Methods
	public static void Init(int width, int height);
	public static void LateUpdate();
	public static bool AllowFullscreenChange();
}

