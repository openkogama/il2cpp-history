/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using TMPro;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarUIHandlerRemote : AvatarUIHandler
{
	// Fields
	private Material avatarNameMaterial;
	private Material avatarHealthMaterial;
	private Material avatarShieldMaterial;
	private Material avatarTeamIconMaterial;
	private CullingSubscriberBase cullingSubscriberBase;
	private bool shouldShowMobileIcon;
	private bool nameTagLabelVisible;
	private bool forceHideUI;
	[SerializeField]
	private HealthBar healthBar;
	[SerializeField]
	private ShieldBar shieldBar;
	[SerializeField]
	private AvatarBadge avatarBadge;
	[SerializeField]
	private TMP_Text avatarName;
	[SerializeField]
	private Renderer healthBarRenderer;
	[SerializeField]
	private Renderer shieldBarRenderer;
	[SerializeField]
	private Renderer teamIconRenderer;
	[SerializeField]
	private Material teamIconMaterial;
	[SerializeField]
	private Material enemyIconMaterial;
	[SerializeField]
	private Material enemyIconMaterialVisibleThroughWalls;
	[SerializeField]
	private TeamIconScaleWithDistance teamIcon;
	[SerializeField]
	private Transform nameTagLabel;
	[SerializeField]
	private MeshRenderer mobileIcon;
	[SerializeField]
	private Texture androidTexture;
	[SerializeField]
	private Texture iOSTexture;
	[SerializeField]
	private SayChatBubbleHandler sayChatBubbleHandler;
	[SerializeField]
	private GameObject memberFrame;

	// Properties
	public HealthBar HealthBar { get; }
	public ShieldBar ShieldBar { get; }
	public SayChatBubbleHandler SayChatBubbleHandler { get; }
	private Material EnemyIconMaterial { get; }
	public bool NameTagLabelVisible { get; set; }
	public bool ForceHideUI { get; set; }

	// Constructors
	public AvatarUIHandlerRemote();

	// Methods
	public void ShowMobileIcon(BuildTarget bT);
	public override void Initialize(bool isLocal, MVWorldObjectClient wo, int ownerActorNr, ChatAnchor chatBubbleAnchor);
	public override void SetShouldShowUI(bool shouldShow);
	public override void Activate();
	public override void Deactivate();
	private void OnXRayBoostChanged();
	public override void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	public override void HandleTeamChange();
	public void UpdateHealthBarColor();
	public void UpdateNameTag();
	public void SetHealthBarColor(bool isFriendly);
	private void OnStateChanged(CullingGroupEvent cullingEvent);
	private bool IsOnSameTeamAsLocalAvatar();
	private void HideUI();
	protected override void OnDestroy();
}

