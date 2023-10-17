/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShootableButton : MVLogicObject, IIsLogicObjectFiringEventHandler, ILogicWorldObject
{
	// Fields
	private LogicInteractable interactable;
	private Collider targetCollider;
	private ShootableButtonObject buttonObject;
	private const string durationValueKey = "duration";
	private const string currentTimeValueKey = "cT";
	private const int currentTimeDefaultValue = -1;
	private OutputSignalTransmitter outputSignalTransmitter;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override Vector3 WorldPivot { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 OutputConnectorOffset { get; }
	private int Duration { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	private int CurrentTime { get; set; }
	private bool IsActive { get; set; }

	// Constructors
	public ShootableButton(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	private void SignalCallback(bool b, bool wasHot, LogicObjectManager logicObjectManager);
	public void OnIsFiringChanged(bool isFiring);
	public override void OnDataUpdate();
	public override void Reset();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public void Activate(object sender, TakeDamageEventArgs e);
	public void SetToDownState();
	public void SetToUpState();
	public override void Destroy();
	public void OnEditModeChange(EditModeChangeArgs arg);
}

