/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameCoinObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private GreyOutObjectScript pickupItem;
	[SerializeField]
	private ObjectParticleEmitterScript particles;
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private RotateLocal rotateLocal;
	public GameObject useInteractionRotator;

	// Properties
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public AudioSource AudioSource { get; }
	public GreyOutObjectScript PickupItem { get; }
	public ObjectParticleEmitterScript Particles { get; }
	public RotateLocal RotateLocal { get; }
	public GameObject VisualObject { get; }

	// Constructors
	public MVGameCoinObject();

	// Methods
	protected override void OnValidate();
}

