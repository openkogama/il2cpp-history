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
	public static class DOTweenModulePhysics
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass0_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass0_0();
	
			// Methods
			internal Vector3 _DOMove_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass10_0
		{
			// Fields
			public Transform trans;
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass10_0();
	
			// Methods
			internal Vector3 _DOLocalPath_b__0();
			internal void _DOLocalPath_b__1(Vector3 x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass1_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass1_0();
	
			// Methods
			internal Vector3 _DOMoveX_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal Vector3 _DOMoveY_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass3_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass3_0();
	
			// Methods
			internal Vector3 _DOMoveZ_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass4_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass4_0();
	
			// Methods
			internal Quaternion _DORotate_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass5_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass5_0();
	
			// Methods
			internal Quaternion _DOLookAt_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass6_0
		{
			// Fields
			public Rigidbody target;
			public float startPosY;
			public bool offsetYSet;
			public float offsetY;
			public Sequence s;
			public Vector3 endValue;
			public Tween yTween;
	
			// Constructors
			public __c__DisplayClass6_0();
	
			// Methods
			internal Vector3 _DOJump_b__0();
			internal void _DOJump_b__1();
			internal Vector3 _DOJump_b__2();
			internal Vector3 _DOJump_b__3();
			internal void _DOJump_b__4();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass7_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass7_0();
	
			// Methods
			internal Vector3 _DOPath_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0
		{
			// Fields
			public Transform trans;
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			internal Vector3 _DOLocalPath_b__0();
			internal void _DOLocalPath_b__1(Vector3 x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0
		{
			// Fields
			public Rigidbody target;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			internal Vector3 _DOPath_b__0();
		}
	
		// Extension methods
		public static TweenerCore<Vector3, Vector3, VectorOptions> DOMove(this Rigidbody target, Vector3 endValue, float duration, bool snapping = false);
		public static TweenerCore<Vector3, Vector3, VectorOptions> DOMoveX(this Rigidbody target, float endValue, float duration, bool snapping = false);
		public static TweenerCore<Vector3, Vector3, VectorOptions> DOMoveY(this Rigidbody target, float endValue, float duration, bool snapping = false);
		public static TweenerCore<Vector3, Vector3, VectorOptions> DOMoveZ(this Rigidbody target, float endValue, float duration, bool snapping = false);
		public static TweenerCore<Quaternion, Vector3, QuaternionOptions> DORotate(this Rigidbody target, Vector3 endValue, float duration, RotateMode mode = RotateMode.Fast);
		public static TweenerCore<Quaternion, Vector3, QuaternionOptions> DOLookAt(this Rigidbody target, Vector3 towards, float duration, AxisConstraint axisConstraint = AxisConstraint.None, Vector3? up = default);
		public static Sequence DOJump(this Rigidbody target, Vector3 endValue, float jumpPower, int numJumps, float duration, bool snapping = false);
		public static TweenerCore<Vector3, Path, PathOptions> DOPath(this Rigidbody target, Vector3[] path, float duration, PathType pathType = PathType.Linear, PathMode pathMode = PathMode.Full3D, int resolution = 10, Color? gizmoColor = default);
		public static TweenerCore<Vector3, Path, PathOptions> DOLocalPath(this Rigidbody target, Vector3[] path, float duration, PathType pathType = PathType.Linear, PathMode pathMode = PathMode.Full3D, int resolution = 10, Color? gizmoColor = default);
		internal static TweenerCore<Vector3, Path, PathOptions> DOPath(this Rigidbody target, Path path, float duration, PathMode pathMode = PathMode.Full3D);
		internal static TweenerCore<Vector3, Path, PathOptions> DOLocalPath(this Rigidbody target, Path path, float duration, PathMode pathMode = PathMode.Full3D);
	}
}
