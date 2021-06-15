/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class EditCubes : CubeModelTool
{
	// Fields
	private float delta;
	private float deltaAccum;
	private byte prevMaterial;
	private bool edgeHasMoved;
	private float mouseSensitivity;
	private float mouseSensitivityExtrude;
	private float mouseUpTimeBeforeMoveEdge;
	private float detailEditModeMaxDistance;
	private float prevMouseUpTime;
	private BuildState currentInternalState;
	private CubePickingInfo prevSelectedCube;
	private CubePickingInfo movingEdgeCube;
	private Cube prevCubeState;
	private ModelCursor3D modelCursor;

	// Properties
	public override bool CursorVisible { get; set; }

	// Constructors
	public EditCubes();

	// Methods
	public override void Enter(CubeModelingStateMachine e);
	public override void Execute(CubeModelingStateMachine e);
	public override void Exit(CubeModelingStateMachine e);
	public override void HideCursor();
	private bool GotoMultiChangeCubes();
	private static IntVector GetCubePosNeighborOppositeFace(IntVector localPos, Face face);
	private void SetEditDetail(CubeModelingStateMachine e);
}

