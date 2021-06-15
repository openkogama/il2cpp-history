/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPressurePlate : MVLogicObject, IIsLogicObjectFiringEventHandler, ILogicWorldObject
{
	// Fields
	private MVPressurePlateObject plateObject;
	private bool isDown;
	private bool localIsDown;
	private float minY;
	private float speed;
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private UseInteractor useInteractor;
	private OutputSignalTransmitter outputSignalTransmitter;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 OutputConnectorOffset { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public override Vector3 WorldPivot { get; }

	// Constructors
	public MVPressurePlate(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public void OnIsFiringChanged(bool isFiring);
	private void Callback(bool b, bool wasHot, LogicObjectManager logicObjectManager);
	public override void OnDataUpdate();
	protected override void OnUpdate();
	public override void InitializeInventory();
	public override void SetupTierInventory();
	public override void UnSetupTierInventory();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	private bool DoEnter(int instigatorWOID);
	private void DoExit(int instigatorWOID);
	public override void Destroy();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	private bool IsVisible();
	private void SetVisibility();
}

