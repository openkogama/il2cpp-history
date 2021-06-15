/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarBlinker : BlinkerBase
{
	// Fields
	public Color blinkDamageColor;
	public Color blinkHealthBoostColor;
	public Color blinkPoisonColor;
	public Color blinkFrozenColor;
	public Color blinkHealingColor;
	public Color blinkShieldColor;
	public Color blinkLethalColor;
	private float previousBlinkHealth;
	private float previousBlinkShield;

	// Constructors
	public AvatarBlinker();

	// Methods
	private new void Awake();
	public void EnableBlinking();
	public void DisableBlinking();
	public void HealthChangeHandler(object v);
	public void UpdateBlinking();
	public override void LateUpdate();
	public void ShieldChangeHandler(object v);
	private void HandleDamageBlinking(float previousValue, float currentValue, BlinkType blinkType);
	public void SetPreviousHealth(float health);
	public void SetPreviousShield(float shield);
}

