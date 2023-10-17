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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVSentryGun : MVLogicObject, ILogicWorldObject
{
	// Fields
	[CompilerGenerated]
	private IInputSignalReceiver _InputSignalReceiver_k__BackingField;
	[CompilerGenerated]
	private HashSet<int> _RaycastIgnoreWorldObjectIds_k__BackingField;
	private float laserRange;
	private float pushBackStrength;
	private ClientSideNPCInteractable interactable;
	private InteractionPackageType interactionType;
	private IntervalWithRandomSeed intervalWithRandomSeed;
	private Dictionary<int, SentryGunBeam> woIdsBeamsMap;
	private List<int> deleteList;
	private float glowFactor;
	private SentryGunBeamType beamType;
	private MVSentryGunObject gunObject;
	private const float cullingRadius = 2f;
	private bool wasDead;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public IInputSignalReceiver InputSignalReceiver { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override Vector3 InputConnectorOffset { get; }
	public HashSet<int> RaycastIgnoreWorldObjectIds { [CompilerGenerated] get; [CompilerGenerated] set; }
	public SentryGunBeamType BeamType { get; }

	// Constructors
	public MVSentryGun(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private new void OnPositionChanged(MVWorldObjectClient wo, PositionChangedEventArgs positionChangedEventArgs);
	private void OnStateChange(CullingGroupEvent cullingGroupEvent);
	public override void Destroy();
	public override void InitializeInventory();
	public void InitializeCommon();
	public void ReceiveDamage(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	private void UpdateSentryState();
	public override void Select(Color color);
	public override void DeSelect();
	public override void Reset();
	private bool DoRespawn();
	protected override void OnUpdate();
	private void DoFrameDelete();
	private bool HitsTarget(Ray ray, int woID);
	private void ApplyDamage(MVWorldObjectClient wo, InteractionDataHandlerBase interactionDataHandlerBase);
	private static InteractionData BeamTypeToInteractionPackageType(SentryGunBeamType btype, Vector3 impulse);
	public override bool CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref int insertedBy);
	public override bool OnClickHandler(EditorStateMachine esm, Collider collider);
}

