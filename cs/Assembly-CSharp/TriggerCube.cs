/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TriggerCube : MVLogicObject, IIsLogicObjectFiringEventHandler, ILogicWorldObject
{
	// Fields
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;
	private Vector3 outputConnectorOffset;
	private TriggerCubePrefab objPrefab;
	private bool isDown;
	private OutputSignalTransmitter outputSignalTransmitter;
	private UseInteractor useInteractor;
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 OutputConnectorOffset { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public TriggerCube(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	public override void OnDataUpdate();
	private void SetScale();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private bool DoEnter(int instigator);
	private void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	private void Callback(bool b, bool wasHot, LogicObjectManager logicObjectManager);
	public void OnIsFiringChanged(bool isFiring);
}

