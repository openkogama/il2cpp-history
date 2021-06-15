/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVSkybox : MVLogicObject, ILogicWorldObject
{
	// Fields
	private bool inventoryObject;
	protected SkyboxManager skybox;
	private const float sunAngle = 80f;
	private const float fogDensity = 0.007f;
	private InteractionFlags defaultInteractionFlags;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public Color SkyboxColor { get; }
	public float SunAngle { get; }
	public float FogDensity { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool SkyboxActive { get; }

	// Constructors
	public MVSkybox(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void OnDataUpdate();
	public override void Reset();
	public override void Destroy();
	public void SetDefaultInteractionFlags();
	public void SetDeleteOnlyInteractionFlags();
}

