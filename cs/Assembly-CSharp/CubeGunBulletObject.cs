/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CubeGunBulletObject : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Bullet bullet;
	[SerializeField]
	private CubeBullet cubeBullet;
	[SerializeField]
	private AudioSource audioSource;
	private byte materialID;

	// Properties
	public Bullet Bullet { get; }
	public CubeBullet CubeBullet { get; }

	// Constructors
	public CubeGunBulletObject();

	// Methods
	public static CubeGunBulletObject Create(MVPickupOwner owner, Vector3 origin, byte materialID);
	private void HandleCubeHitLocal(VoxelHit voxelHit, Ray lineOfFire);
	private void HandleCubeHit(VoxelHit voxelHit, Ray lineOfFire);
}

