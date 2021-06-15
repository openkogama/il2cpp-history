/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScaleAnimations : ScaleAnimationBase
{
	// Fields
	[SerializeField]
	private List<ScaleAnimationBase> scaleAnimations;
	public OnScaleAnimationStoppedDelegate OnIntermediateScaleAnimationStopped;
	private int index;

	// Constructors
	public ScaleAnimations();

	// Methods
	private void Awake();
	private void OnScaleAnimationDone(float extraTime);
	public override void Play(float offsetTime = 0f);
	private void Update();
}

