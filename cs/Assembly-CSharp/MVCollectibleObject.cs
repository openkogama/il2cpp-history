/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCollectibleObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private StreamedSharedMaterialHandler handler;
	[SerializeField]
	private GreyOutObjectScript pickupItem;
	[SerializeField]
	private GameObject pickupMesh;
	[SerializeField]
	private ObjectParticleEmitterScript particles;
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private WorldObjectEnableController worldObjectEnableController;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private AllWorldObjectTriggerBoxEvents allWorldObjectTriggerBoxEvents;
	[SerializeField]
	private CollectibleEffects collectibleEffects;

	// Properties
	public GreyOutObjectScript PickupItem { get; }
	public GameObject PickupMesh { get; }
	public ObjectParticleEmitterScript Particles { get; }
	public AudioSource AudioSource { get; }
	public WorldObjectEnableController WorldObjectEnableController { get; }
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public AllWorldObjectTriggerBoxEvents AllWorldObjectTriggerBoxEvents { get; }
	public CollectibleEffects CollectibleEffects { get; }

	// Constructors
	public MVCollectibleObject();

	// Methods
	private void Start();
	protected override void OnValidate();
}

