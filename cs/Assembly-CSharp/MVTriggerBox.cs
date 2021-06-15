/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTriggerBox : MVLogicObject, ITriggerBoxEventsHandler
{
	// Fields
	private TriggerBoxEvents triggerBoxEvents;

	// Properties
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 OutputConnectorOffset { get; }

	// Constructors
	public MVTriggerBox(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	public void OnEnter(MVPlayer player);
	public void OnExit(MVPlayer player);
	public void Enter(int instigatorId);
	public void Exit();
	public override void Destroy();
}

