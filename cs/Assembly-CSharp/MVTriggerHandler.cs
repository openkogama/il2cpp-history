/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTriggerHandler : MonoBehaviour
{
	// Fields
	private Dictionary<int, TriggerBoxEvents> triggerBoxEvents;
	private Dictionary<int, TriggerBoxEvents> newTriggerBoxEvents;
	private Collider triggingCollider;
	private bool fixedUpdatedWasExecuted;
	private bool wasResetThisFrame;

	// Properties
	public Collider TriggingCollider { get; }

	// Constructors
	public MVTriggerHandler();

	// Methods
	private void OnTriggerStay(Collider other);
	private void FixedUpdate();
	private List<int> GetMissingKeysInDictionary(Dictionary<int, TriggerBoxEvents> keys, Dictionary<int, TriggerBoxEvents> dictionary);
	private void Update();
	public void Reset();
	private void OnDisable();
	private void OnDestroy();
	private void Start();
}

