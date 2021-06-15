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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeleportAvatar : MonoBehaviour
{
	// Fields
	public float teleportTime;
	public Vector3 targetPosition;
	public Vector3 originPosition;
	public MVAvatarLocal avatar;
	private bool shouldCancelTeleportation;

	// Nested types
	private delegate void ActionDelegate(float time);

	[CompilerGenerated]
	private sealed class _DoForSeconds_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _t___0;
		internal float duration;
		internal ActionDelegate body;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoForSeconds_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _Start_c__Iterator1 : IEnumerator<object>
	{
		// Fields
		internal MVRigidBody _rigidBody___0;
		internal TeleportAvatar _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Start_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
		internal void __m__0(float t);
		internal void __m__1(float t);
	}

	// Constructors
	public TeleportAvatar();

	// Methods
	[DebuggerHidden]
	private IEnumerator DoForSeconds(float duration, ActionDelegate body);
	private float BlockStep(float t, float steps);
	[DebuggerHidden]
	private IEnumerator Start();
	private void CancelTeleportation();
	private void OnAvatarStateChanged(SpawnRoleModeType mode);
	private void EndTeleportation(MVRigidBody rigidBody);
}

