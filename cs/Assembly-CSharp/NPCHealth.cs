/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NPCHealth : MonoBehaviour
{
	// Fields
	private float curHealth;
	public float MaxHealth;

	// Properties
	public bool isAlive { get; }
	public float Health { get; }

	// Constructors
	public NPCHealth();

	// Methods
	private void Start();
	public void Interact(float amount);
}

