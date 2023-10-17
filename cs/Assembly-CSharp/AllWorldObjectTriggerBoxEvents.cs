/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AllWorldObjectTriggerBoxEvents : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	private EventHandler<TriggerEventArgs> TriggerEnter;
	[CompilerGenerated]
	private EventHandler<TriggerEventArgs> TriggerExit;

	// Events
	public event EventHandler<TriggerEventArgs> TriggerEnter {
		add;
		remove;
	}
	public event EventHandler<TriggerEventArgs> TriggerExit {
		add;
		remove;
	}

	// Constructors
	public AllWorldObjectTriggerBoxEvents();

	// Methods
	private void OnTriggerEnter(Collider other);
	private void OnTriggerExit(Collider other);
}

