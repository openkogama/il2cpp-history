/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarAccessoryParticles : AvatarAccessory
{
	// Fields
	private Vector3 prevPosition;
	private AccessoryParticlesSettings accessoryParticlesSettings;
	private ParticleSystem rootParticleSystem;

	// Properties
	public AccessoryParticlesSettings AccessoryParticlesSettings { get; }
	public ParticleSystem RootParticleSystem { get; }
	public override AccessorySettings AccessorySettings { get; }

	// Constructors
	public AvatarAccessoryParticles();

	// Methods
	public override Bounds GetWorldBounds();
	public override Bounds GetLocalBounds();
	protected override void Update();
}

