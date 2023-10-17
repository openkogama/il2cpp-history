/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseLeverObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private Collider leverCollider;
	[SerializeField]
	private Collider editCollider;
	[SerializeField]
	private UseInteractor useInteractor;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private Transform plateButtonTransform;
	[SerializeField]
	private GameObject visualRoot;
	public GameObject useInteractionRotator;

	// Properties
	public Collider LeverCollider { get; }
	public Collider EditCollider { get; }
	public UseInteractor UseInteractor { get; set; }
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public Transform PlateButtonTransform { get; }
	public GameObject VisualRoot { get; }

	// Constructors
	public UseLeverObject();

	// Methods
	protected override void OnValidate();
}

