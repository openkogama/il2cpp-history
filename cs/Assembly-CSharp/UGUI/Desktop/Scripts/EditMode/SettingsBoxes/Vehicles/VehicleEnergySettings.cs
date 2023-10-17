/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using WorldObjectTypes.VehicleEnergy;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Vehicles
{
	public class VehicleEnergySettings : MonoBehaviour, IHandleSettingChanged
	{
		// Fields
		[SerializeField]
		private SettingsBase settingsBase;
		[SerializeField]
		private SettingsInputField nameInputField;
		[SerializeField]
		private SettingsSlider spawnOptionsSlider;
		[SerializeField]
		private SettingsInputFieldSlider spawnOptionsInputSlider;
		[SerializeField]
		private SettingsSlider spawnTimeSlider;
		[SerializeField]
		private SettingsInputFieldSlider spawnTimeInputSlider;
		[SerializeField]
		private SettingsSlider energyAmountSlider;
		[SerializeField]
		private SettingsInputFieldSlider energyAmountInputSlider;
		private Dictionary<object, object> vehicleEnergyBpData;
		private Dictionary<object, object> spawnerBpData;
		private int vehicleEnergyWoID;
		private MVWorldObjectSpawnerVehicleEnergy vehicleEnergySpawner;
		private MVVehicleEnergy vehicleEnergySpawnObject;
	
		// Nested types
		public static class DataKeys
		{
			// Fields
			public const string Name = "VehicleEnergyName";
			public const string SpawnOption = "RespawnCount";
			public const string SpawnTime = "RespawnInterval";
			public const string EnergyAmount = "VehicleEnergyAmount";
		}
	
		// Constructors
		public VehicleEnergySettings();
	
		// Methods
		public void Initialize(int woID, GameObject root);
		private void InitVehicleEnergyBpData();
		private void InitSpawnerBpData();
		public void OnSettingChanged(string key, object value);
		private void UpdateSpawnOptionText(int newSpawnOption);
	}
}
