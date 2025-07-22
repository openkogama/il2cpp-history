/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;
using WorldObjectTypes.VehicleEnergy;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Framework.Scripts.Shared.VehicleUI
{
	public class VehicleEnergyMeterText : VehicleMeterBase
	{
		// Fields
		private const int BlinkingLimit = 19;
		private const int BlinkHeight = 4;
		private static readonly Color WarningColor;
		[SerializeField]
		private UnityEngine.UI.Text energyText;
		private bool isVisible;
		private VehicleEnergyContainer vehicleEnergyContainer;
		private int currentEnergyStatus;
		private int lastBlink;
		private Color originalColor;
		private Vector3 originalTextPos;
	
		// Properties
		public bool IsVisible { get; }
	
		// Constructors
		public VehicleEnergyMeterText();
		static VehicleEnergyMeterText();
	
		// Methods
		private void Awake();
		public override void Initialize(bool insideVehicle, MVRigidBody rigidBody);
		public void UpdateEnergy();
		private void OnRefillCallback();
		private void VisualStuff();
	}
}
