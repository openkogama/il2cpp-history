/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using MV.WorldObject.GamePassSystem;
using MV.WorldObject.MetaData;
using MV.WorldObject.SpawnRoles;
using MV.WorldObject.Subscription;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPlayer
{
	// Fields
	private int checkpointWOID;
	protected PlayerPlanetDataRemote playerPlanetDataRemote;
	protected int level;
	public Action OnGoldAmountChange;
	public UnityAction<int> OnLevelChanged;
	public UnityAction OnCheckpointReached;
	public UnityAction OnPause;
	public UnityAction OnResume;
	public UnityAction OnObserve;
	[CompilerGenerated]
	private int _ProfileID_k__BackingField;
	[CompilerGenerated]
	private int _ActorNr_k__BackingField;
	[CompilerGenerated]
	private string _RegionCode_k__BackingField;
	[CompilerGenerated]
	private BuildTarget _BuildTarget_k__BackingField;
	[CompilerGenerated]
	private UserProfileData _UserProfileData_k__BackingField;
	[CompilerGenerated]
	private SubscriptionRulesWrapper _SubscriptionRules_k__BackingField;
	private PlayerGameState playerState;
	[CompilerGenerated]
	private MVTeam _Team_k__BackingField;
	protected SpawnRolesManager spawnRolesManager;

	// Properties
	public int ProfileID { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool IsTourist { get; }
	public int WoId { get; }
	public int ActorNr { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string RegionCode { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public BuildTarget BuildTarget { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public PlayerPlanetDataRemote PlayerPlanetDataRemote { get; set; }
	public UserProfileData UserProfileData { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public SubscriptionRulesWrapper SubscriptionRules { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool IsSubscriber { get; }
	public PlayerGameState PlayerState { get; set; }
	public bool IsReady { get; }
	public bool IsPlayerStateInWorld { get; }
	public int Level { get; set; }
	public MVTeam Team { [CompilerGenerated] get; [CompilerGenerated] set; }
	public SpawnRolesManager SpawnRolesManager { get; }

	// Constructors
	public MVPlayer(int actorNumber, int profileID, string regionCode, BuildTarget buildTarget, UserProfileData userProfileData, bool isReady, bool observer);
	public MVPlayer(int actorNumber, int profileID, int level, string regionCode, BuildTarget buildTarget, UserProfileData userProfileData, bool isReady, bool observer, PlayerPlanetDataRemote playerPlanetDataRemote);

	// Methods
	public void NotifyAvatarCreated(int id);
	public bool IsOnSameTeam(MVPlayer other);
	public bool IsOnTeam(MVTeam otherTeam);
	public bool IsOnSameTeam(MVWorldObjectClient wo);
	public void SetCheckpoint(int woid);
	public MVCheckpoint GetCheckpoint();
	public void ResetCheckpoint();
	public int GetGameStat(GameStatCounterType gameStatCounterType);
	public void SetReady();
	public void SetupSpawnRoleManager(ISpawnRoleChangeHandler spawnRoleChangeHandler, SpawnRolesRuntimeData spawnRolesRuntimeData);
}

