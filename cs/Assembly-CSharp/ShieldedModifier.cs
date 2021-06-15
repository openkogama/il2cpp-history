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
	private sealed class _MakeVisible_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _currRim___0;
		internal Color _currColor___0;
		internal float _i___1;
		internal float fadeInTime;
		internal float _i___2;
		internal float fadeOutTime;
		internal ShieldedModifier _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _MakeVisible_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public ShieldedModifier();

	// Methods
	public override bool EvaluateShouldBeAdded(Dictionary<AvatarModifierPackageType, AvatarModifier> modifiers);
	protected override void OnActivated(Avatar target);
	protected override void OnDeactivated(Avatar target);
	private void AvatarStateChangedHandler(object state);
	private void OnHealthChange(object floatHealth);
	[DebuggerHidden]
	private IEnumerator MakeVisible(float fadeInTime, float fadeOutTime);
}

