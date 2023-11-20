/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScaleAnimationBase : MonoBehaviour
{
	// Fields
	protected State state;
	protected Vector3 originalScale;
	[SerializeField]
	protected Transform target;
	[SerializeField]
	private State testState;
	public OnScaleAnimationStoppedDelegate OnScaleAnimationStopped;

	// Properties
	public Vector3 OriginalScale { get; }

	// Nested types
	public delegate void OnScaleAnimationStoppedDelegate(float extraTime);

	protected enum State
	{
		None = 0,
		Stopped = 1,
		Playing = 2
	}

	// Constructors
	public ScaleAnimationBase();

	// Methods
	public void ResetScaleAnimation();
	public virtual void Stop();
	protected void Test();
	public virtual void Play(float offsetTime = 0f);
	public void SetTarget(Transform target);
	public bool IsPlaying();
}

