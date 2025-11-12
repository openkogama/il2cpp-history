/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening;
using DG.Tweening.Plugins.Options;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Core
{
	public static class DOTweenExternalCommand
	{
		// Fields
		[CompilerGenerated]
		private static Action<PathOptions, Tween, Quaternion, Transform> SetOrientationOnPath;
	
		// Events
		public static event Action<PathOptions, Tween, Quaternion, Transform> SetOrientationOnPath {
			add;
			remove;
		}
	
		// Methods
		internal static void Dispatch_SetOrientationOnPath(PathOptions options, Tween t, Quaternion newRot, Transform trans);
	}
}
