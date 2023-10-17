/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EnterPlayModeButton : MonoBehaviour
{
	// Fields
	public Action enteringPlayMode;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IEditModeController> __9__1_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Execute_b__1_0(IEditModeController x, BaseEventData y);
	}

	// Constructors
	public EnterPlayModeButton();

	// Methods
	public void Execute();
}

