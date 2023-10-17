/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPointLight : MVLogicObject, ILogicWorldObject
{
	// Fields
	private MVPointLightObject lightObject;
	private Light lightComponent;
	private float minumumScale;
	private float rangeMaxValue;
	private float scaleRestriction;
	private bool inputVisible;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	protected override bool HasVisualsInPlaymode { get; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public MVPointLight(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	protected void SetupLightCulling(float radius);
	private void OnInputStateUpdate(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void OnDataUpdate();
	private bool IsVisible();
	private void UpdateVisible();
	private void UpdateTexture();
	private void UpdateColorForLightSphere();
	private void SetLightToData();
}

