/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class GizmoScaleGuide
	{
		// Fields
		private GizmoScaleGuideLookAndFeel _lookAndFeel;
		private GizmoScaleGuideLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public GizmoScaleGuideLookAndFeel LookAndFeel { get; }
		public GizmoScaleGuideLookAndFeel SharedLookAndFeel { get; set; }
	
		// Constructors
		public GizmoScaleGuide();
	
		// Methods
		public void Render(IEnumerable<GameObject> gameObjects, Camera camera);
	}
}
