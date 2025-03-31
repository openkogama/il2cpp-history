/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESTerrainEdit : ESStateBase
{
	// Fields
	private MVCubeModelPrototypeTerrain terrain;

	// Constructors
	public ESTerrainEdit();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine esm);
	private bool SelectedObject(EditorStateMachine esm, VoxelHit targetHit, bool woPickSuccess, bool selectionAllowedByLogicEnabled);
	private bool SelectedObjectLink(EditorStateMachine esm, bool didHitObject, float hitDistance);
	private bool ResettingTerrain(VoxelHit targetHit);
	public override void Exit(EditorStateMachine e);
}

