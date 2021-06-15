/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PendingFriendRequestAnimation : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform maskTransform;
	[SerializeField]
	private RectTransform friendRequestImageTransform;
	[SerializeField]
	private float moveAmount;
	[SerializeField]
	private float dotAnimationCooldown;
	[SerializeField]
	private int dotAmount;
	private float lastDotAnimationTime;
	private int currentDot;

	// Constructors
	public PendingFriendRequestAnimation();

	// Methods
	private void Update();
	private void MoveAnimation(float amount);
}

