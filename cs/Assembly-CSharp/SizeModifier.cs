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

public abstract class SizeModifier : AvatarModifier
{
	// Fields
	[SerializeField]
	protected float timeToSize;
	[SerializeField]
	protected float sizeModifier;
	[SerializeField]
	protected float sizeUnstableAfterSeconds;
	[SerializeField]
	protected float unstableSpeed;
	[SerializeField]
	protected float sineStrength;
	[SerializeField]
	protected AudioSource audioSource;
	protected Vector3 defaultScale;
	protected bool isDeactivating;
	public AudioClip growSound;
	public AudioClip shrinkSound;

	// Nested types
	protected delegate void ActionDelegate(float time);

	[CompilerGenerated]
	private sealed class _DoForSeconds_d__17 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public SizeModifier __4__this;
		public ActionDelegate body;
		public float duration;
		private float _t_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoForSeconds_d__17(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	protected SizeModifier();

	// Methods
	protected override void OnActivated(Avatar target);
	public override void ResetTimeStamp();
	protected override void OnDeactivated(Avatar target);
	protected virtual void UnScale();
	protected virtual void Scale();
	protected float BlockStep(float t, float steps, float clampMin, float clampMax);
	[IteratorStateMachine(typeof(_DoForSeconds_d__17))]
	protected IEnumerator DoForSeconds(float duration, ActionDelegate body);
	protected void Unstablize();
}

