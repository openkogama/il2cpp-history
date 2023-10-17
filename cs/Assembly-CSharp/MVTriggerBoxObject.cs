/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTriggerBoxObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	public GameObject useInteractionRotator;

	// Properties
	public GameObject VisualObject { get; }
	public TriggerBoxEvents TriggerBoxEvents { get; }

	// Constructors
	public MVTriggerBoxObject();

	// Methods
	protected override void OnValidate();
}

