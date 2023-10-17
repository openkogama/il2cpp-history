/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCameraSettings : MVLogicObject
{
	// Fields
	private bool isPreview;
	private bool needToUnsubscribeToSettingsCallback;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }

	// Constructors
	public MVCameraSettings(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	public override void OnDataUpdate();
	public override bool IsSingletonObject();
	public override void Destroy();
	private void OnCameraSettingAdded();
	private void UpdateStaticValues();
}

