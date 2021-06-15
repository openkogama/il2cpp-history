/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal static class MVInputWrapper
{
	// Fields
	private static float mouseSensitivtyModifier;
	private static InputSuppression isInputAllSuppressed;
	private static InputSuppression isShortcutKeysSuppressed;
	private static InputSuppression isInGameInputSuppressed;
	private static IKogamaInputMap inputMap;

	// Properties
	public static float MouseSensitivityModifier { get; set; }
	public static bool IsAllInputSuppressed { get; }
	public static bool IsShortcutKeysSuppressed { get; }
	public static bool IsInGameInputSuppressed { get; }

	// Nested types
	public class InputSuppression
	{
		// Fields
		private int suppressionFrame;

		// Properties
		protected virtual bool IsSuppressed { get; set; }

		// Constructors
		protected InputSuppression(bool a);

		// Methods
		public static implicit operator InputSuppression(bool a);
		public static implicit operator bool(InputSuppression a);
	}

	// Constructors
	static MVInputWrapper();

	// Methods
	public static void SuppressAllInput();
	public static void SuppressShortcutKeys();
	public static void SuppressInGameInput();
	public static void SetInputMap(IKogamaInputMap inputMap);
	public static bool GetBooleanControl(KogamaControls control);
	public static bool GetBooleanControlDown(KogamaControls control);
	public static bool GetBooleanControlUp(KogamaControls control);
	private static bool GetBooleanControl(KogamaControls control, KeyState keyState);
	public static Vector3 GetPointerPosition();
	public static float GetAxis(string axis);
	public static float GetAxisWithoutSensitivity(string axis);
	public static float GetAxisRaw(string axis);
	public static float GetAxisRawWithoutSensitivity(string axis);
	public static void ResetInput();
	public static bool DebugGetKeyDown(KeyCode key);
	public static bool DebugGetKeyDown(string st);
	public static bool DebugGetKey(KeyCode key);
	public static bool DebugGetKey(string st);
	public static bool DebugGetKeyUp(KeyCode key);
	public static bool DebugGetKeyUp(string st);
	public static bool InputCharActive(KeyCode key);
	public static bool InputCharActiveDown(KeyCode key);
	public static string GetStringInput();
}

