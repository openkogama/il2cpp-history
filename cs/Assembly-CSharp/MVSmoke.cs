/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVSmoke : MVLogicObject, ILogicWorldObject
{
	// Fields
	private ParticleSystem particleSystem;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;
	private float lengthCullingScale;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public MVSmoke(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	protected CullingSubscriberBase SetupSmokeCulling(float radius, GameObject lodGameObject);
	private void OnInputStateUpdate(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void InitializeInventory();
	private void ToggleEmitter(bool toggle);
	public override void OnDataUpdate();
	private void SetSmokeProperties();
}

