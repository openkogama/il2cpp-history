/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Core
{
	public static class Debugger
	{
		// Fields
		private static int _logPriority;
	
		// Properties
		public static int logPriority { get; }
	
		// Nested types
		internal static class Sequence
		{
			// Methods
			public static void LogAddToNullSequence();
			public static void LogAddToInactiveSequence();
			public static void LogAddToLockedSequence();
			public static void LogAddNullTween();
			public static void LogAddInactiveTween(Tween t);
			public static void LogAddAlreadySequencedTween(Tween t);
		}
	
		// Methods
		public static void Log(object message);
		public static void LogWarning(object message, Tween t = null);
		public static void LogError(object message, Tween t = null);
		public static void LogSafeModeCapturedError(object message, Tween t = null);
		public static void LogReport(object message);
		public static void LogSafeModeReport(object message);
		public static void LogInvalidTween(Tween t);
		public static void LogNestedTween(Tween t);
		public static void LogNullTween(Tween t);
		public static void LogMissingMaterialProperty(string propertyName);
		public static void LogMissingMaterialProperty(int propertyId);
		public static void LogRemoveActiveTweenError(string errorInfo, Tween t);
		public static void LogAddActiveTweenError(string errorInfo, Tween t);
		public static void SetLogPriority(LogBehaviour logBehaviour);
		public static bool ShouldLogSafeModeCapturedError();
		private static string GetDebugDataMessage(Tween t);
		private static void AddDebugDataToMessage(ref string message, Tween t);
	}
}
