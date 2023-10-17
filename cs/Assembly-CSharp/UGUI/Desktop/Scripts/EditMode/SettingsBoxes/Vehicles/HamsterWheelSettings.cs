/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Vehicles
{
	public class HamsterWheelSettings : VehicleBaseSettings, IHandleSettingChanged
	{
		// Fields
		public static readonly VehicleEnergyForVehicleSettingsConfig VehicleEnergyForVehicleSettingsConfig;
	
		// Properties
		protected override Vector2 DefaultCanvasSize { get; }
	
		// Constructors
		public HamsterWheelSettings();
		static HamsterWheelSettings();
	
		// Methods
		public override void Initialize(GameObject root);
		public override Dictionary<object, object> FillDefaultBlueprintData();
		public override void BlueprintDataRetrieved();
		public override VehicleEnergyForVehicleSettingsConfig GetVehicleEnergySettingsConfig();
		public void OnSettingChanged(string key, object value);
	}
}
