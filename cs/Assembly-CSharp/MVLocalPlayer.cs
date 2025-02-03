/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using MV.WorldObject.GamePassSystem;
using MV.WorldObject.MetaData;
using MV.WorldObject.SpawnRoles;
using WorldObjectTypes.Avatar.Local;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVLocalPlayer : MVPlayer
{
	// Fields
	protected SpawnRolesMetaData spawnRolesMetaData;
	private PlayerPlanetData playerPlanetData;
	private BoostController boostController;
	private int defaultBodyWoId;
	private const int NrOfTimesDiedOffset = -3729;
	private ObscuredInt numberOfTimesDiedInRound;
	public Action OnInitializeLeveling;
	private readonly SpawnRoleDataMediator spawnRoleDataMediator;
	[CompilerGenerated]
	private WorldObjectUseRequirementTracker _WorldObjectUseRequirementTracker_k__BackingField;
	protected XPProgress xpProgress;
	private int planetOwnershipTypeID;
	public XPProgress.OnXPProgressDataDelegate OnXPProgressData;
	protected int joinTime;
	protected const float respawnDuration = 4f;
	protected float respawnTime;
	protected const float reviveTimeout = 10f;
	private int oldLevel;

	// Properties
	public MVBody Body { get; }
	public int DefaultSpawnRoleId { get; }
	public SpawnRoleDataMediator SpawnRoleDataMediator { get; }
	public PlayerPlanetData PlayerPlanetData { get; set; }
	public BoostController BoostController { get; private set; }
	public WorldObjectUseRequirementTracker WorldObjectUseRequirementTracker { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int DefaultBodyWoId { get; }
	public int PlanetOwnershipTypeID { get; private set; }
	public PlanetOwnershipType PlanetOwnership { get; }
	public XPProgressData XPProgressData { get; }
	public int JoinTime { get; }
	public bool CanGetXPProgressData { get; }
	public float RespawnDuration { get; }
	public float RespawnTime { get; set; }
	public float ReviveTimeout { get; }
	private MVAvatarLocal AvatarLocal { get; }
	public bool IsAdmin { get; }
	public bool IsChatLocked { get; }

	// Constructors
	public MVLocalPlayer(int actorNumber, int profileID, string regionCode, int planetOwnershipTypeID, UserProfileData userProfileData);

	// Methods
	private void SpawnRoleModeOnOnChange(SpawnRoleModeType value);
	public void SetupPlayerWorldObjects(int defaultBodyWoId, SpawnRolesRuntimeData spawnRolesRuntimeData);
	public virtual void InitializeLeveling(InitialLevelData initialLevelData);
	public void SetSpawnRoleMetaData(SpawnRolesMetaData spawnRolesMetaData);
	public void SetActiveSpawnRole(int existingAvatarWoId);
	public void CreateSpawnRole(int avatarSpawnerWoId);
	public void CreateSpawnRoleFailed();
	private void SuspendCurrentSpawnRole();
	private void UnSuspendCurrentSpawnRole();
	public void AddXp(int currentPlayerXP, XPRewardType typeId, int xpDelta, int memberCount);
	protected void SendXpProgressEvent(XPProgressData xpProgressData);
	protected void OnLevelChangedLocal(int level);
	public virtual void Destroy();
	public bool IsPlaying();
	public void DiedInRound();
	public bool HasDiedInRound();
	public void RoundEnded();
	public bool IsAvatarDriving(MVVehicleBase vehicleBase);
	public void ToggleAudioListener(bool on);
}

