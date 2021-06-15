/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MoveAnimation : MoveAnimationBase
{
	// Fields
	private float beginTime;
	private float doneTime;
	private Vector3 direction;
	[SerializeField]
	private List<KeyFrameCallback> keyFrameCallbacks;
	[SerializeField]
	private AnimationCurve animationCurve;
	[SerializeField]
	private Transform moveTo;
	[CompilerGenerated]
	private static Comparison<KeyFrameCallback> __f__am_cache0;

	// Constructors
	public MoveAnimation();

	// Methods
	public override void Play(float offsetTime = 0f);
	private void Stopped(float extraTime);
	private void Awake();
	private void Update();
	public void SubscribeToKeyFrame(string keyFrameName, Action callback);
	private void EvaluateKeyFrameCallbacks(float timePassedSincePlay);
	[CompilerGenerated]
	private static int _Awake_m__0(KeyFrameCallback a, KeyFrameCallback b);
}

