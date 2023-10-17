/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MoveAnimationBase : MonoBehaviour
{
	// Fields
	protected State state;
	[SerializeField]
	protected Transform target;
	protected Vector3 originalLocalPos;
	public OnMoveAnimationStoppedDelegate OnMoveAnimationStopped;
	[SerializeField]
	private State testState;

	// Nested types
	public delegate void OnMoveAnimationStoppedDelegate(float extraTime);

	protected enum State
	{
		None = 0,
		Stopped = 1,
		Playing = 2
	}

	// Constructors
	public MoveAnimationBase();

	// Methods
	public virtual void Play(float offsetTime = 0f);
	protected void Test();
	public void SetTarget(Transform target);
}

