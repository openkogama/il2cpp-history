/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.Avatar.Shared
{
	public class AvatarPaused : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private ParticleSystem avatarParticleSystem;
		private int ownerActorNr;
		private bool delayedPlay;
	
		// Constructors
		public AvatarPaused();
	
		// Methods
		public void Init(int ownerActorNr);
		private void OnPause();
		private void OnResume();
		private void OnDestroy();
		private void Update();
	}
}
