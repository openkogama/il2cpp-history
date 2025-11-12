/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class TweenExtensions
	{
		// Methods
		private static void DoGoto(Tween t, float to, bool andPlay, bool withCallbacks);
	
		// Extension methods
		public static void Complete(this Tween t);
		public static void Complete(this Tween t, bool withCallbacks);
		public static void Goto(this Tween t, float to, bool andPlay = false);
		public static void Kill(this Tween t, bool complete = false);
		public static void PlayBackwards(this Tween t);
		public static void Rewind(this Tween t, bool includeDelay = true);
		public static int CompletedLoops(this Tween t);
		public static float Duration(this Tween t, bool includeLoops = true);
		public static float ElapsedPercentage(this Tween t, bool includeLoops = true);
		public static float ElapsedDirectionalPercentage(this Tween t);
		public static bool IsComplete(this Tween t);
	}
}
