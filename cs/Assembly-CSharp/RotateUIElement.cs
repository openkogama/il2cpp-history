/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RotateUIElement : MonoBehaviour
{
	// Fields
	public float rotationSpeed;
	[SerializeField]
	private bool repeatRotationFromAngle;
	[SerializeField]
	private float resetRotationAtAngle;
	[SerializeField]
	private float repeatRotationTimeOffset;
	private Quaternion originalRotation;
	private float resettingTimestamp;
	private float lastRotationUpdate;

	// Constructors
	public RotateUIElement();

	// Methods
	private void Awake();
	private void Update();
}

