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
	private sealed class _Fader_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _counter___0;
		internal float _startFade___0;
		internal float minEndPoint;
		internal float maxEndPoint;
		internal float _fadeToNum___0;
		internal AudioOnOffComponent _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Fader_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public AudioOnOffComponent();

	// Methods
	private void Awake();
	private void Start();
	[DebuggerHidden]
	private IEnumerator Fader(float minEndPoint, float maxEndPoint);
	public virtual void TurnOn();
	public virtual void TurnOff();
	protected void PlayClip(AudioSource aS, AudioClip aC, bool loop, float minPitch, float maxPitch, float minVol, float maxVol);
}

