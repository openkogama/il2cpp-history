/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class OnCounterTypeChangedArgs : EventArgs
{
	// Fields
	public readonly int count;
	public readonly GameStatCounterType counterType;
	public readonly int actorNumber;
	public readonly MVTeam team;
	public readonly int otherID;

	// Constructors
	public OnCounterTypeChangedArgs(int count, GameStatCounterType counterType, int actorNumber, MVTeam team, int otherID);

	// Methods
	public override string ToString();
}

