/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public static class SnapMath
	{
		// Methods
		public static NumSnapSteps CalculateNumSnapSteps(float snapStep, float total);
		public static bool CanExtractSnap(float snapStep, float accumulated);
		public static float ExtractSnap(float snapStep, ref float accumulated);
		public static float ExtractSnap(float snapStep, float accumulated);
	}
}
