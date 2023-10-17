/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.Gizmo
{
	public class GizmoRotationButtonHolderNg : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private GizmoRotationButtonNg leftButton;
		[SerializeField]
		private GizmoRotationButtonNg rightButton;
		[SerializeField]
		private GizmoRotationButtonNg flipButton;
	
		// Constructors
		public GizmoRotationButtonHolderNg();
	
		// Methods
		public void Setup(bool canRotate, bool memberRequired);
	}
}
