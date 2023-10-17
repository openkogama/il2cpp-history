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

public class LethalModifier : AvatarModifier
{
	// Fields
	public ParticleSystem lethalParticles;
	private bool isDeactivating;

	// Properties
	public override AvatarModifierPackageType ModifierType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoFadeAndDestroy_d__7 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LethalModifier __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoFadeAndDestroy_d__7(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LethalModifier();

	// Methods
	protected override void OnActivated(Avatar target);
	protected override void OnDeactivated(Avatar target);
	private void OnDisable();
	[IteratorStateMachine(typeof(_DoFadeAndDestroy_d__7))]
	private IEnumerator DoFadeAndDestroy();
	private void Destroy();
}

