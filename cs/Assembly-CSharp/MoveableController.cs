/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MoveableController : IUpdatecontrollerSubscriberFixedUpdate
{
	// Fields
	public Dictionary<int, Vector3> Velocities;
	public Dictionary<int, MVMovable> MoveControllers;
	public Dictionary<int, MVMovable> CubeModelMovableMap;
	public float time;
	[CompilerGenerated]
	private static Func<KeyValuePair<int, MVMovable>, bool> __f__am_cache0;

	// Constructors
	public MoveableController();

	// Methods
	public void AddMovable(MVMovable movable, bool isInventoryPreviewMovable);
	public void RemoveMovable(MVMovable movable);
	public void ResetMoveables();
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
	public void SyncTimeToServer();
	public void UpdateMoveables(float directionFactor);
	public void UpdateSingleMoveableInChain(int movableGameObjectID, float directionFactor);
	public void UpdateMoveable(int movableGameObjectID, float directionFactor, int breakid);
	public Quaternion GetRotationQuat(int movableGameObjectID);
	public Vector3 GetVel(int movableGameObjectID, Vector3 position);
	[CompilerGenerated]
	private static bool _UpdateMoveables_m__0(KeyValuePair<int, MVMovable> x);
}

