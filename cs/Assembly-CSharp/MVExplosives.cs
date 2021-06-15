/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVExplosives : MVLogicObject, ILogicWorldObject
{
	// Fields
	private float damageRadius;
	private float damageValue;
	private float shockwaveAcceleration;
	private GameObject audioGO;
	private AudioLogicCube audioLC;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public MVExplosives(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public void Explode();
}

