/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EditorStateMachine : FSMEntity
{
	// Fields
	private SelectionController selectionController;
	private MainCameraManager weCamera;
	private CubeModelingStateMachine cubeModelingStateMachine;
	private MVNetworkSelector networkSelector;
	private GameObject gameObject;
	public const float sqrEpsilon = 0.64f;
	[CompilerGenerated]
	private bool _GridMode_k__BackingField;
	[CompilerGenerated]
	private bool _MuzzleEditMode_k__BackingField;

	// Properties
	public MVNetworkSelector NetworkSelector { get; }
	public MainCameraManager MainCameraManager { get; }
	public bool GridMode { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool MuzzleEditMode { [CompilerGenerated] get; [CompilerGenerated] set; }
	public CubeModelingStateMachine CubeModelingStateMachine { get; }
	public EditorEvent CurEvent { get; }
	public EditorEvent PrevEvent { get; }
	public EditorEvent NextEvent { get; }
	public ISelectionController SelectionController { get; }
	public HashSet<int> SelectedIDs { get; }
	public HashSet<MVWorldObjectClient> SelectedWOs { get; }
	public MVWorldObjectClient SingleSelectedWO { get; }
	public int ParentGroupID { get; }
	public MVGroup ParentGroup { get; }
	public bool ParentGroupIsRoot { get; }
	public GameObject GameObject { get; }

	// Constructors
	private EditorStateMachine(GameObject gameObject);
	public EditorStateMachine(GameObject gameObject, Vector3 avatarEditModeCenterPos);
	public EditorStateMachine(GameObject gameObject, ContextMenuController contextMenuController, GizmoController gizmoController);

	// Methods
	public void EnterGroup(MVGroup group);
	public int ExitGroup();
	public int ExitGroupToRoot();
	public WorldObjectClientRef Select(bool addToSelection, int layerMask = -5);
	public WorldObjectClientRef Select(VoxelHit hit, bool addToSelection);
	public void DeSelectWorldObject(MVWorldObjectClient wo);
	public WorldObjectClientRef SelectWO(int id, bool addToSelection, bool showVisuals = true);
	public void DeSelectAll();
	public void DeSelectAllExcept(int id);
	public bool IsSelected(int id);
	public override void Update();
}

