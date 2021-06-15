/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ConstraintBoxChangedEventArgs : EventArgs
{
	// Fields
	public readonly Vector3 Center;
	public readonly IntVector MinCorner;
	public readonly IntVector MaxCorner;

	// Constructors
	public ConstraintBoxChangedEventArgs(Vector3 center, IntVector minCorner, IntVector maxCorner);
}

