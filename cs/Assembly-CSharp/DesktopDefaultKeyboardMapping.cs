/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopDefaultKeyboardMapping : IKogamaInputMap
{
	// Fields
	protected Dictionary<KogamaControls, KeyCode[]> keyMapping;
	protected ControlBitArray controlDown;

	// Nested types
	protected class ControlBitArray
	{
		// Fields
		private BitArray controlDown;

		// Properties
		public bool this[KogamaControls ctrl] { get => default; set {} }

		// Constructors
		public ControlBitArray();

		// Methods
		public void Reset();
	}

	// Constructors
	public DesktopDefaultKeyboardMapping();

	// Methods
	public void Reset();
	private static Dictionary<KogamaControls, KeyCode[]> ModifiedEmbeddedKeyBindings(Dictionary<KogamaControls, KeyCode[]> keyBindings);
	public bool GetBooleanControl(KogamaControls control, KeyState keyState);
	private bool KeyDown(KogamaControls control);
	private bool KeyUp(KogamaControls control);
}

