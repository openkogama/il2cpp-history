/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Vehicles
{
	public abstract class VehicleBaseSettings : MonoBehaviour
	{
		// Fields
		[SerializeField]
		protected SettingsBase settingsBase;
		[SerializeField]
		private RectTransform canvas;
		[FormerlySerializedAs("vehicleEnergySettings")]
		[SerializeField]
		protected VehicleEnergyForVehicleSettings vehicleEnergyForVehicleSettings;
		public Action OnInitialized;
		protected MVWorldObjectSpawnerVehicle spawnerVehicle;
		protected MVVehicleBase vehicleBase;
		protected int vehicleWoID;
		protected Dictionary<object, object> bluePrintData;
	
		// Properties
		protected virtual Vector2 DefaultCanvasSize { get; }
	
		// Constructors
		protected VehicleBaseSettings();
	
		// Methods
		public static string SettingsKey(string key);
		public object GetBluePrintData(object key);
		public void Initialize(int woID, GameObject root);
		public abstract void Initialize(GameObject root);
		public abstract Dictionary<object, object> FillDefaultBlueprintData();
		public abstract void BlueprintDataRetrieved();
		public abstract VehicleEnergyForVehicleSettingsConfig GetVehicleEnergySettingsConfig();
		public void OnVehicleEnergySettingsOpen();
		public void SetCanvasSize(Vector2 size);
		public void ResetCanvasSize();
	}
}
