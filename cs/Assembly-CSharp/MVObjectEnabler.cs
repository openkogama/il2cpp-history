/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVObjectEnabler : MVLogicObject, ILogicWorldObject
{
	// Fields
	private bool isInitialized;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;
	private readonly ObjectEnabler goObjectEnabler;
	private bool showingOutline;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	public override bool HasObjectConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool ShowingOutline { get; }

	// Constructors
	public MVObjectEnabler(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override bool ValidateObjectLinkTarget(MVWorldObjectClient wo);
	public override void Initialize();
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void Destroy();
	private void OnEditModeChange(EditModeChangeArgs arg);
	public override void PlayModeInitialize();
	public override void Reset();
	private void UpdateShowObjects();
	public override void OnObjectLinkChanged(ObjectLinkChangeType changeType, ObjectLink objectLink);
	public override void OnDataUpdate();
	private void ShowObjects(bool visible);
}

