/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseLever : MVLogicObject, IIsLogicObjectFiringEventHandler, ILogicWorldObject
{
	// Fields
	private UseLeverObject useLeverObject;
	private float minY;
	private float speed;
	private const string beginActivateValueKey = "beginActivated";
	private const string isActivateValueKey = "a";
	private bool requestSend;
	private bool localIsDown;
	private OutputSignalTransmitter outputSignalTransmitter;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 WorldPivot { get; }
	public override Vector3 OutputConnectorOffset { get; }
	private bool BeginActivated { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	private bool IsActivated { get; set; }

	// Constructors
	public UseLever(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public override void Initialize();
	private void SignalCallback(bool b, bool wasHot, LogicObjectManager logicObjectManager);
	protected override void OnUpdate();
	public bool Use(int userWoID);
	public override void InitializeInventory();
	public override void SetupTierInventory();
	public override void UnSetupTierInventory();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Reset();
	public override void OnDataUpdate();
	public override void Destroy();
	public void OnEditModeChange(EditModeChangeArgs arg);
	public void OnIsFiringChanged(bool isFiring);
}

