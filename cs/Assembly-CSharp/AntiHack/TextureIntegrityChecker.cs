/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AntiHack
{
	public class TextureIntegrityChecker : ScriptableObject
	{
		// Fields
		[SerializeField]
		private MaterialPlaneRenderer materialPlaneRenderer;
	
		// Constructors
		public TextureIntegrityChecker();
	
		// Methods
		public void Initialize();
		public bool VerifyTextureIntegrity();
	}
}
