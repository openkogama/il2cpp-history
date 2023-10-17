/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MeleeWeaponAnimationEventHandler : MonoBehaviour
{
	// Fields
	public PickupItemMeleeWeapon meleeWeaponItem;
	public Transform target;
	public TrailArc trailArcPrefab;
	private TrailArc arcInstance;

	// Constructors
	public MeleeWeaponAnimationEventHandler();

	// Methods
	public void MeleeWeaponArcEnd();
	private void MeleeWeaponArcStart();
	private void OnDisable();
}

