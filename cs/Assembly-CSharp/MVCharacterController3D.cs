/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCharacterController3D : MvCharacterController
{
	// Constructors
	public MVCharacterController3D();

	// Methods
	public override void Move(Vector3 motion);
	public override MvCharacterController CloneToGameObject(GameObject targetGameObject, GameObject seat);
	protected override Vector3 CollideAndSlide(Vector3 R3Vel, Vector3 R3Position);
	protected override Vector3 GetNextVelocity(Vector3 ePoint, Vector3 eNewBasePoint, Vector3 eDestinationPoint, ref Vector3 slidePlaneNormal);
	protected override Vector3 RecalcDirectionMoveAway(Vector3 ePos, Vector3 eDir, float distance, Vector3 ePoint);
	protected override bool NoOverlapPosition(Vector3 R3Position, Vector3 R3Direction, ref Vector3 offset);
}

