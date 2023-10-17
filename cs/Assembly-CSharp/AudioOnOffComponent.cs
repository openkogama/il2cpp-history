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

public class AudioOnOffComponent : MonoBehaviour
{
	// Fields
	public GameObject audioSourcePrefab;
	public bool loop;
	public StartLoop startLoop;
	public AudioClip onClip;
	public float onMinPitch;
	public float onMaxPitch;
	public float onMinVol;
	public float onMaxVol;
	public float fadeSpeed;
	private float fadeNum;
	protected AudioSource onOffAudioSource;

	// Nested types
	[CompilerGenerated]
	private sealed class _Fader_d__13 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AudioOnOffComponent __4__this;
		public float minEndPoint;
		public float maxEndPoint;
		private float _counter_5__2;
		private float _startFade_5__3;
		private float _fadeToNum_5__4;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Fader_d__13(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public AudioOnOffComponent();

	// Methods
	private void Awake();
	private void Start();
	[IteratorStateMachine(typeof(_Fader_d__13))]
	private IEnumerator Fader(float minEndPoint, float maxEndPoint);
	public virtual void TurnOn();
	public virtual void TurnOff();
	protected void PlayClip(AudioSource aS, AudioClip aC, bool loop, float minPitch, float maxPitch, float minVol, float maxVol);
}

