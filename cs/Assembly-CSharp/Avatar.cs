/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using WorldObjectTypes.Avatar.Shared;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Avatar : MonoBehaviour, IBulletImpactVisualizer, IMovable
{
	// Fields
	public MVAvatar mvAvatar;
	private bool isLocal;
	private Dictionary<AvatarModifierPackageType, AvatarModifier> modifiers;
	private Dictionary<AvatarModifierPackageType, byte> currentModifierByteState;
	private byte[] modifierEffectCount;
	private InteractionDataHandlerBase interactionDataHandler;
	private Collider avatarCollider;
	[SerializeField]
	private AvatarLevelUp avatarLevelUp;
	[SerializeField]
	private AvatarFader avatarFader;
	[SerializeField]
	public GameObject root;
	[SerializeField]
	private AvatarBulletImpactVisualizer bulletImpactVisualizer;
	[SerializeField]
	private WaterSplashComponent waterSplashComponent;
	[SerializeField]
	private AvatarEnabledChangeHandler enabledChangeHandler;
	[SerializeField]
	protected AvatarUIHandler avatarUIHandler;
	[SerializeField]
	private ChatAnchor chatBubbleAnchor;
	[SerializeField]
	private AvatarPaused avatarPaused;

	// Properties
	public bool IsLocal { get; }
	public InteractionDataHandlerBase InteractionDataHandlerBase { get; }
	public Collider Collider { get; }
	public AvatarFader AvatarFader { get; }
	public AvatarEnabledChangeHandler EnabledChangeHandler { get; }
	public AvatarUIHandler AvatarUIHandler { get; }
	public ChatAnchor ChatBubbleAnchor { get; }
	public Vector3 Velocity { get; }
	public Bounds Bounds { get; }
	public Vector3 Position { get; }

	// Constructors
	public Avatar();

	// Methods
	public virtual void Initialize(MVAvatar mvAvatar, bool isLocal);
	public void UpdateModifiers(Dictionary<object, object> newModifiers);
	public void OnEnterVehicle();
	public void OnExitVehicle();
	public void StartBlinking(BlinkType type, float duration = 1F / 0F);
	public void StopBlinking(BlinkType type);
	public void VisualizeBulletImpact(VoxelHit voxelHit, Ray lineOfFire, int shooterActorNumber, float damage = 100f);
	public bool HasModifierEffect(AvatarModifierEffect modifierEffect);
}

