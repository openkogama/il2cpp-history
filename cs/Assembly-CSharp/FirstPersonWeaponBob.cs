/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[Serializable]
public class FirstPersonWeaponBob
{
	// Fields
	[SerializeField]
	[Tooltip]
	private float bobFrequency;
	[SerializeField]
	[Tooltip]
	private AnimationCurve bob;
	[SerializeField]
	private Vector3 bobAxis;
	[SerializeField]
	private float bobMultiplier;
	[SerializeField]
	[Tooltip]
	private AnimationCurve rotation;
	[SerializeField]
	private Vector3 rotationAxis;
	[SerializeField]
	private float rotationMultiplier;
	private Transform weapon;
	private Vector3 weaponPosition;
	private Quaternion weaponRotation;

	// Constructors
	public FirstPersonWeaponBob();

	// Methods
	public void Initialize(Transform weapon);
	public void Update();
}

