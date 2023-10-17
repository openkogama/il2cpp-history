/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdvancedGhostTriggerBase : MonoBehaviour
{
	// Fields
	protected HashSet<int> attackTargets;

	// Properties
	public int[] AttackTargets { get; }

	// Constructors
	public AdvancedGhostTriggerBase();

	// Methods
	private void Reset();
	private void OnTriggerStay(Collider other);
	private void AddTarget(Collider other);
	private bool TryGetValidWorldObjectID(Collider collider, out int woID);
	private void LateUpdate();
	private void OnDisable();
	private void OnDestroy();
}

