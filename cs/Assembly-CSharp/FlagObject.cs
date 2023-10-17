/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FlagObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private TintObject tintObject;
	public GameObject useInteractionRotator;

	// Properties
	public GameObject VisualObject { get; }
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public TintObject TintObject { get; }

	// Constructors
	public FlagObject();

	// Methods
	protected override void OnValidate();
}

