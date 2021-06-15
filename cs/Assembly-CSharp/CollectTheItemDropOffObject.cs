/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CollectTheItemDropOffObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private Collider editCollider;
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private CollectTheItemBlinker blinker;
	[SerializeField]
	private GameObject cullingObject;
	[SerializeField]
	private GreyOutObjectScript greyout;

	// Properties
	public GameObject CullingObject { get; }
	public CollectTheItemBlinker Blinker { get; }
	public GameObject VisualObject { get; }
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public Collider EditCollider { get; }
	public GreyOutObjectScript GreyOutScript { get; }

	// Constructors
	public CollectTheItemDropOffObject();

	// Methods
	protected override void OnValidate();
}

