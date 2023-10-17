/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TimeAttackFlag : MVGamePointRewardLogicObject
{
	// Fields
	private TriggerBoxEvents triggerBoxEvents;
	private bool initializedInWorld;
	private WorldObjectEnableController worldObjectEnableController;
	private UseInteractor useInteractor;
	private float lastCaptureTime;
	private const float captureCooldown = 5f;
	private bool isTimeAttackDebriefingOn;
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private TimeAttackFlagObject timeAttackFlagObject;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 WorldPivot { get; }

	// Constructors
	public TimeAttackFlag(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public override void Initialize();
	private void LateInitialize();
	private void InitializeCallbacks();
	private void SetupUseInteractor();
	public override void OnDataUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private bool DoReachTimeAttackFlag(int instigator);
	public void OnStartFlagDebriefing(int captureTime);
	public void OnEndFlagDebriefing();
	public override void Destroy();
}

