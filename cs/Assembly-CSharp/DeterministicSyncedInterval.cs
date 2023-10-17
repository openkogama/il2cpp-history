/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeterministicSyncedInterval
{
	// Fields
	private readonly int range;
	private int nextTickThres;

	// Constructors
	public DeterministicSyncedInterval(int id, int range);

	// Methods
	public bool Update();
	private int CalcOffset(int curTime, int offset, int range);
	private int GetIntWithinRange(int seed, int range);
	private int Noise(int seed);
}

