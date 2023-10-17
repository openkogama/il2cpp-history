/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCountingCube : MVLogicObject, ILogicWorldObject
{
	// Fields
	private const float ConnectorOffset = 1.5f;
	private Vector3 ObjectSize;
	private MVCountingCubeObject cubeObject;
	private const string currentValueKey = "currentValue";
	private const string startingValueKey = "startingValue";
	private const string resetValueKey = "reset";
	private OutputSignalTransmitter outputSignalTransmitter;
	private bool isHot;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;
	private int prevVal;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 OutputConnectorOffset { get; }
	public override Vector3 InputConnectorOffset { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int CurrentValue { get; set; }
	public int StartingValue { get; set; }
	public bool ResetDataValue { get; set; }

	// Constructors
	public MVCountingCube(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void OnDataUpdate();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Reset();
	private void SetText();
	private void PlaySound();
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
}

