/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.Client;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameOptions;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameOptionDataObject : MVWorldObjectClient
{
	// Fields
	private readonly SettingsReporter setttingsReporter;
	private readonly SettingsManager settingsManager;

	// Properties
	public GameBoosterSettingsManager GameBoosterSettingsManager { get; }
	public GameOptionSettingsManager GameOptionSettingsManager { get; }

	// Constructors
	public MVGameOptionDataObject(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public void UpdateSetting(KogamaSettingWrapperBase obj);
	public void RemoveSetting(KogamaSettingWrapperBase obj);
	public void Submit();
	public override void PartialUpdateWOData(Dictionary<object, object> woData);
	public override void PartialRemoveFromWOData(Dictionary<object, object> entriesToRemove);
	private void PartialDataRemove(int arg1, Dictionary<object, object> arg2);
	private void PartialDataUpdate(int arg1, Dictionary<object, object> arg2);
}

