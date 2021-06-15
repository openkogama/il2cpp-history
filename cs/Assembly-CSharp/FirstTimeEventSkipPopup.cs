/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeEventSkipPopup : MonoBehaviour
{
	// Fields
	private FirstTimeActivatableElementBase targetElement;
	private FirstTimeEvent eventToSkip;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Constructors
	public FirstTimeEventSkipPopup();

	// Methods
	public void Initialize(FirstTimeEvent firstTimeEvent, FirstTimeActivatableElementBase elementToSkip);
	public void Ok();
	public void Cancel();
	[CompilerGenerated]
	private static void _Ok_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _Cancel_m__1(IUIStack x, BaseEventData y);
}

