/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarWaterRippleEffect : WaterSplashComponent
{
	// Fields
	[Header]
	[SerializeField]
	private ParticleSystem airBubbleParticlesPrefab;
	[SerializeField]
	private Vector3 airBubbleOffset;
	[Header]
	[SerializeField]
	private Avatar avatar;
	private ParticleSystem airBubbleParticles;
	private GameObject airBubbleCollitionPlane;
	private bool isInitialized;

	// Properties
	private float AvatarHeight { get; }

	// Constructors
	public AvatarWaterRippleEffect();

	// Methods
	public override void Initialize(IMovable obj);
	protected override void Update();
}

