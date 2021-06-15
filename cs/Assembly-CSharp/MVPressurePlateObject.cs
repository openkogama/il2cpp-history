/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPressurePlateObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private Transform plateModelTransform;
	[SerializeField]
	private PressurePlateTintObject tintObject;
	[SerializeField]
	private GameObject plateLogicModel;
	public GameObject useInteractionRotator;

	// Properties
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public GameObject TriggerBoxLogic { get; }
	public Transform PlateModelTranform { get; }
	public PressurePlateTintObject TintObject { get; }

	// Constructors
	public MVPressurePlateObject();

	// Methods
	protected override void OnValidate();
}

