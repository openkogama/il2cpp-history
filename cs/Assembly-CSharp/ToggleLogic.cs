/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ToggleLogic : ToggleHandler
{
	// Fields
	[SerializeField]
	private ToggleStatHandlerBase toggleStatHandlerBase;

	// Constructors
	public ToggleLogic();

	// Methods
	private void Update();
	public override void ExecuteToggleState(bool toggleState, UnityAction<bool> toggleCallback);
}

