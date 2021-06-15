/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WorldEditorDrawPlane : MonoBehaviour
{
	// Fields
	private const float CUBE_OFFSET = 0.5f;
	private Camera mainCamera;
	public AltitudeChangedDelegate OnAltitudeChanged;
	public GameObject DrawPlaneVisualization;
	public GameObject DrawPlaneCursor;
	public int MeshScale;
	private GameObject _targetGameObject;
	private bool isActive;
	private int _altitude;
	private DrawPlaneAxis drawPlaneAxis;
	private float lastMovePlaneDelta;
	private Plane editorPlane;
	private Vector3 _cachedPos;

	// Properties
	public GameObject TargetGameObject { set; }
	public bool IsOnLandscape { get; }
	public Vector3 Pos { get; private set; }
	public bool Active { get; set; }
	public int Altitude { get; private set; }
	public DrawPlaneAxis Orientation { get; set; }

	// Nested types
	public delegate void AltitudeChangedDelegate(int altitude);

	// Constructors
	public WorldEditorDrawPlane();

	// Methods
	public void CachePos();
	public void ReturnDrawPlaneToLandscape();
	public void RestorePos();
	public void Start();
	private void GenerateDrawPlane(GameObject drawPlane);
	private void GenerateMesh(Mesh mesh, bool scale = true);
	private void SetLayer(int layer);
	public void SetToCameraPos();
	public void SetToGridAlignedPos(Vector3 pos);
	public void SetToTargetGameObjectZero();
	private void UpdateEditorPlanePosition();
	public bool GetCubePosOnDrawplane(GameObject gameObject, out IntVector intVectorHitPos);
	private void UpdateAltitude();
	private void Update();
	private void FollowAvatar();
	private Vector3 GetDirectionVector();
	public void MoveDrawPlane(int dir);
	public void SetDrawPlaneHeight(float height);
	public bool Pick(ref Vector3 hit);
	private bool RayCast(Ray ray, ref Vector3 hit, bool ignoreActiveFlag);
	private Vector3 GetCubePlaceOffset();
	private Vector3 GetOffsetVector();
}

