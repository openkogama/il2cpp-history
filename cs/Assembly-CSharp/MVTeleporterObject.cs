/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTeleporterObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private ParticleSystem objParticleSystem;
	[SerializeField]
	private TeleporterTintObject tintObject;
	public GameObject visualRoot;
	public GameObject useInteractionRotator;

	// Properties
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public ParticleSystem ParticleSystem { get; }
	public TeleporterTintObject TintObject { get; }

	// Constructors
	public MVTeleporterObject();

	// Methods
	protected override void OnValidate();
}

