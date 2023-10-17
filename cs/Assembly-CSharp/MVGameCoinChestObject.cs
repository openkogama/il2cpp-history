/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameCoinChestObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private ObjectParticleEmitterScript particles;
	[SerializeField]
	private GameCoinChestModelSelector modelSelector;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private GameObject visualObject;
	public GameObject useInteractionRotator;

	// Properties
	public ObjectParticleEmitterScript Particles { get; }
	public GameCoinChestModelSelector ModelSelector { get; }
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public AudioSource AudioSource { get; }
	public GameObject VisualObject { get; }

	// Constructors
	public MVGameCoinChestObject();

	// Methods
	protected override void OnValidate();
}

