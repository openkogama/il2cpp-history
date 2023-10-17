/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCheckpointObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private Animation objAnimation;
	public GameObject useInteractionRotator;

	// Properties
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public Animation Animation { get; }
	public GameObject VisualObject { get; }

	// Constructors
	public MVCheckpointObject();

	// Methods
	protected override void OnValidate();
}

