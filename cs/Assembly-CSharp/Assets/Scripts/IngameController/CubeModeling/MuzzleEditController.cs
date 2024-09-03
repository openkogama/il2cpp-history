/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.IngameController.CubeModeling
{
	internal class MuzzleEditController : MonoBehaviour
	{
		// Fields
		private static bool InMuzzleEdit;
		[SerializeField]
		private GameObject resetPositionButton;
		[SerializeField]
		private GameObject resetRotationButton;
	
		// Constructors
		public MuzzleEditController();
	
		// Methods
		private void Awake();
		private void OnDisable();
		public static void EnterMuzzleEdit();
		public static void ExitMuzzleEdit();
	}
}
