/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LocalPositionAnimation : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Vector3 deltaMovement;
	[Range(0.001f, 10f)]
	[SerializeField]
	private float animationTime;
	private Vector3 startPos;
	private Vector3 endPos;
	private float animatedTime;

	// Constructors
	public LocalPositionAnimation();

	// Methods
	private void Awake();
	private void Update();
}

