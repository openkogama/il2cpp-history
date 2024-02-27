/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using IngameController.MVEditor;
using MV.Common;
using UnityEngine;
using WorldObjectInteractionSystem.UseSystem;
using WorldObjectTypes.MVObjectTransparency;
using WorldObjectTypes.VehiclesBase.Shared;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PrefabPool : MonoBehaviour
{
	// Fields
	[SerializeField]
	private EnumPoolManager enumPoolManager;
	private static PrefabPool instance;
	[Header("World Objects")]
	[SerializeField]
	private ObjectPrefab mvFirePrefab;
	[SerializeField]
	private ObjectPrefab mvAndPrefab;
	[SerializeField]
	private GameObject mvLocalAvatarPrefab;
	[SerializeField]
	private GameObject mvRemoteAvatarPrefab;
	[SerializeField]
	private GameObject mvLocalAvatarBuildModePrefab;
	[SerializeField]
	private GameObject mvRemoteAvatarBuildModePrefab;
	[SerializeField]
	private GameObject mvPreviewAvatarPrefab;
	[SerializeField]
	private AdvancedGhostObject mvAdvancedGhostPrefab;
	[SerializeField]
	private MVBodyObject mvBodyPrefab;
	[SerializeField]
	private MVAvatarSpawnRoleCreatorObject mvAvatarSpawnRoleCreatorPrefab;
	[SerializeField]
	private VehicleBaseObject mvHamsterWheelPrefab;
	[SerializeField]
	private VehicleBaseObject mvHoverCraftPrefab;
	[SerializeField]
	private CollectTheItemDropOffObject collectTheItemDropOff;
	[SerializeField]
	private CollectTheItemObject collectTheItemCollectable;
	[SerializeField]
	private CollectTheItemLineObject collectTheItem;
	[SerializeField]
	private ObjectiveArrow collectTheItemDropOffArrow;
	[SerializeField]
	private VehicleBaseObject mvJetPackPrefab;
	[SerializeField]
	private VehicleBaseObject mvJetPackDeluxePrefab;
	[SerializeField]
	private ObjectPrefab mvBatteryPrefab;
	[SerializeField]
	private ObjectPrefab mvCameraSettingsPrefab;
	[SerializeField]
	private MVCollectibleObject mvCollectiblePrefab;
	[SerializeField]
	private MVCollectibleObject mvCollectibleFantaPrefab;
	[SerializeField]
	private ObjectPrefab mvCheckpointPrefab;
	[SerializeField]
	private ObjectPrefab mvExplosivesPrefab;
	[SerializeField]
	private ObjectPrefab mvFlagPrefab;
	[SerializeField]
	private ObjectPrefab mvGameCoinChestPrefab;
	[SerializeField]
	private MVGameCoinObject mvGameCoinPrefab;
	[SerializeField]
	private GameObject mvGhostPrefab;
	[SerializeField]
	private ObjectPrefab mvGoalPrefab;
	[SerializeField]
	private GameObject mvGhostInstancePrefab;
	[SerializeField]
	private ObjectPrefab mvGravityCubePrefab;
	[SerializeField]
	private ObjectPrefab mvNegatePrefab;
	[SerializeField]
	private MVPointLightObject mvPointLightPrefab;
	[SerializeField]
	private MVPressurePlateObject mvPressurePlatePrefab;
	[SerializeField]
	private ObjectPrefab mvPulseBoxPrefab;
	[SerializeField]
	private ObjectPrefab mvRandomBoxPrefab;
	[SerializeField]
	private ObjectPrefab mvRoundCubePrefab;
	[SerializeField]
	private ObjectPrefab mvSkyboxPrefab;
	[SerializeField]
	private ObjectPrefab mvSmokePrefab;
	[SerializeField]
	private SoundEmitterObject mvSoundEmitterPrefab;
	[SerializeField]
	private SoundEmitterObject mvGloablSoundEmitterPrefab;
	[SerializeField]
	private ObjectPrefab mvSpawnPointBluePrefab;
	[SerializeField]
	private ObjectPrefab mvSpawnPointGreenPrefab;
	[SerializeField]
	private ObjectPrefab mvSpawnPointRedPrefab;
	[SerializeField]
	private ObjectPrefab mvSpawnPointYellowPrefab;
	[SerializeField]
	private MVTextMsgObject mvTextMsgPrefab;
	[SerializeField]
	private ObjectPrefab mvTimeTriggerPrefab;
	[SerializeField]
	private ObjectPrefab mvToggleBoxPrefab;
	[SerializeField]
	private MVTriggerBoxObject mvTriggerBoxPrefab;
	[SerializeField]
	private GameObject mvMovingPlatformGroupPrefab;
	[SerializeField]
	private GameObject mvMovingPlatformNodePrefab;
	[SerializeField]
	private MVObjectEnablerObject mvObjectEnablerPrefab;
	[SerializeField]
	private ObjectPrefab mvKillLimitPrefab;
	[SerializeField]
	private ObjectPrefab mvOculusKillLimitPrefab;
	[SerializeField]
	private MVSentryGunObject mvSentryGunPrefab;
	[SerializeField]
	private ShootableButtonObject shootableButtonPrefab;
	[SerializeField]
	private GameObject mvTeleportGroupPrefab;
	[SerializeField]
	private MVTeleporterObject mvTeleporterPrefab;
	[SerializeField]
	private UseLeverObject useLeverPrefab;
	[SerializeField]
	private ObjectPrefab mvWaterPlanePrefab;
	[SerializeField]
	private WindTurbineObject windTurbinePrefab;
	[SerializeField]
	private MVCountingCubeObject mvCountingCubePrefab;
	[SerializeField]
	private TeleportAvatar teleportAvatarPrefab;
	[SerializeField]
	private SpawnerObject spawnerObject;
	[SerializeField]
	private ObjectPrefab timeAttackFlagPrefab;
	[SerializeField]
	private MVGamePointObject gamePointPrefab;
	[SerializeField]
	private TriggerCubePrefab triggerCubePrefab;
	[SerializeField]
	private ObjectPrefab teamEditorPrefab;
	[SerializeField]
	private ObjectPrefab gamePointChestPrefab;
	[SerializeField]
	private ObjectPrefab vehicleEnergyPrefab;
	[SerializeField]
	private ObjectPrefab doorPrefab;
	[SerializeField]
	private MVObjectTransparencyObject mvObjectTransparencyPrefab;
	[Header("Game")]
	[SerializeField]
	[Space(20f)]
	private Material ghostMarkerMaterial;
	[SerializeField]
	private Material objectHiddenMaterial;
	[SerializeField]
	private SentryGunBeam iceBeamObject;
	[SerializeField]
	private SentryGunBeam fireBeamObject;
	[SerializeField]
	private StarDisplayObject starDisplayPrefab;
	[SerializeField]
	private RewardedAdDisplayObject rewardedAdDisplayPrefab;
	[SerializeField]
	private LevelDisplayCube levelDisplayPrefab;
	[SerializeField]
	private GameRankDisplayObject gameRankDisplayPrefab;
	[SerializeField]
	private GameCoinDisplayObject gameCoinDisplayPrefab;
	[SerializeField]
	private CubeModelChunkPrefab cubeModelChunkPrefab;
	[SerializeField]
	private Material blinkerDefaultMaterial;
	[Header("Pick up")]
	[SerializeField]
	[Space(20f)]
	private MVPickupItemBaseObject avatarCenterGunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarImpulseGunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarHealthPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarBazookaPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarRailGunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarMutantPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarSwordPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarMeleeWeaponPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarShotgunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarFlamethrowerPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarCubeGunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarNinjaRunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarSixShooterPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarDoubleSixShooterPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarThrowingStarPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarMultiThrowingStarPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarMouseGunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarGrowthGunPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarMousePackPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarGrowthPackPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarHealRayPrefab;
	[SerializeField]
	private MVPickupItemBaseObject avatarCostumePrefab;
	[Header("Avatar item pick up")]
	[SerializeField]
	[Space(20f)]
	private GameObject avatarItemCenterGun;
	[SerializeField]
	private GameObject avatarItemImpulseGun;
	[SerializeField]
	private GameObject avatarItemLaserPointer;
	[SerializeField]
	private GameObject avatarItemBazooka;
	[SerializeField]
	private GameObject avatarItemHand;
	[SerializeField]
	private GameObject avatarItemRailGun;
	[SerializeField]
	private GameObject avatarItemSword;
	[SerializeField]
	private GameObject avatarItemMeleeWeapon;
	[SerializeField]
	private GameObject avatarItemShotgun;
	[SerializeField]
	private GameObject avatarItemFlamethrower;
	[SerializeField]
	private GameObject avatarItemCubeGun;
	[SerializeField]
	private GameObject avatarItemSixShooter;
	[SerializeField]
	private GameObject avatarItemDoubleSixShooter;
	[SerializeField]
	private GameObject avatarItemThrowingStar;
	[SerializeField]
	private GameObject avatarItemMultiThrowingStar;
	[SerializeField]
	private GameObject avatarItemGrowthGun;
	[SerializeField]
	private GameObject avatarItemMouseGun;
	[SerializeField]
	private GameObject avatarItemSlapGun;
	[SerializeField]
	private GameObject avatarItemCollectTheItem;
	[SerializeField]
	private GameObject avatarItemHealRay;
	[SerializeField]
	private GameObject avatarItemCostume;
	[Header("Avatar modifier")]
	[SerializeField]
	[Space(20f)]
	private AvatarModifier shieldModifier;
	[Header("Particles")]
	[SerializeField]
	[Space(20f)]
	private GameObject particleCFX_GroundAura;
	[SerializeField]
	private ParticleSystem particleCubeDust;
	[SerializeField]
	private ParticleSystem particleCubeDustDestroyed;
	[SerializeField]
	private ParticleSystem particleExplosion;
	[SerializeField]
	private ParticleSystem particleFluffySmoke;
	[SerializeField]
	private ParticleSystem goldExplosion;
	[SerializeField]
	private ParticleSystem poisonParticles;
	[SerializeField]
	private ParticleSystem collectTheItemParticles;
	[SerializeField]
	private ParticleSystem healingParticles;
	[Header("Logic object prefabs")]
	[SerializeField]
	[Space(20f)]
	private GameObject logicInputConnectorPrefab;
	[SerializeField]
	private GameObject logicOutputConnectorPrefab;
	[SerializeField]
	private GameObject logicObjectConnectorPrefab;
	[SerializeField]
	private LinkObjectScript linkObject;
	[SerializeField]
	private ObjectLinkObjectScript objectLinkObject;
	[SerializeField]
	private Material logicCubeConnectorRedMaterial;
	[SerializeField]
	private Material logicCubeConnectorRedSelectedMaterial;
	[SerializeField]
	private Material logicCubeConnectorBlueMaterial;
	[SerializeField]
	private Material logicCubeConnectorBlueSelectedMaterial;
	[Header("GUI")]
	[SerializeField]
	[Space(20f)]
	private Texture2D avatarAccessoryMoveIcon;
	[SerializeField]
	private GameObject drawPlaneObject;
	[SerializeField]
	private Material modelConstraintsMaterial;
	[Header("UGUI")]
	[SerializeField]
	[Space(20f)]
	private AvatarInputControllerTouchSettings avatarInputControllerTouchSettings;
	[SerializeField]
	private Texture2D crosshairCursor;
	[SerializeField]
	private MaterialButtonTextureGenerator materialButtonTextureGenerator;
	[SerializeField]
	private InsertCursor insertCursor;
	[SerializeField]
	private ChatBubble chatBubble;
	[SerializeField]
	private Material roundedRectangleMaterial;
	[Header("TextBubbleContent")]
	[SerializeField]
	private RectTransform editCornerHelpText;
	[SerializeField]
	private RectTransform editEdgeHelpText;
	[SerializeField]
	private RectTransform editFaceHelpText;
	[Header("Editor")]
	[Header("Cameras")]
	[SerializeField]
	[Space(20f)]
	[Space(20f)]
	private Material cellCursorErrorMaterial;
	[SerializeField]
	private Material cellCursorMaterial;
	[SerializeField]
	private Material modelCubeSpaceMaterial;
	[SerializeField]
	private Material cursor2dEdgeMaterial;
	[SerializeField]
	private Material cursor2dCornerMaterial;
	[SerializeField]
	private Material cursorMaterial;
	[SerializeField]
	private Material cursorCornerMaterial;
	[SerializeField]
	private Material cursorNoneMaterial;
	[SerializeField]
	private Material insertPreviewMaterial;
	[SerializeField]
	private Material previewBoxMaterial;
	[SerializeField]
	private Material selectBoxMaterial;
	[SerializeField]
	private SphereVolumeIndicator rangeVisualizationObject;
	[SerializeField]
	private LineRangeIndicator lineRangeIndicator;
	[SerializeField]
	private AdvancedGhostIcon ghostEditorIconObject;
	[SerializeField]
	private Material indentMaterial;
	[SerializeField]
	private TransformGizmo transformGizmo;
	[Header("Touch")]
	[SerializeField]
	[Space(20f)]
	public GameObject touchDetectionHandlerPrefab;
	private Dictionary<AvatarItemType, EquipableData> pickupPrefabLUT;
	private Dictionary<MVJetPack.JetPackType, VehicleBaseObject> jetPackPrefabLUT;
	private Dictionary<bool, EquipableData> meleeWeaponPrefabLUT;

	// Properties
	public EnumPoolManager EnumPoolManager { get; }
	public static PrefabPool Instance { get; }
	public ObjectPrefab MVAvatarSpawnRoleCreatorPrefab { get; }
	public ObjectPrefab MVFirePrefab { get; }
	public ObjectPrefab MVAndPrefab { get; }
	public GameObject MVLocalAvatarPrefab { get; }
	public GameObject MVRemoteAvatarPrefab { get; }
	public GameObject MVAvatarLocalBuildModePrefab { get; }
	public GameObject MVAvatarRemoteBuildModePrefab { get; }
	public GameObject MVPreviewAvatarPrefab { get; }
	public AdvancedGhostObject MVAdvancedGhostPrefab { get; }
	public MVBodyObject MVBodyPrefab { get; }
	public VehicleBaseObject MVHamsterWheelPrefab { get; }
	public VehicleBaseObject MVHoverCraftPrefab { get; }
	public CollectTheItemDropOffObject CollectTheItemDropOffPrefab { get; }
	public CollectTheItemObject CollectTheItemCollectablePrefab { get; }
	public CollectTheItemLineObject CollectTheItemPrefab { get; }
	public ObjectiveArrow CollectTheItemDropOffArrowPrefab { get; }
	public VehicleBaseObject MVJetPackPrefab { get; }
	public VehicleBaseObject MVJetPackDeluxePrefab { get; }
	public ObjectPrefab MVBatteryPrefab { get; }
	public ObjectPrefab MVCameraSettingsPrefab { get; }
	public ObjectPrefab TeamEditorPrefab { get; }
	public MVCollectibleObject MVCollectiblePrefab { get; }
	public MVCollectibleObject MVCollectibleFantaPrefab { get; }
	public ObjectPrefab MVCheckpointPrefab { get; }
	public ObjectPrefab MVExplosivesPrefab { get; }
	public ObjectPrefab MVFlagPrefab { get; }
	public ObjectPrefab MVGameCoinChestPrefab { get; }
	public MVGameCoinObject MVGameCoinPrefab { get; }
	public GameObject MVGhostPrefab { get; }
	public ObjectPrefab MVGoalPrefab { get; }
	public GameObject MVGhostInstancePrefab { get; }
	public ObjectPrefab MVGravityCubePrefab { get; }
	public ObjectPrefab MVNegatePrefab { get; }
	public MVPointLightObject MVPointLightPrefab { get; }
	public MVPressurePlateObject MVPressurePlatePrefab { get; }
	public ObjectPrefab MVPulseBoxPrefab { get; }
	public ObjectPrefab MVRandomBoxPrefab { get; }
	public ObjectPrefab MVRoundCubePrefab { get; }
	public ObjectPrefab MVSkyboxPrefab { get; }
	public ObjectPrefab MVSmokePrefab { get; }
	public SoundEmitterObject MVSoundEmitterPrefab { get; }
	public SoundEmitterObject MVGlobalSoundEmitterPrefab { get; }
	public ObjectPrefab MVSpawnPointBluePrefab { get; }
	public ObjectPrefab MVSpawnPointGreenPrefab { get; }
	public ObjectPrefab MVSpawnPointRedPrefab { get; }
	public ObjectPrefab MVSpawnPointYellowPrefab { get; }
	public MVTextMsgObject MVTextMsgPrefab { get; }
	public ObjectPrefab MVTimeTriggerPrefab { get; }
	public ObjectPrefab MVToggleBoxPrefab { get; }
	public MVTriggerBoxObject MVTriggerBoxPrefab { get; }
	public GameObject MVMovingPlatformGroupPrefab { get; }
	public GameObject MVMovingPlatformNodePrefab { get; }
	public MVObjectEnablerObject MVObjectEnablerPrefab { get; }
	public ObjectPrefab MVKillLimitPrefab { get; }
	public ObjectPrefab MVOculusKillLimitPrefab { get; }
	public MVSentryGunObject MVSentryGunPrefab { get; }
	public ShootableButtonObject ShootableButtonPrefab { get; }
	public GameObject MVTeleportGroupPrefab { get; }
	public MVTeleporterObject MVTeleporterPrefab { get; }
	public UseLeverObject UseLeverPrefab { get; }
	public ObjectPrefab MVWaterPlanePrefab { get; }
	public WindTurbineObject WindTurbinePrefab { get; }
	public MVCountingCubeObject MVCountingCubePrefab { get; }
	public TeleportAvatar TeleportAvatarPrefab { get; }
	public SpawnerObject SpawnerObjectPrefab { get; }
	public ObjectPrefab TimeAttackFlagPrefab { get; }
	public MVGamePointObject GamePointPrefab { get; }
	public ObjectPrefab GamePointChestPrefab { get; }
	public ObjectPrefab VehicleEnergyPrefab { get; }
	public ObjectPrefab DoorPrefab { get; }
	public TriggerCubePrefab TriggerCubePrefab { get; }
	public MVObjectTransparencyObject MVObjectTransparencyPrefab { get; }
	public Material GhostMarkerMaterial { get; }
	public Material ObjectHiddenMaterial { get; }
	public SentryGunBeam IceBeamObject { get; }
	public SentryGunBeam FireBeamObject { get; }
	public StarDisplayObject StarDisplayPrefab { get; }
	public RewardedAdDisplayObject RewardedAdDisplayPrefab { get; }
	public LevelDisplayCube LevelDisplayPrefab { get; }
	public GameRankDisplayObject GameRankDisplayPrefab { get; }
	public GameCoinDisplayObject GameCoinDisplayPrefab { get; }
	public CubeModelChunkPrefab CubeModelChunkPrefab { get; }
	public Material BlinkerDefaultMaterial { get; }
	public MVPickupItemBaseObject AvatarCenterGunPrefab { get; }
	public MVPickupItemBaseObject AvatarImpulseGunPrefab { get; }
	public MVPickupItemBaseObject AvatarHealthPrefab { get; }
	public MVPickupItemBaseObject AvatarBazookaPrefab { get; }
	public MVPickupItemBaseObject AvatarRailGunPrefab { get; }
	public MVPickupItemBaseObject AvatarMutantPrefab { get; }
	public MVPickupItemBaseObject AvatarShotgunPrefab { get; }
	public MVPickupItemBaseObject AvatarSwordPrefab { get; }
	public MVPickupItemBaseObject AvatarMeleeWeaponPrefab { get; }
	public MVPickupItemBaseObject AvatarFlamethrowerPrefab { get; }
	public MVPickupItemBaseObject AvatarCubeGunPrefab { get; }
	public MVPickupItemBaseObject AvatarNinjaRunPrefab { get; }
	public MVPickupItemBaseObject AvatarSixShooterPrefab { get; }
	public MVPickupItemBaseObject AvatarDoubleSixShooterPrefab { get; }
	public MVPickupItemBaseObject AvatarThrowingStarPrefab { get; }
	public MVPickupItemBaseObject AvatarMultiThrowingStarPrefab { get; }
	public MVPickupItemBaseObject AvatarMouseGunPrefab { get; }
	public MVPickupItemBaseObject AvatarGrowthGunPrefab { get; }
	public MVPickupItemBaseObject AvatarMousePackPrefab { get; }
	public MVPickupItemBaseObject AvatarGrowthPackPrefab { get; }
	public MVPickupItemBaseObject AvatarHealRayPrefab { get; }
	public MVPickupItemBaseObject AvatarCostumePrefab { get; }
	public GameObject AvatarItemCenterGun { get; }
	public GameObject AvatarItemImpulseGun { get; }
	public GameObject AvatarItemLaserPointer { get; }
	public GameObject AvatarItemBazooka { get; }
	public GameObject AvatarItemHand { get; }
	public GameObject AvatarItemRailGun { get; }
	public GameObject AvatarItemSword { get; }
	public GameObject AvatarItemMeleeWeapon { get; }
	public GameObject AvatarItemShotgun { get; }
	public GameObject AvatarItemFlamethrower { get; }
	public GameObject AvatarItemCubeGun { get; }
	public GameObject AvatarItemSixShooter { get; }
	public GameObject AvatarItemDoubleSixShooter { get; }
	public GameObject AvatarItemThrowingStar { get; }
	public GameObject AvatarItemMultiThrowingStar { get; }
	public GameObject AvatarItemGrowthGun { get; }
	public GameObject AvatarItemMouseGun { get; }
	public GameObject AvatarItemSlapGun { get; }
	public GameObject AvatarItemCollectTheItem { get; }
	public GameObject AvatarItemHealRay { get; }
	public GameObject AvatarItemCostume { get; }
	public AvatarModifier ShieldModifier { get; }
	public GameObject ParticleCFX_GroundAura { get; }
	public ParticleSystem ParticleCubeDust { get; }
	public ParticleSystem ParticleCubeDustDestroyed { get; }
	public ParticleSystem ParticleExplosion { get; }
	public ParticleSystem ParticleFluffySmoke { get; }
	public ParticleSystem GoldExplosion { get; }
	public ParticleSystem PoisonParticles { get; }
	public ParticleSystem CollectTheItemParticles { get; }
	public ParticleSystem HealingParticles { get; }
	public GameObject LogicInputConnectorPrefab { get; }
	public GameObject LogicOutputConnectorPrefab { get; }
	public GameObject LogicObjectConnectorPrefab { get; }
	public LinkObjectScript LinkObject { get; }
	public ObjectLinkObjectScript ObjectLinkObject { get; }
	public Material LogicCubeConnectorRedMaterial { get; }
	public Material LogicCubeConnectorRedSelectedMaterial { get; }
	public Material LogicCubeConnectorBlueMaterial { get; }
	public Material LogicCubeConnectorBlueSelectedMaterial { get; }
	public Texture2D AvatarAccessoryMoveIcon { get; }
	public GameObject DrawPlaneObject { get; }
	public Material ModelConstraintsMaterial { get; }
	public AvatarInputControllerTouchSettings AvatarInputControllerTouchSettings { get; }
	public Texture2D CrosshairCursor { get; }
	public MaterialButtonTextureGenerator MaterialButtonTextureGenerator { get; }
	public InsertCursor InsertCursor { get; }
	public ChatBubble ChatBubble { get; }
	public Material RoundedRectangleMaterial { get; }
	public Material CellCursorErrorMaterial { get; }
	public Material CellCursorMaterial { get; }
	public Material ModelCubeSpaceMaterial { get; }
	public Material Cursor2dEdgeMaterial { get; }
	public Material Cursor2dCornerMaterial { get; }
	public Material CursorMaterial { get; }
	public Material CursorCornerMaterial { get; }
	public Material CursorNoneMaterial { get; }
	public Material InsertPreviewMaterial { get; }
	public Material PreviewBoxMaterial { get; }
	public Material SelectBoxMaterial { get; }
	public SphereVolumeIndicator RangeVisualizationObject { get; }
	public LineRangeIndicator LineRangeIndicator { get; }
	public AdvancedGhostIcon GhostEditorIconObject { get; }
	public Material IndentMaterial { get; }
	public TransformGizmo TransformGizmo { get; }
	public static Dictionary<AvatarItemType, EquipableData> PickupPrefabLUT { get; }
	public static Dictionary<MVJetPack.JetPackType, VehicleBaseObject> JetPackPrefabLUT { get; }

	// Constructors
	public PrefabPool();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	public RectTransform CubeEditHelpTextBubble(CubeModelingStateMachine.HoverType t);
	public static EquipableData GetPickupPrefab(AvatarItemType avatarItemType, int itemId);
	private void BuildLookupTables();
}

