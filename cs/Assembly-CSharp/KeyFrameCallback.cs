/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class KeyFrameCallback : MonoBehaviour
{
	// Fields
	[SerializeField]
	private string keyFrameName;
	[SerializeField]
	private int keyFrameIndex;
	public Action callbacks;
	private bool fired;

	// Properties
	public string KeyFrameName { get; }
	public int KeyFrameIndex { get; }

	// Constructors
	public KeyFrameCallback();

	// Methods
	public void Reset();
	public bool Evaluate(float timePassedSincePlay, AnimationCurve animationCurve);
	public override string ToString();
}

