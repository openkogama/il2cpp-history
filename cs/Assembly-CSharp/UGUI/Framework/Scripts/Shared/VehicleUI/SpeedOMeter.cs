/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Framework.Scripts.Shared.VehicleUI
{
	public class SpeedOMeter : VehicleMeterBase
	{
		// Fields
		public float fadeTime;
		[SerializeField]
		private CanvasGroup speedGroup;
		[SerializeField]
		private UnityEngine.UI.Text speedText;
		[SerializeField]
		private UnityEngine.UI.Text unitText;
		[SerializeField]
		private UnityEngine.UI.Text labelText;
		[SerializeField]
		private bool alwaysShow;
		public Action<bool, float> OnShowHide;
		private float curSpeed;
		private float currFade;
		private bool prevFading;
		private bool fading;
		private bool noHiding;
		private MVRigidBody rigidBody;
		private bool updateSpeed;
	
		// Properties
		public bool IsVisible { get; }
	
		// Constructors
		public SpeedOMeter();
	
		// Methods
		private void Awake();
		public override void Initialize(bool insideVehicle, MVRigidBody mvRigidBody);
		private void Fade();
		private void Show();
		public void UpdateSpeed();
	}
}
