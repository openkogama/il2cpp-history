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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class DOTweenModulePhysics2D
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass0_0
		{
			// Fields
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass0_0();
	
			// Methods
			internal Vector2 _DOMove_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass1_0
		{
			// Fields
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass1_0();
	
			// Methods
			internal Vector2 _DOMoveX_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0
		{
			// Fields
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal Vector2 _DOMoveY_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass3_0
		{
			// Fields
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass3_0();
	
			// Methods
			internal float _DORotate_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass4_0
		{
			// Fields
			public Rigidbody2D target;
			public float startPosY;
			public bool offsetYSet;
			public float offsetY;
			public Sequence s;
			public Vector2 endValue;
			public Tween yTween;
	
			// Constructors
			public __c__DisplayClass4_0();
	
			// Methods
			internal Vector2 _DOJump_b__0();
			internal void _DOJump_b__1(Vector2 x);
			internal void _DOJump_b__2();
			internal Vector2 _DOJump_b__3();
			internal void _DOJump_b__4(Vector2 x);
			internal void _DOJump_b__5();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass5_0
		{
			// Fields
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass5_0();
	
			// Methods
			internal Vector3 _DOPath_b__0();
			internal void _DOPath_b__1(Vector3 x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass6_0
		{
			// Fields
			public Transform trans;
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass6_0();
	
			// Methods
			internal Vector3 _DOLocalPath_b__0();
			internal void _DOLocalPath_b__1(Vector3 x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass7_0
		{
			// Fields
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass7_0();
	
			// Methods
			internal Vector3 _DOPath_b__0();
			internal void _DOPath_b__1(Vector3 x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0
		{
			// Fields
			public Transform trans;
			public Rigidbody2D target;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			internal Vector3 _DOLocalPath_b__0();
			internal void _DOLocalPath_b__1(Vector3 x);
		}
	
		// Extension methods
		public static TweenerCore<Vector2, Vector2, VectorOptions> DOMove(this Rigidbody2D target, Vector2 endValue, float duration, bool snapping = false);
		public static TweenerCore<Vector2, Vector2, VectorOptions> DOMoveX(this Rigidbody2D target, float endValue, float duration, bool snapping = false);
		public static TweenerCore<Vector2, Vector2, VectorOptions> DOMoveY(this Rigidbody2D target, float endValue, float duration, bool snapping = false);
		public static TweenerCore<float, float, FloatOptions> DORotate(this Rigidbody2D target, float endValue, float duration);
		public static Sequence DOJump(this Rigidbody2D target, Vector2 endValue, float jumpPower, int numJumps, float duration, bool snapping = false);
		public static TweenerCore<Vector3, Path, PathOptions> DOPath(this Rigidbody2D target, Vector2[] path, float duration, PathType pathType = PathType.Linear, PathMode pathMode = PathMode.Full3D, int resolution = 10, Color? gizmoColor = default);
		public static TweenerCore<Vector3, Path, PathOptions> DOLocalPath(this Rigidbody2D target, Vector2[] path, float duration, PathType pathType = PathType.Linear, PathMode pathMode = PathMode.Full3D, int resolution = 10, Color? gizmoColor = default);
		internal static TweenerCore<Vector3, Path, PathOptions> DOPath(this Rigidbody2D target, Path path, float duration, PathMode pathMode = PathMode.Full3D);
		internal static TweenerCore<Vector3, Path, PathOptions> DOLocalPath(this Rigidbody2D target, Path path, float duration, PathMode pathMode = PathMode.Full3D);
	}
}
