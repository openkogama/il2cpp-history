/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;
using WorldObjectTypes.VehicleEnergy;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Framework.Scripts.Shared.VehicleUI
{
	public class VehicleEnergyMeter : VehicleMeterBase
	{
		// Fields
		[SerializeField]
		private ProgressBar progressBar;
		[SerializeField]
		private Image progressBarImage;
		private bool updateEnergy;
		private VehicleEnergyContainer vehicleEnergyContainer;
		private const float BlinkingLimit = 0.15f;
		private const float BlinkingTime = 0.3f;
		private Color originalColor;
		private Color? currentColor;
		private static readonly Color WarningColor;
		private static readonly Color RefillColor;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _BlinkingBar_d__17 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public VehicleEnergyMeter __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _BlinkingBar_d__17(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _StopBlinking_d__14 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public VehicleEnergyMeter __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _StopBlinking_d__14(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public VehicleEnergyMeter();
		static VehicleEnergyMeter();
	
		// Methods
		private void Awake();
		public override void Initialize(bool insideVehicle, MVRigidBody rigidBody);
		public void UpdateEnergy();
		private void OnRefillCallback();
		[IteratorStateMachine(typeof(_StopBlinking_d__14))]
		private IEnumerator StopBlinking();
		private void VisualStuff();
		private void StopBlinkingBar();
		[IteratorStateMachine(typeof(_BlinkingBar_d__17))]
		private IEnumerator BlinkingBar();
	}
}
