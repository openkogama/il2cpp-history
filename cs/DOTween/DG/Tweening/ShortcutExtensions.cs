/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class ShortcutExtensions
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass16_0
		{
			// Fields
			public Material target;
	
			// Constructors
			public __c__DisplayClass16_0();
	
			// Methods
			internal Color _DOColor_b__0();
			internal void _DOColor_b__1(Color x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass17_0
		{
			// Fields
			public Material target;
			public string property;
	
			// Constructors
			public __c__DisplayClass17_0();
	
			// Methods
			internal Color _DOColor_b__0();
			internal void _DOColor_b__1(Color x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass65_0
		{
			// Fields
			public Transform target;
	
			// Constructors
			public __c__DisplayClass65_0();
	
			// Methods
			internal Vector3 _DOPath_b__0();
			internal void _DOPath_b__1(Vector3 x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass66_0
		{
			// Fields
			public Transform target;
	
			// Constructors
			public __c__DisplayClass66_0();
	
			// Methods
			internal Vector3 _DOLocalPath_b__0();
			internal void _DOLocalPath_b__1(Vector3 x);
		}
	
		// Extension methods
		public static TweenerCore<Color, Color, ColorOptions> DOColor(this Material target, Color endValue, float duration);
		public static TweenerCore<Color, Color, ColorOptions> DOColor(this Material target, Color endValue, string property, float duration);
		public static TweenerCore<Vector3, Path, PathOptions> DOPath(this Transform target, Path path, float duration, PathMode pathMode = PathMode.Full3D);
		public static TweenerCore<Vector3, Path, PathOptions> DOLocalPath(this Transform target, Path path, float duration, PathMode pathMode = PathMode.Full3D);
	}
}
