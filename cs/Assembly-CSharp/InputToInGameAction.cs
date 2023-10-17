/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InputToInGameAction
{
	// Fields
	private bool use;
	private bool fire;
	private bool drop;
	private bool holster;
	private bool ignorePickupOwner;

	// Properties
	public bool IgnorePickupOwner { get; set; }
	public bool Fire { get; set; }
	public bool Drop { get; }
	public bool Use { get; }
	public bool Holster { get; }

	// Constructors
	public InputToInGameAction();

	// Methods
	public void HandleInputState();
}

