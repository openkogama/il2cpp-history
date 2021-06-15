/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarPooledXPParticles : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ParticleSystem xpParticleSystem;
	private bool hasStarted;
	private float initStartTime;
	private const float waitBeforeStartDuration = 1.2f;
	private const float particleMultipier = 1f;

	// Constructors
	public AvatarPooledXPParticles();

	// Methods
	private void Update();
	public void Initialize(int xpDelta);
}

