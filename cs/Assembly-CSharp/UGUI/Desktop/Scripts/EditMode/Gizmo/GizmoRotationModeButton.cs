/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gamestrap;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.Gizmo
{
	public class GizmoRotationModeButton : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private UnityEngine.UI.Text text;
		private Color originalTextColor;
		private readonly Color selectedTextColor;
		private UnityEngine.UI.Button button;
		private GradientEffect gradient;
		private ColorBlock originalColorBlock;
		private ColorBlock selectedColorBlock;
	
		// Constructors
		public GizmoRotationModeButton();
	
		// Methods
		private void Awake();
		public void ResetColors();
		public void Highlight();
	}
}
