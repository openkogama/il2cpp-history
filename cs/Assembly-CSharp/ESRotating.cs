/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESRotating : ESStateBase
{
	// Fields
	private float rotationSpeed;
	private float prevMouseX;
	private float rotateThreshold;
	private float xAcc;
	private float mouseSensitivity;
	private List<WorldObjectClientRef> targets;
	private Vector3 pivot;

	// Constructors
	public ESRotating();

	// Methods
	public override void Enter(EditorStateMachine e);
	private bool ValidateTargets();
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine e);
	private void DoGridSnapping();
}

