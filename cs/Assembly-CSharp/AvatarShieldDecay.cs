/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarShieldDecay : MonoBehaviour
{
	// Fields
	private float decayTime;
	private const float decayCooldown = 1f;
	private MVRuntimeDataVariableClampedFloat shield;
	private const float decayAmount = 15f;
	private float accumulatedShieldDecay;
	private float updateValueTime;
	private const float updateValueCooldown = 0.5f;

	// Constructors
	public AvatarShieldDecay();

	// Methods
	public void Init(MVRuntimeDataVariableClampedFloat shield);
	private void Update();
	public void ResetDecayTimer();
}

