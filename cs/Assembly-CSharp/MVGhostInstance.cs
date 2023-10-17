/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGhostInstance : MVWorldObjectClient, IUpdatecontrollerSubscriberUpdate, IUpdatecontrollerSubscriberFixedUpdate, IGameStateControllerSubscriber
{
	// Fields
	private SphereVolumeIndicator rangeVis;
	private float distance;
	private float speed;
	private Transform moveTarget;
	private Vector3 oscilPos;
	private float oscillationPeriod;
	private float damagePerSecond;
	private float turnSlerpFactor;
	private GameEffect gameEffect;
	private float patrolSpeed;
	private SmoothPhysicsMovement smoothPhysicsMovement;
	private GameObject _ghostInstance;
	private GameObject _ghostMarker;
	private Bounds localBounds;
	private CullingSubscriberBase cullingSubscriberBase;
	private bool isLODVisible;
	private GhostMode ghostMode;
	private Vector3 lodSphereOffset;
	private int playerLayer;
	private List<MVWorldObjectClient> targetWos;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public float Distance { get; set; }
	public float Speed { get; set; }

	// Nested types
	private enum GameEffect
	{
		DAMAGE_OVER_TIME = 0,
		INSTANT_DEATH = 1
	}

	private enum GhostMode
	{
		MarkerActive = 0,
		InstanceActive = 1
	}

	// Constructors
	public MVGhostInstance(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void SetupCulling();
	private void OnPositionChanged(MVWorldObjectClient wo, PositionChangedEventArgs positionChangedEventArgs);
	private void UpdateMarkerPosition(Vector3 newPos);
	private void OnStateChange(CullingGroupEvent cullingGroupEvent);
	public override void InitializeInventory();
	public void InitializeCommon();
	private static Bounds ComputeLocalBounds(Vector3 origin, MeshRenderer[] meshRenderers);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override void Select();
	public override void Select(Color color);
	public override void DeSelect();
	private void ReadWOData();
	public override void OnDataUpdate();
	public void GameStateChanged(UpdateCondition condition);
	private void UpGhosts();
	public override void Destroy();
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
	private void MoveGhost(MVWorldObjectClient TargetAvatar);
	private Vector3 GetTargetPos(bool patrolling);
	private void ApplyGameEffect(MVWorldObjectClient targetAvatar, InteractionDataHandlerBase interactionHandler);
	private bool IsTouchingAvatar(MVWorldObjectClient TargetAvatar);
	private void UpdateVisualEffects(bool touchingAvatar);
	private Vector3 GetTacticalPos();
	private float GetSpeed(bool patrolling);
	[CompilerGenerated]
	private float _UpdateControllerFixedUpdate_b__49_0(MVWorldObjectClient a);
}

