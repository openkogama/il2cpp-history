/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(UnityEngine.UI.Button))]
public class ToggleStateHandler : ToggleStatHandlerBase
{
	// Fields
	[SerializeField]
	private Sprite toggleOn;
	[SerializeField]
	private Sprite toggleOff;

	// Constructors
	public ToggleStateHandler();

	// Methods
	protected override void UpdateToggleState();
}

