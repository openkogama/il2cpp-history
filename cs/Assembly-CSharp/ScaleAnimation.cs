/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScaleAnimation : ScaleAnimationBase
{
	// Fields
	private float beginTime;
	[SerializeField]
	private AnimationCurve animationCurve;
	private float doneTime;

	// Constructors
	public ScaleAnimation();

	// Methods
	public override void Play(float offsetTime = 0f);
	private void Stopped(float extraTime);
	private void Awake();
	private void Update();
}

