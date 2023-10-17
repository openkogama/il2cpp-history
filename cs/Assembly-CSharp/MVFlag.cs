/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVFlag : MVGamePointRewardLogicObject
{
	// Fields
	private TriggerBoxEvents triggerBoxEvents;
	private bool initializedInWorld;
	private WorldObjectEnableController worldObjectEnableController;
	private UseInteractor useInteractor;
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private FlagObject flagObject;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 WorldPivot { get; }

	// Constructors
	public MVFlag(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public override void Initialize();
	private void SetupUseInteractor();
	public override void OnDataUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private bool DoCaptureFlag(int instigator);
	public override void Destroy();
}

