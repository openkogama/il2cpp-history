/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.VehicleEnergy
{
	public class VehicleEnergyVisuals : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private Transform vehicleEnergyRoot;
		[SerializeField]
		private MVVehicleEnergyObject vehicleEnergyObject;
		[SerializeField]
		private bool particleSystemOn;
		[SerializeField]
		private ParticleSystem particles;
		private RotateLocal rotateLocal;
	
		// Constructors
		public VehicleEnergyVisuals();
	
		// Methods
		private void Awake();
		public void ToggleVisuals(bool val);
		public void Rotate(bool onOff);
	}
}
