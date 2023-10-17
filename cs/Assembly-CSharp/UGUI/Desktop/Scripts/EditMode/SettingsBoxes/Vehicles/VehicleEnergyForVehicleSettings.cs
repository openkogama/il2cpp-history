/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Vehicles
{
	public class VehicleEnergyForVehicleSettings : MonoBehaviour
	{
		// Fields
		public static readonly Vector2 VehicleEnergyEditingCanvasSize;
		public const string VehicleEnergyOn = "vehicleEnergyUse";
		public const string VehicleEnergyStorage = "vehicleEnergyStorage";
		public const string VehicleEnergyConsumption = "vehicleEnergyConsumption";
		[SerializeField]
		private VehicleBaseSettings vehicleBaseSettings;
		[SerializeField]
		private SettingsToggle vehicleEnergyOnToggle;
		[SerializeField]
		private SettingsSlider storageSlider;
		[SerializeField]
		private SettingsInputFieldSlider storageInputField;
		[SerializeField]
		private SettingsSlider consumptionSlider;
		[SerializeField]
		private SettingsInputFieldSlider consumptionInputField;
	
		// Constructors
		public VehicleEnergyForVehicleSettings();
		static VehicleEnergyForVehicleSettings();
	
		// Methods
		private void Start();
		public void OnSavePressed();
		public static bool IsKey(string key);
		public object ValueToSend(string key, object value);
	}
}
