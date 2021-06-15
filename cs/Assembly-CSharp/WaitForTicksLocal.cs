/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WaitForTicksLocal
{
	// Fields
	public readonly int startTicks;
	private readonly uint maxTicks;

	// Properties
	public bool TimeIsUp { get; }

	// Constructors
	public WaitForTicksLocal(int milliseconds);

	// Methods
	public static int GetEnvironmentTick(int deltaMilliseconds);
	public static int Diff(int startTicks);
}

