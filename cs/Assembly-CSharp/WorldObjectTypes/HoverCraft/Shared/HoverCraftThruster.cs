/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.HoverCraft.Shared
{
	public class HoverCraftThruster : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private ParticleSystem thrusterParticleSystem;
		[SerializeField]
		private GameObject thrusterMesh;
	
		// Constructors
		public HoverCraftThruster();
	
		// Methods
		public void UpdateSize(float thrustersSize);
		public void UpdateColor(Gradient thrustersColor);
		public void ToggleOnOff(bool useThrusters);
		public void Disable();
	}
}
