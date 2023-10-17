/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WindTurbine : MVLogicObject, ILogicWorldObject, IUpdatecontrollerSubscriberFixedUpdate
{
	// Fields
	private readonly Dictionary<int, MVRigidBody> affectedBodies;
	private bool isActive;
	private float windStrength;
	private float windAreaSize;
	private float windPitch;
	private readonly List<int> keysToRemove;
	private const float MaxWindStrength = 280f;
	private const float MaxWindAreaSize = 20f;
	private readonly WindTurbineObject windTurbineObject;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override Vector3 WorldPivot { get; }
	public override Vector3 InputConnectorOffset { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public WindTurbine(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void OnDataUpdate();
	private void SetData();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void UpdateControllerFixedUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	private void EnterWindZone(int instigatorWOID);
	private void ExitWindZone(int instigatorWOID);
	private void Rescale();
	private void Rotate();
	private void ToggleTurbine(bool state);
	public override void InitializeInventory();
	public override void Destroy();
	public void OnEditModeChange(EditModeChangeArgs arg);
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
}

