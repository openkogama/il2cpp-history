/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent(typeof(CanvasRenderer))]
public class RoundedRectangle : Image
{
	// Fields
	public float radius;

	// Nested types
	[CompilerGenerated]
	private sealed class _GetMaterialFromPrefabPool_d__2 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public RoundedRectangle __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GetMaterialFromPrefabPool_d__2(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public RoundedRectangle();

	// Methods
	protected override void Start();
	[IteratorStateMachine(typeof(_GetMaterialFromPrefabPool_d__2))]
	private IEnumerator GetMaterialFromPrefabPool();
	protected override void OnPopulateMesh(VertexHelper vh);
	protected override void OnDestroy();
}

