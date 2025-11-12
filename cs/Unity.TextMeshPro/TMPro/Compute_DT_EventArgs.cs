/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public class Compute_DT_EventArgs
	{
		// Fields
		public Compute_DistanceTransform_EventTypes EventType;
		public float ProgressPercentage;
		public Color[] Colors;
	
		// Constructors
		public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, float progress);
		public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, Color[] colors);
	}
}
