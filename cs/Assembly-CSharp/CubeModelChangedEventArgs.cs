/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CubeModelChangedEventArgs : EventArgs
{
	// Fields
	public readonly CubeAction Action;
	public readonly IntVector Pos;
	public readonly MVCubeModelBase Sender;

	// Constructors
	public CubeModelChangedEventArgs(CubeAction action, IntVector pos, MVCubeModelBase sender);

	// Methods
	public override string ToString();
}

