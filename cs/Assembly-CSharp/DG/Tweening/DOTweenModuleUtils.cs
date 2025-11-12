/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using UnityEngine;
using UnityEngine.Scripting;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class DOTweenModuleUtils
	{
		// Fields
		private static bool _initialized;
	
		// Nested types
		public static class Physics
		{
			// Methods
			public static void SetOrientationOnPath(PathOptions options, Tween t, Quaternion newRot, Transform trans);
			public static bool HasRigidbody2D(Component target);
			[Preserve]
			public static bool HasRigidbody(Component target);
			[Preserve]
			public static TweenerCore<Vector3, Path, PathOptions> CreateDOTweenPathTween(MonoBehaviour target, bool tweenRigidbody, bool isLocal, Path path, float duration, PathMode pathMode);
		}
	
		// Methods
		[Preserve]
		public static void Init();
		[Preserve]
		private static void Preserver();
	}
}
