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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CubeModelingStateMachine : FSMEntity
{
	// Fields
	private ObscuredByte currentMaterialId;
	private Material currentMaterial;
	private IModelingConstraint constraint;
	public OnCurrentMaterialChangeDelegate OnCurrentMaterialChange;
	public bool useLasers;
	private GameObject gameObject;
	private Camera mainCamera;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private CubePickingInfo _SelectedCube_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private MVCubeModelBase _TargetCubeModel_k__BackingField;

	// Properties
	public CubePickingInfo SelectedCube { [CompilerGenerated] get; [CompilerGenerated] set; }
	public byte CurrentMaterialId { get; set; }
	public MVCubeModelBase TargetCubeModel { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool CursorVisible { get; set; }
	public Vector3[] CubeCorners { get; }
	public byte[] ByteCubeCorners { get; }
	public Material CurrentMaterial { get; }

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
	public bool CanAddCubeAt(IntVector requestedCubePos);
	public bool CanRemoveCubeAt(IntVector requestedCubePos);
	public bool CanEditCubeAt(IntVector requestedCubePos);
	[CompilerGenerated]
	private void _set_CurrentMaterialId_m__0(IHandleMaterial x, BaseEventData y);
}

