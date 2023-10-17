/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.VehicleEnergy
{
	public class VehicleEnergyContainer : MonoBehaviour
	{
		// Fields
		[CompilerGenerated]
		private bool _UsingEnergy_k__BackingField;
		private bool consumingEnergy;
		private float originalEnergyStorage;
		private float energyStorage;
		private float consumption;
		private readonly Dictionary<int, VehicleEnergyRefillPrediction> predictions;
		private int counter;
		public Action OnRefill;
	
		// Properties
		public bool UsingEnergy { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public bool IsConsumingEnergy { get; }
		public bool OutOfEnergy { get; }
		public float EnergyStatus { get; }
	
		// Constructors
		public VehicleEnergyContainer();
	
		// Methods
		public void Consume();
		public void Init(VehicleEnergyContainerConfig config);
		public void ConsumesEnergy(bool consuming);
		public void RefillEnergy(VehicleEnergyRefill vehicleEnergyRefill);
		private void ConfirmPrediction(VehicleEnergyRefill vehicleEnergyRefill);
		private void FixedUpdate();
		public void RollbackPrediction(int spawnerId);
		private void DoRollback(int key, VehicleEnergyRefill vehicleEnergyRefill);
		private void RollbackPrediction(VehicleEnergyRefill existingRefill);
		private void DoPrediction(VehicleEnergyRefill vehicleEnergyRefill);
		private void DoRefillEnergy(VehicleEnergyRefill vehicleEnergyRefill);
	}
}
