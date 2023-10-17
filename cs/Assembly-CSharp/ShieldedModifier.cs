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

public class ShieldedModifier : AvatarModifier
{
	// Fields
	[SerializeField]
	private MeshRenderer shieldRenderer;
	[SerializeField]
	private float targetRimVisibility;
	[SerializeField]
	private float targetAlpha;
	[SerializeField]
	private RotatingShieldLine lineRenderer;
	private Material shieldMat;
	private bool readyToPlayEffect;
	private float prevHealth;

	// Properties
	public override AvatarModifierPackageType ModifierType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _MakeVisible_d__14 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public ShieldedModifier __4__this;
		public float fadeInTime;
		public float fadeOutTime;
		private float _currRim_5__2;
		private Color _currColor_5__3;
		private float _i_5__4;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _MakeVisible_d__14(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public ShieldedModifier();

	// Methods
	public override bool EvaluateShouldBeAdded(Dictionary<AvatarModifierPackageType, AvatarModifier> modifiers);
	protected override void OnActivated(Avatar target);
	protected override void OnDeactivated(Avatar target);
	private void AvatarStateChangedHandler(object state);
	private void OnHealthChange(object floatHealth);
	[IteratorStateMachine(typeof(_MakeVisible_d__14))]
	private IEnumerator MakeVisible(float fadeInTime, float fadeOutTime);
}

