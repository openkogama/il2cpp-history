/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Framework.Scripts.Shared.VehicleUI
{
	public class VehicleUIController : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private RectTransform rectTransform;
		[SerializeField]
		private SpeedOMeter speedOMeter;
		[SerializeField]
		private VehicleEnergyMeterText vehicleEnergyMeter;
		private bool insideVehicle;
		private MVRigidBody rigidBody;
		private bool hasRigidBody;
	
		// Constructors
		public VehicleUIController();
	
		// Methods
		private void Awake();
		private void OnSpawnRoleModeChange(int i);
		private void Start();
		private void UpdateRigidBody();
		private void OnIsInVehicleChange(bool value);
		private void OnSpeedOMeterShowHide(bool visible, float alpha);
		private void UpdateUI();
		private void UpdateVisibility();
		private void FixedUpdate();
	}
}
