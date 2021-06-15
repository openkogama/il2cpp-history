/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CollectTheItemObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private Collider editCollider;
	[SerializeField]
	private RotateLocal rotator;
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private GameObject cullingObject;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private GreyOutObjectScript greyOutObject;
	[SerializeField]
	private GreyOutObjectScript greyOutScriptEditMode;
	[SerializeField]
	private CollectTheItemBlinker blinker;
	private const float timeBeforeBlink = 3f;
	private float fadeTimer;

	// Properties
	public Collider EditCollider { get; }
	public GameObject VisualObject { get; }
	public GameObject CullingObject { get; }
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public RotateLocal RotateLocal { get; }
	public GreyOutObjectScript GreyOutObject { get; }
	public GreyOutObjectScript GreyOutScriptEditMode { get; }
	public CollectTheItemBlinker Blinker { get; }
	public bool EnableFading { get; set; }

	// Constructors
	public CollectTheItemObject();

	// Methods
	private void Update();
	private bool ShouldDoBlinking();
	public void InitializeGreyOutScript();
	protected override void OnValidate();
}

