/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FireObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private ParticleSystem fireParticleSystem;
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private Collider fireCollider;
	[SerializeField]
	private AnimationCurve soundIntensityScale;
	public Action OnFireObjectCreated;

	// Properties
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public ParticleSystem ParticleSystem { get; }
	public AudioSource AudioSource { get; }
	public Collider FireCollider { get; }
	public GameObject VisualObject { get; }
	public AnimationCurve SoundIntensityScale { get; }

	// Constructors
	public FireObject();

	// Methods
	private void OnEnable();
}

