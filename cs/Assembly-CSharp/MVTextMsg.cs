/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTextMsg : MVLogicObject, ILogicWorldObject
{
	// Fields
	private const float StoredFontSizeValueToTMPFontSize = 1.625f;
	private readonly Bounds localBounds;
	private readonly MVTextMsgObject msgObject;
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	public override Vector3 InputConnectorOffset { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public MVTextMsg(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Initialize();
	private void ToggleText(bool visible);
	private void InputStateUpdateCallback(LogicInputState logicInputState, LogicObjectManager logicObjectManager);
	public override void InitializeInventory();
	public override void OnDataUpdate();
	private void UpdateTextMessageSettings();
	private void UpdateText();
	private void UpdateFontSettings();
	private void UpdateTextMessageBackground();
	private void UpdateTextObjectBillboardSettings();
	private void UpdateTextCulling();
}

