/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Rendering.PostProcessing;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Camera
{
	[IsReadOnly]
	public struct PostProcessingDepthOfFieldSettings
	{
		// Fields
		public readonly bool depthOfField;
		public readonly int focusDistance;
		public readonly int aperture;
		public readonly int focalLength;
		public readonly int maxBlurSize;
	
		// Constructors
		public PostProcessingDepthOfFieldSettings(Dictionary<object, object> data);
	
		// Methods
		public KernelSize KernelSize();
	}
}
