/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public static class RTInput
	{
		// Properties
		public static Vector3 MousePosition { get; }
		public static bool IsMousePresent { get; }
		public static int TouchCount { get; }
	
		// Methods
		public static bool WasLeftMouseButtonPressedThisFrame();
		public static bool WasRightMouseButtonPressedThisFrame();
		public static bool WasMiddleMouseButtonPressedThisFrame();
		public static bool WasMouseButtonPressedThisFrame(int mouseButton);
		public static bool WasMouseButtonReleasedThisFrame(int mouseButton);
		public static bool IsLeftMouseButtonPressed();
		public static bool IsRightMouseButtonPressed();
		public static bool IsMiddleMouseButtonPressed();
		public static bool IsMouseButtonPressed(int mouseButton);
		public static bool WasMouseMoved();
		public static float MouseAxisX();
		public static float MouseAxisY();
		public static float MouseScroll();
		public static bool WasKeyPressedThisFrame(KeyCode keyCode);
		public static bool IsKeyPressed(KeyCode keyCode);
		public static Vector2 TouchDelta(int touchIndex);
		public static Vector2 TouchPosition(int touchIndex);
		public static bool TouchBegan(int touchIndex);
		public static bool TouchEndedOrCanceled(int touchIndex);
		public static bool TouchMoved(int touchIndex);
	}
}
