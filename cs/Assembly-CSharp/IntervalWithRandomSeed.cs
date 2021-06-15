/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class IntervalWithRandomSeed
{
	// Fields
	private float range;
	private float currentDeltaTime;
	private bool newIteration;

	// Constructors
	public IntervalWithRandomSeed(float interval);

	// Methods
	public bool Update();
	private void WrapDeltaTime();
}

