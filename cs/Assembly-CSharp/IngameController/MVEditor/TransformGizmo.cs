/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace IngameController.MVEditor
{
	public class TransformGizmo : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private LineRenderer lineRendererX;
		[SerializeField]
		private LineRenderer lineRendererY;
		[SerializeField]
		private LineRenderer lineRendererZ;
	
		// Constructors
		public TransformGizmo();
	
		// Methods
		public void Activate();
		public void Deactivate();
	}
}
