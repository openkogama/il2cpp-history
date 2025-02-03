/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CollectTheItemDropOff : MVBlueprintBase, ILogicWorldObject
{
	// Fields
	private const string isActiveKey = "isActive";
	private const string doOnce = "doOnce";
	public Action<bool> OnPickupCollected;
	private EditableCubeModelWrapper editableCubeModelWrapper;
	private CollectTheItemDropOffObject triggerObject;
	private CullingSubscriberBase cullingSubscriberBase;
	private CollectTheItem controller;
	private ObscuredIntVector minBounds;
	private ObscuredIntVector maxBounds;
	private ObscuredInt minCubes;
	private OutputSignalTransmitter outputSignalTransmitter;
	private bool sendSignal;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override Vector3 OutputConnectorOffset { get; }
	public override bool HasOutputConnector { get; }
	public override bool HasInputConnector { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool IsActive { get; }
	public bool DoOnce { get; }

	// Constructors
	public CollectTheItemDropOff(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public void InitializeWithController(CollectTheItem controller);
	public override void Initialize();
	private void SignalCallback(bool b, bool wasHot, LogicObjectManager logicObjectManager);
	private void OnChunkEditReset(object sender, EditStateEventArgs args);
	public void ReInitializeVisuals();
	private void OnEditModeChange(EditModeChangeArgs arg);
	private void OnCollected(bool shouldbeActiveOnCollect);
	public override void Reset();
	private void SetupCulling();
	private new void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	public void OnStateChanged(CullingGroupEvent cullingEvent);
	public override void OnDataUpdate();
	public void DropWoId(int instigatorWoID);
	private void TriggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public override void Destroy();
	public override bool OnExitObject(EditorStateMachine e);
	public override bool OnEnterObject(EditorStateMachine e);
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
}

