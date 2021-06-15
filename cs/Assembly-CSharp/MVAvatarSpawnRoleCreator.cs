/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.Client;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings;
using MV.WorldObject.SpawnRoles;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVAvatarSpawnRoleCreator : MVBlueprintBase, ISpawnRolePreviewObject
{
	// Fields
	private MVAvatarSpawnRoleCreatorObject spawnRoleCreatorObject;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private int _AvatarRuntimePrototypeRoot_k__BackingField;
	private bool isInWorld;
	private UseInteractor useInteractor;
	private readonly SettingsReporter settingsReporter;
	private CullingSubscriberDynamic cullingSubscriberDynamic;
	public Action OnBodyUpdate;
	public const string teamKey = "team";
	public const string tierKey = "RequiredRank";

	// Properties
	private int AvatarRuntimePrototypeRoot { [CompilerGenerated] get; [CompilerGenerated] set; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	private MVPreviewAvatar AvatarPrototype { get; }
	public AttributeSettingsManager AttributeSettingsManagerAvatar { get; }
	public MVTeam Team { get; set; }
	public GamePassTier Tier { get; set; }

	// Constructors
	public MVAvatarSpawnRoleCreator(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	public void UpdateAvatarBody(SpawnRoleBodySwitchData spawnRoleBodySwitchData);
	public GameObject GetSpawnRolePreviewObject();
	public MVTeam GetTeamRequirement();
	public GamePassTier GetTierRequirement();
	public override void OnDataUpdate();
	public override void PartialUpdateWOData(Dictionary<object, object> woData);
	public override void PartialRemoveFromWOData(Dictionary<object, object> entriesToRemove);
	public override void Destroy();
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	private void SettingsReporterOnOnValueRemovedLocal(Dictionary<object, object> obj);
	private void SettingsReporterOnOnValueChangedLocal(Dictionary<object, object> obj);
	private void PartialDataRemove(int arg1, Dictionary<object, object> arg2);
	private void PartialDataUpdate(int arg1, Dictionary<object, object> arg2);
	private void HideBody();
	private void TryShowBody();
	private void ShowBody(MVWorldObjectClient originalBody);
}

