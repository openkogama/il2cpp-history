/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class DeleteCubes : CubeModelTool
{
	// Fields
	private CubePickingInfo cubeNotToBeDeleted;
	private DeleteCursor deleteCursor;

	// Constructors
	public DeleteCubes();

	// Methods
	public override void Enter(CubeModelingStateMachine e);
	public override void Execute(CubeModelingStateMachine e);
	public override void Exit(CubeModelingStateMachine e);
	public override void HideCursor();
}

