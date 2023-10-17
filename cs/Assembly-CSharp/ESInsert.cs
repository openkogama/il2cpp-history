/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESInsert : ESStateBase
{
	// Fields
	private const float returnSpeed = 5f;
	private const float moveSpeed = 20f;
	private const float offsetLerpSpeed = 10f;
	private float distanceInFreeSpace;
	private const float minimumDistance = 5f;
	private Vector3 insertPosition;
	private Vector3 insertOffset;
	private Vector3 pivotToOrigin;
	private InsertCursor insertCursor;
	private Material previewMaterial;
	private MeshFilter[] previewMeshes;
	private bool isNewPrototype;
	private HashSet<int> woIgnoreList;
	private bool pointerWasUp;
	private Camera mainCamera;

	// Constructors
	public ESInsert();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine e);
	private Vector3 ComputeObjectOffset(MVWorldObjectClient wo, Vector3 surfaceNormal);
	private bool DrawPlanePick(MVWorldObjectClient wo, ref Vector3 position, ref Vector3 rawPosition, ref Vector3 normal);
	private bool WorldPick(MVWorldObjectClient wo, ref Vector3 position, ref Vector3 rawPosition, ref Vector3 normal);
	private Vector3 ComputeSnapPosition(MVWorldObjectClient wo, Vector3 originalPos);
	private void DrawObject(GameObject go);
}

