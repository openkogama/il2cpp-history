/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdvancedGhostCubeModelWrapper : EditableCubeModelWrapper
{
	// Fields
	private Transform transformParent;
	private bool cubeModelIsBeingEdited;

	// Properties
	public bool CubeModelIsBeingEdited { get; }

	// Constructors
	public AdvancedGhostCubeModelWrapper(MVCubeModelInstance cubeModelBase, Transform transformParent);

	// Methods
	public bool OnEnterObject(EditorStateMachine e, Transform transform);
	public override bool OnExitObject(EditorStateMachine e);
	private void EnterEdit(Transform transform);
	public void ExitEdit();
	private void SetToTransformParent();
}

