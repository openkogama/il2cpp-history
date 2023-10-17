/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGamePoint : MVGamePointRewardLogicObject
{
	// Fields
	private GamePointClientState state;
	private bool isVisible;
	private bool canRespawn;
	private int respawnTime;
	private float pickUpTime;
	private const string respawnString = "respawnTime";
	private MVGamePointObject gamePointObject;

	// Properties
	protected override int GamePointRewardAmount { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }

	// Nested types
	public enum GamePointClientState
	{
		Visible = 0,
		PickedUp = 1,
		ReShowing = 2,
		Invisible = 3
	}

	// Constructors
	public MVGamePoint(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	private void Create();
	public override void Initialize();
	public override void Destroy();
	private void Enter(object sender, TriggerEventArgs e);
	private void SetVisible();
	public override void Reset();
	private void OnWinningConditionFulfilled(IWinningCondition winningCondition);
	private void HandleStandaloneDisabling();
	private void Disable();
	private void UpdateCanRespawn(Dictionary<object, object> newData);
	public override void OnDataUpdate();
	public override void PartialUpdateWOData(Dictionary<object, object> woData);
	protected override void OnUpdate();
}

