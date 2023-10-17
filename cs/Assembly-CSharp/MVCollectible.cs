/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCollectible : MVGamePointRewardLogicObject
{
	// Fields
	private CollectibleClientState state;
	private MVCollectibleObject collectibleObject;
	private bool isVisible;
	private float pickedUpStateDuration;
	private float reshowingStateDuration;
	private float pickedUpTime;
	private MVRuntimeDataVariable takenByListRunTimeVariable;
	private List<MVTeam> takenByTeamList;
	private bool initializedInWorld;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }

	// Nested types
	public enum CollectibleClientState
	{
		Visible = 0,
		PickedUp = 1,
		ReShowing = 2,
		Invisible = 3,
		PickingUp = 4
	}

	// Constructors
	public MVCollectible(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	private void Create();
	public override void Initialize();
	public override void Destroy();
	private void SetVisible();
	private void allWorldObjectTriggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public virtual void OnPickup(int actorNr);
	public override void Reset();
	private void OnWinningConditionFulfilled(IWinningCondition winningCondition);
	protected override void OnUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	private void OnTakenByListChange();
}

