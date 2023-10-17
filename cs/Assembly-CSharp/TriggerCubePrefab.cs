/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TriggerCubePrefab : ObjectPrefab
{
	// Fields
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private TriggerCubeTintObject tintObject;

	// Properties
	public TriggerBoxEvents TriggerBoxEvents { get; }
	public TriggerCubeTintObject TintObject { get; }

	// Constructors
	public TriggerCubePrefab();

	// Methods
	public void SetScale(Vector3 scale);
	protected override void OnValidate();
}

