/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVMovable : MVBlueprintBase
{
	// Fields
	private static float direction;
	private List<MVMovable> MoveableChildren;
	private Vector3 localPos;
	private float timeToEnd;
	private float linearTime;
	private float fraction;
	private MovableVisualization movableVisualization;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private MVCubeModelInstance _CubeModel_k__BackingField;
	private float distance;
	private Quaternion orgRotation;
	private Vector3 velocity;
	private Vector3 angularDirection;
	private float angularSpeed;
	private int parentMoverID;
	private bool pausedMovement;
	private bool isVisible;
	private MVMovable parentMover;
	[CompilerGenerated]
	private static Dictionary<string, int> __f__switch_map2;

	// Properties
	public MVCubeModelInstance CubeModel { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int CubeModelID { get; }
	public float Distance { get; }
	public Quaternion OrgRotation { get; }
	public Vector3 Velocity { get; }
	public Vector3 AngularVelocity { get; }
	public Vector3 AngularDirection { get; }
	public float AngularSpeed { get; }
	public int ParentMoverID { get; }
	public bool PausedMovement { get; set; }
	protected virtual Vector3 WorldVelocity { get; }
	public MVMovable ParentMover { get; }
	public bool IsRoot { get; }
	public MVMovable RootMover { get; }
	public override bool Visible { get; set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _SetParentMoverID_c__AnonStorey0
	{
		// Fields
		internal int parentMoverID;

		// Constructors
		public _SetParentMoverID_c__AnonStorey0();

		// Methods
		internal bool __m__0(KeyValuePair<int, MVMovable> x);
	}

	[CompilerGenerated]
	private sealed class _ReadWOData_c__AnonStorey1
	{
		// Fields
		internal int newParentMoverID;

		// Constructors
		public _ReadWOData_c__AnonStorey1();

		// Methods
		internal bool __m__0(KeyValuePair<int, MVMovable> x);
	}

	// Constructors
	public MVMovable(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	static MVMovable();

	// Methods
	public override void Initialize();
	protected void SetVisible(bool newVisible);
	public override void OnInputStateChanged();
	public override void InitializeInventory();
	private void InitializeCommon();
	private string GetParamPath(string param);
	public void SetDistance(float distance, bool updateWOData = false, bool syncServer = false);
	public void SetOrgRotation(Quaternion orgRotation, bool updateWOData = false, bool syncServer = false);
	public void SetVelocity(Vector3 velocity, bool updateWOData = false, bool syncServer = false);
	public void SetAngularDirection(Vector3 angularDirection, bool updateWOData = false, bool syncServer = false);
	public void SetAngularSpeed(float angularSpeed, bool updateWOData = false, bool syncServer = false);
	public void SetParentMoverID(int parentMoverID, bool updateWOData = false, bool syncServer = false);
	public void SyncProperties();
	private void ReadWOData();
	public void UpdateMoverTree(float directionFactor);
	public void UpdateMoverSubTree(float directionFactor, int breakid);
	public void AddMovableChild(MVMovable child);
	public void RemoveMovableChild(MVMovable child);
	private void Move(float directionFactor, int breakid);
	private void RecalcTimeToEnd();
	public override void OnDataUpdate();
	public override void Destroy();
	public override bool OnEnterObject(EditorStateMachine e);
	public override bool OnExitObject(EditorStateMachine e);
}

