/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVAdvancedGhost : MVBlueprintBase, IGameStateControllerSubscriber, ITeamInteractorNPC, IHealRayAttachementObject
{
	// Fields
	private AdvancedGhostBehaviour advancedGhostBehaviour;
	private ClientSideNPCInteractable interactable;
	private AdvancedGhostCubeModelWrapper editableCubeModelWrapper;
	private AdvancedGhostIcon advancedGhostIcon;
	private GameObject attachmentObject;
	private AdvancedGhostObject advGhostObject;
	private ClientSideNPCInteractionHandler interactionHandler;
	private const float deathExplosionDamageValue = 20f;
	private const float deathExplosionRadius = 5f;
	private const float deathExplosionImpulse = 1000f;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	private MVTeam Team { get; }
	public override Vector3 WorldPivot { get; }

	// Constructors
	public MVAdvancedGhost(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private new void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	private void SetupEditorIcon(MVCubeModelBase cubeModelBody, bool enableCulling);
	public override void InitializeInventory();
	private void SetGameMode(bool isPlayMode);
	public override bool OnEnterObject(EditorStateMachine e);
	public override bool OnExitObject(EditorStateMachine e);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Select(Color color);
	public override void DeSelect();
	public override void Destroy();
	public override Vector3 GetTargetPosition();
	private void ReceiveDamage(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	public override void Reset();
	public bool IsOnSameTeam(MVTeam team);
	public override void OnDataUpdate();
	private void SetTeam(MVTeam team);
	private void SetTeam_Edit(MVTeam team);
	public void GameStateChanged(UpdateCondition condition);
	public GameObject GetHealRayAttachmentObject();
}

