/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SettingsFactory : MonoBehaviour
{
	// Fields
	[SerializeField]
	private bool previewSettingsPopup;
	[SerializeField]
	private WorldObjectType worldObjectType;
	[SerializeField]
	private MaterialsController materialsController;
	[SerializeField]
	private PointLightSettings pointLightSettingsPrefab;
	[SerializeField]
	private SmokeSettings smokeSettingsPrefab;
	[SerializeField]
	private KillLimitSettings killLimitSettingsPrefab;
	[SerializeField]
	private CubeGunSettings cubeGunSettingsPrefab;
	[SerializeField]
	private MessageBoxSettings messageBoxSettingsPrefab;
	[SerializeField]
	private SkyboxSettings skyboxSettingsPrefab;
	[SerializeField]
	private RoundCubeSettings roundCubeSettingsPrefab;
	[SerializeField]
	private TimeTriggerSettings timeTriggerSettingsPrefab;
	[SerializeField]
	private ToggleBoxSettings toggleBoxSettingsPrefab;
	[SerializeField]
	private ObjectEnablerSettings objectEnablerPrefab;
	[SerializeField]
	private PulseBoxSettings pulseBoxPrefab;
	[SerializeField]
	private CountingCubeSettings countingCubeSettingsPrefab;
	[SerializeField]
	private RotatorSettings rotatorSettingsPrefab;
	[SerializeField]
	private WindTurbineSettings windTurbineSettingsPrefab;
	[SerializeField]
	private OculusSettings oculusSettingsPrefab;
	[SerializeField]
	private PressurePlateSettings pressurePlateSettingsPrefab;
	[SerializeField]
	private GameCoinChestSettings gameCoinChestSettingsPrefab;
	[SerializeField]
	private WaterBoxSettings waterBoxSettingsPrefab;
	[SerializeField]
	private CameraBoxSettings cameraBoxSettingsPrefab;
	[SerializeField]
	private MovablesSettings movablesSettingsPrefab;
	[SerializeField]
	private SoundEmitterSettings soundEmitterSettingsPrefab;
	[SerializeField]
	private GlobalSoundEmitterSettings globalSoundEmitterSettingsPrefab;
	[SerializeField]
	private SoundInventoryController soundInventoryControllerPrefab;
	[SerializeField]
	private SoundInventoryController globalSoundInventoryControllerPrefab;
	[SerializeField]
	private LeverSettings leverSettingsPrefab;
	[SerializeField]
	private ShootablePlateSettings shootablePlateSettingsPrefab;
	[SerializeField]
	private CollectTheItemSettings collectTheItemSettingsPrefab;
	[SerializeField]
	private CollectTheItemDropoffSettings collectTheItemDropoffSettingsPrefab;
	[SerializeField]
	private FireSettings fireSettingsPrefab;
	[SerializeField]
	private TriggerCubeSettings triggerCubeSettingsPrefab;
	[SerializeField]
	private TeamEditorSettings teamEditorSettingsPrefab;
	[SerializeField]
	private GamePointSettings gamePointSettingsPrefab;
	[SerializeField]
	private GamePointMinorRewardSettings gamePointMinorRewardSettingsPrefab;
	[SerializeField]
	private GamePointChestSettings gamePointChestSettingsPrefab;
	[SerializeField]
	private SpawnRoleEditorMenu spawnRoleEditorPrefab;
	[SerializeField]
	private RespawnSettings respawnSettingsPrefab;
	[SerializeField]
	private LevelRequirementSettings levelRequirementSettingsPrefab;
	[SerializeField]
	private GameCoinRequirementSettings gameCoinRequirementSettingsPrefab;
	[SerializeField]
	private StarsRequirementSettings starsRequirementSettingsPrefab;
	[SerializeField]
	private TeamRequirementSettings teamRequirementSettingsPrefab;
	[SerializeField]
	private GameRankRequirementSettings gameRankRequirementSettingsPrefab;

	// Nested types
	[CompilerGenerated]
	private sealed class _CreateSettingsDialog_c__AnonStorey0
	{
		// Fields
		internal SpawnRoleEditorMenu spawnRoleEditor;

		// Constructors
		public _CreateSettingsDialog_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SettingsFactory();

	// Methods
	public void CreateSettingsDialog(int woID);
	public void CreateSettingsDialog(int woID, UseRequirementType requirementType);
	public void CreateSettingsDialog(int woID, WorldObjectType worldObjectType);
	public void CreateSoundsInventory(int woID);
	public void CreateGlobalSoundsInventory(int woID);
	public void CreateGamePointsSettings(int woID);
	public void CreateGamePointsMinorRewardSettings(int woID);
	public void CreateRespawnSetting(int woID);
	private void CreateBlueprintSettings(int woID);
	private void CreateRotatorSettings(int woID);
	private void CreateMovablesSettings(int woID);
	private void OnValidate();
}

