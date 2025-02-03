/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CubeModelingStateMachine : FSMEntity
{
	// Fields
	public bool useLasers;
	public OnCurrentMaterialChangeDelegate OnCurrentMaterialChange;
	private ObscuredByte currentMaterialId;
	private IModelingConstraint constraint;
	private GameObject gameObject;
	private Camera mainCamera;
	[CompilerGenerated]
	private CubePickingInfo _SelectedCube_k__BackingField;
	[CompilerGenerated]
	private MVCubeModelBase _TargetCubeModel_k__BackingField;

	// Properties
	public CubePickingInfo SelectedCube { [CompilerGenerated] get; [CompilerGenerated] set; }
	public MVCubeModelBase TargetCubeModel { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Vector3[] CubeCorners { get; }
	public byte[] ByteCubeCorners { get; }
	public Material CurrentMaterial { get; }
	public byte CurrentMaterialId { get; set; }
	public bool CursorVisible { get; set; }

	// Nested types
	public delegate void OnCurrentMaterialChangeDelegate(byte currentMaterialId, Material currentMaterial);

	public enum HoverType
	{
		Corner = 0,
		Edge = 1,
		Face = 2,
		None = 3
	}

	// Constructors
	public CubeModelingStateMachine(GameObject gameObject);

	// Methods
	public void StartEdit(MVCubeModelBase targetCubeModel, IModelingConstraint constraint = null);
	public void SetConstraint(IModelingConstraint constraint);
	public void EndEdit();
	public override void Update();
	public HoverType CurrentlyHovered();
	public CubePickingInfo DoPicking();
	public void RemoveCursors();
	public void HandleAudio(IntVector pos, AudioActions action);
	public EditCubeChange AddCube();
	public CanPerformCubeActionResult CanAddCubeAt(IntVector requestedCubePos, CubePickingInfo requestedCube);
	public CanPerformCubeActionResult CanAddCubeAt(IntVector requestedCubePos);
	public CanPerformCubeActionResult CanRemoveCubeAt(CubePickingInfo requestedCube);
	public bool CanEditCubeAt(IntVector requestedCubePos);
	public CanPerformCubeActionResult CanReplaceCube(CubePickingInfo requestedCube, byte materialId);
	[CompilerGenerated]
	private void _set_CurrentMaterialId_b__23_0(IHandleMaterial x, BaseEventData y);
}

