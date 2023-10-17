/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVRandomBox : MVLogicObject, ILogicWorldObject
{
	// Fields
	private const string currentRandomValuesKey = "currentRandomValues";
	private const string currentValueKey = "currentValue";
	private const int currentValueDefault = 0;
	private RandomGenerator randomGenerator;
	private OutputSignalTransmitterSpecific _outputSignalTransmitter;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	private int CurrentValue { get; set; }
	private ObscuredInt[] CurrentRandomValues { get; }

	// Constructors
	public MVRandomBox(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public void SetRandomIndex(int randomIndex);
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void Reset();
}

