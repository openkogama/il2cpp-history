/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdvancedGhostBodyRotateWeapon : MonoBehaviour
{
	// Fields
	private const float Damage = 55f;
	private const float ImpulseStrength = 2500f;
	private float factor;
	private readonly TimeoutMap timeoutMap;
	private AudioSource weaponHitSound;
	public MVTeam alliedTeam;
	private readonly List<AdvancedGhostTriggerBase> ghostTriggers;

	// Properties
	public MVTeam AlliedTeam { get; set; }

	// Constructors
	public AdvancedGhostBodyRotateWeapon();

	// Methods
	public void SetAttackValueFactor(float attackFactor);
	public void Init(AudioSource hitSound, MVCubeModelBase body);
	private void body_Changed(CubeModelChangedEventArgs e);
	private void SetupWeaponCollision();
	private void Update();
	private void Attack(int woid);
}

