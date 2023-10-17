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
	private float damage;
	private float impulseStrength;
	private float factor;
	private TimeoutMap timeoutMap;
	private AudioSource weaponHitSound;
	public MVTeam alliedTeam;
	private List<AdvancedGhostTriggerBase> ghostTriggers;

	// Properties
	public MVTeam AlliedTeam { get; set; }

	// Constructors
	public AdvancedGhostBodyRotateWeapon();

	// Methods
	public void SetAttackValueFactor(float factor);
	public void Init(AudioSource weaponHitSound, MVCubeModelBase body);
	private void body_Changed(CubeModelChangedEventArgs e);
	private void SetupWeaponCollision();
	private void Update();
	private void Attack(int woid);
}

