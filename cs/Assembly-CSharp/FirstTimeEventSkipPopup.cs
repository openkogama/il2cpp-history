/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeEventSkipPopup : MonoBehaviour
{
	// Fields
	private FirstTimeActivatableElementBase targetElement;
	private FirstTimeEvent eventToSkip;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__3_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Ok_b__3_0(IUIStack x, BaseEventData y);
		internal void _Cancel_b__4_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeEventSkipPopup();

	// Methods
	public void Initialize(FirstTimeEvent firstTimeEvent, FirstTimeActivatableElementBase elementToSkip);
	public void Ok();
	public void Cancel();
}

