/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.Gizmo
{
	public class RotationHelper
	{
		// Fields
		private readonly EditorStateMachine editorStateMachine;
	
		// Constructors
		public RotationHelper(EditorStateMachine editorStateMachine);
	
		// Methods
		public void ResetRotation();
		public void RotateStep(RotationMode rotationMode, float rotationSpeed);
		private bool IsRotationInvalid();
		private static Vector3 GetPivot(List<WorldObjectClientRef> targets, List<Transform> targetTransforms);
		public static void DoGridSnapping(List<WorldObjectClientRef> targets);
		public static bool ValidateTargets(List<WorldObjectClientRef> targets);
	}
}
