/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RailRay : MonoBehaviour
{
	// Fields
	public Vector3 target;
	public float radius;
	public Color startColor;
	public AnimationCurve implosionFade;
	[SerializeField]
	private LineRenderer rayRenderer;
	[SerializeField]
	private ParticleSystem particles;
	[SerializeField]
	private PoolEnums railEnumType;
	private Vector3 origin;
	private Vector3 hit;
	private Color endColor;
	private float time;
	private float elapsed;

	// Properties
	public LineRenderer RayRenderer { get; }
	public ParticleSystem Particles { get; set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoShowRay_d__20 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public RailRay __4__this;
		public Vector3 hit;
		private Color _endColor_5__2;
		private float _time_5__3;
		private float _t_5__4;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoShowRay_d__20(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public RailRay();

	// Methods
	private void Awake();
	public void Reset();
	private void Update();
	[IteratorStateMachine(typeof(_DoShowRay_d__20))]
	private IEnumerator DoShowRay(Vector3 hit);
}

