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

public class NinjaRunModifier : AvatarModifier
{
	// Fields
	public TrailRenderer trailRenderer;
	[SerializeField]
	private float startWidth;
	[SerializeField]
	private float endWidth;
	[SerializeField]
	private float trailHeight;
	[SerializeField]
	private AudioSource soundEffect;
	private Vector3 oldPosition;
	private Vector3 oldScale;
	private float initialVolume;
	private bool isDestroying;
	private Transform ownerTransform;
	private const float minRemoteSpeed = 0.1f;

	// Properties
	public override AvatarModifierPackageType ModifierType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoFadeAndDestroy_d__17 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public NinjaRunModifier __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoFadeAndDestroy_d__17(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public NinjaRunModifier();

	// Methods
	private void Awake();
	protected override void OnActivated(Avatar target);
	protected override void OnDeactivated(Avatar target);
	private void OnDisable();
	[IteratorStateMachine(typeof(_DoFadeAndDestroy_d__17))]
	private IEnumerator DoFadeAndDestroy();
	private void Update();
}

