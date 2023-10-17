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
	public abstract class VehicleMeterBase : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private RectTransform rectTransform;
	
		// Properties
		public RectTransform RectTransform { get; }
	
		// Constructors
		protected VehicleMeterBase();
	
		// Methods
		public abstract void Initialize(bool insideVehicle, MVRigidBody rigidBody);
	}
}
