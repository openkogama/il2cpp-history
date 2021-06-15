/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _DoShowRay_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal Color _endColor___0;
		internal Vector3 _origin___0;
		internal Vector3 hit;
		internal float _time___0;
		internal float _t___0;
		internal RailRay _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoShowRay_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public RailRay();

	// Methods
	private void Awake();
	public void Reset();
	private void Update();
	[DebuggerHidden]
	private IEnumerator DoShowRay(Vector3 hit);
}

