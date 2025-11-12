/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening
{
	public static class DOTweenModuleUnityVersion
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0
		{
			// Fields
			public Material target;
			public int propertyID;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			internal Vector2 _DOOffset_b__0();
			internal void _DOOffset_b__1(Vector2 x);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0
		{
			// Fields
			public Material target;
			public int propertyID;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			internal Vector2 _DOTiling_b__0();
			internal void _DOTiling_b__1(Vector2 x);
		}
	
		[CompilerGenerated]
		private struct _AsyncWaitForCompletion_d__10 : IAsyncStateMachine
		{
			// Fields
			public int __1__state;
			public AsyncTaskMethodBuilder __t__builder;
			public Tween t;
			private YieldAwaitable.YieldAwaiter __u__1;
	
			// Methods
			private void MoveNext();
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine);
		}
	
		[CompilerGenerated]
		private struct _AsyncWaitForElapsedLoops_d__13 : IAsyncStateMachine
		{
			// Fields
			public int __1__state;
			public AsyncTaskMethodBuilder __t__builder;
			public Tween t;
			public int elapsedLoops;
			private YieldAwaitable.YieldAwaiter __u__1;
	
			// Methods
			private void MoveNext();
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine);
		}
	
		[CompilerGenerated]
		private struct _AsyncWaitForKill_d__12 : IAsyncStateMachine
		{
			// Fields
			public int __1__state;
			public AsyncTaskMethodBuilder __t__builder;
			public Tween t;
			private YieldAwaitable.YieldAwaiter __u__1;
	
			// Methods
			private void MoveNext();
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine);
		}
	
		[CompilerGenerated]
		private struct _AsyncWaitForPosition_d__14 : IAsyncStateMachine
		{
			// Fields
			public int __1__state;
			public AsyncTaskMethodBuilder __t__builder;
			public Tween t;
			public float position;
			private YieldAwaitable.YieldAwaiter __u__1;
	
			// Methods
			private void MoveNext();
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine);
		}
	
		[CompilerGenerated]
		private struct _AsyncWaitForRewind_d__11 : IAsyncStateMachine
		{
			// Fields
			public int __1__state;
			public AsyncTaskMethodBuilder __t__builder;
			public Tween t;
			private YieldAwaitable.YieldAwaiter __u__1;
	
			// Methods
			private void MoveNext();
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine);
		}
	
		[CompilerGenerated]
		private struct _AsyncWaitForStart_d__15 : IAsyncStateMachine
		{
			// Fields
			public int __1__state;
			public AsyncTaskMethodBuilder __t__builder;
			public Tween t;
			private YieldAwaitable.YieldAwaiter __u__1;
	
			// Methods
			private void MoveNext();
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine);
		}
	
		// Extension methods
		public static Sequence DOGradientColor(this Material target, Gradient gradient, float duration);
		public static Sequence DOGradientColor(this Material target, Gradient gradient, string property, float duration);
		public static CustomYieldInstruction WaitForCompletion(this Tween t, bool returnCustomYieldInstruction);
		public static CustomYieldInstruction WaitForRewind(this Tween t, bool returnCustomYieldInstruction);
		public static CustomYieldInstruction WaitForKill(this Tween t, bool returnCustomYieldInstruction);
		public static CustomYieldInstruction WaitForElapsedLoops(this Tween t, int elapsedLoops, bool returnCustomYieldInstruction);
		public static CustomYieldInstruction WaitForPosition(this Tween t, float position, bool returnCustomYieldInstruction);
		public static CustomYieldInstruction WaitForStart(this Tween t, bool returnCustomYieldInstruction);
		public static TweenerCore<Vector2, Vector2, VectorOptions> DOOffset(this Material target, Vector2 endValue, int propertyID, float duration);
		public static TweenerCore<Vector2, Vector2, VectorOptions> DOTiling(this Material target, Vector2 endValue, int propertyID, float duration);
		public static async Task AsyncWaitForCompletion(this Tween t);
		public static async Task AsyncWaitForRewind(this Tween t);
		public static async Task AsyncWaitForKill(this Tween t);
		public static async Task AsyncWaitForElapsedLoops(this Tween t, int elapsedLoops);
		public static async Task AsyncWaitForPosition(this Tween t, float position);
		public static async Task AsyncWaitForStart(this Tween t);
	}
}
