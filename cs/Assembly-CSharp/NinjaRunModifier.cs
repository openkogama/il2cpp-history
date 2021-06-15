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
	private sealed class _DoFadeAndDestroy_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal NinjaRunModifier _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoFadeAndDestroy_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public NinjaRunModifier();

	// Methods
	private void Awake();
	protected override void OnActivated(Avatar target);
	protected override void OnDeactivated(Avatar target);
	private void OnDisable();
	[DebuggerHidden]
	private IEnumerator DoFadeAndDestroy();
	private void Update();
}

