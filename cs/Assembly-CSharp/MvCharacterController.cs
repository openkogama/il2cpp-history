/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MvCharacterController : MonoBehaviour
{
	// Fields
	private const int maxRecursions = 7;
	private const float unitsPerMeter = 100f;
	private const float unitScale = 1f;
	protected const float veryCloseDistance = 0.005f;
	private const float collisionMaxAngle = 89.95f;
	private static int layerMask;
	private bool sendCollisionData;
	protected Vector3 center;
	protected Vector3 elipsoidRadius;
	protected int collisionRecursionDepth;
	private float offsetFactor;
	private float offsetBase;
	public Vector3 centerBase;
	public Vector3 radiusBase;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsGrounded_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Vector3 _Velocity_k__BackingField;
	public HashSet<int> IgnoreWoIds;
	public Action<MVControllerColliderHit> OnControllerColliderHit;

	// Properties
	public bool IsGrounded { [CompilerGenerated] get; [CompilerGenerated] set; }
	public Vector3 Velocity { [CompilerGenerated] get; [CompilerGenerated] set; }
	public float Radius { get; }
	public float Height { get; }
	public Vector3 Center { get; }

	// Nested types
	private struct NoCollisionData
	{
		// Fields
		private Vector3 position;
		private bool valid;

		// Properties
		public Vector3 Position { get; }
		public bool Valid { get; }

		// Constructors
		public NoCollisionData(Vector3 pos, bool val);
	}

	// Constructors
	protected MvCharacterController();
	static MvCharacterController();

	// Methods
	public abstract MvCharacterController CloneToGameObject(GameObject targetGameObject, GameObject seat);
	public abstract void Move(Vector3 motion);
	protected abstract Vector3 GetNextVelocity(Vector3 ePoint, Vector3 eNewBasePoint, Vector3 eDestinationPoint, ref Vector3 slidePlaneNormal);
	protected abstract bool NoOverlapPosition(Vector3 R3Position, Vector3 R3Direction, ref Vector3 offset);
	protected abstract Vector3 RecalcDirectionMoveAway(Vector3 ePos, Vector3 eDir, float distance, Vector3 ePoint);
	protected void Awake();
	public void Init(float radius, float height, Vector3 center);
	public void SetScale(float scale);
	public void Move(Vector3 motion, bool sendCollisionData);
	public bool CheckOverLap();
	public List<MVOverlapResult> GetOverlappingObjects();
	public Vector3 GetGradientDirection(VoxelHit elipsoidHit);
	public bool TestWithOutSliding(float distance, Vector3 direction, Vector3 motion, out MVControllerColliderHit colliderHit);
	protected abstract Vector3 CollideAndSlide(Vector3 R3Vel, Vector3 R3Position);
	protected Vector3 CollideWithWorld(ref Vector3 ePos, ref Vector3 eVel, ref bool foundValidPosition);
	private void SendCharacterCollision(MVControllerColliderHit controllerColliderHit);
	private static float DistanceR3SpaceToESpace(float distance, Vector3 R3Dir, Vector3 R3Radius);
	private static float DistanceESpaceToR3Space(float eDistance, Vector3 eDir, Vector3 R3Radius);
	private static float GetMoveBackDistance(Vector3 ePos, Vector3 eDir, float distance, Vector3 ePoint);
	private static Vector3 GetNormal(Vector3 ePos, Vector3 eDir, float distance, Vector3 ePoint);
	private static float GetCollisionAngle(Vector3 ePos, Vector3 eDir, float distance, Vector3 ePoint);
	private NoCollisionData HandleNoCollision(Vector3 ePos, Vector3 eVel, bool adjustVerticalOnly);
	private static Vector3 GetNormalizedVector(Vector3 InpVec);
	protected bool OverlapCheckCollision(Vector3 R3Position);
	private List<MVOverlapResult> OverlappingObjects(Vector3 R3Position);
}

