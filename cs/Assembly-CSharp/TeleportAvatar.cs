/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeleportAvatar : MonoBehaviour
{
	// Fields
	public float teleportTime;
	public Vector3 targetPosition;
	public Vector3 originPosition;
	public MVAvatarLocal avatar;
	[CompilerGenerated]
	private int _TeleporterOrigin_k__BackingField;
	[CompilerGenerated]
	private int _TeleporterDestination_k__BackingField;
	private bool shouldCancelTeleportation;

	// Properties
	public int TeleporterOrigin { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int TeleporterDestination { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	private delegate void ActionDelegate(float time);

	[CompilerGenerated]
	private sealed class _DoForSeconds_d__14 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public ActionDelegate body;
		public float duration;
		private float _t_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoForSeconds_d__14(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _Start_d__16 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public TeleportAvatar __4__this;
		private MVRigidBody _rigidBody_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Start_d__16(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public TeleportAvatar();

	// Methods
	[IteratorStateMachine(typeof(_DoForSeconds_d__14))]
	private IEnumerator DoForSeconds(float duration, ActionDelegate body);
	private float BlockStep(float t, float steps);
	[IteratorStateMachine(typeof(_Start_d__16))]
	private IEnumerator Start();
	private void CancelTeleportation();
	private void OnAvatarStateChanged(SpawnRoleModeType mode);
	private void EndTeleportation(MVRigidBody rigidBody);
	[CompilerGenerated]
	private void _Start_b__16_0(float t);
	[CompilerGenerated]
	private void _Start_b__16_1(float t);
}

