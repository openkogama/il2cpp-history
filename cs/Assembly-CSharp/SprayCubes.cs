/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class SprayCubes : CubeModelTool
{
	// Fields
	private SprayCursor sprayCursor;
	private CubePickingInfo cubeNotToBeSprayed;

	// Constructors
	public SprayCubes();

	// Methods
	public override void Enter(CubeModelingStateMachine e);
	public override void Execute(CubeModelingStateMachine e);
	public override void Exit(CubeModelingStateMachine e);
	public override void HideCursor();
}

