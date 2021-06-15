/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCheckpoint : MVLogicObject
{
	// Fields
	private MVCheckpointObject checkpointObject;
	private UseInteractor useInteractor;
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private bool playingAnimation;

	// Properties
	protected override bool HasVisualsInPlaymode { get; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override Vector3 WorldPivot { get; }

	// Constructors
	public MVCheckpoint(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	protected override void OnUpdate();
	public override void Initialize();
	private void SetupUseInteractor();
	public override void OnDataUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public override void Destroy();
	private bool DoReachCheckpoint(int instigatorId);
	private void DoHeal(int instigator);
}

