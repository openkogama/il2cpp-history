/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TriggerBoxEvents : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	private EventHandler<TriggerEventArgs> TriggerEnterOverride;
	[CompilerGenerated]
	private EventHandler<TriggerEventArgs> TriggerExitOverride;
	[CompilerGenerated]
	private EventHandler<TriggerEventArgs> TriggerEnter;
	[CompilerGenerated]
	private EventHandler<TriggerEventArgs> TriggerExit;
	[SerializeField]
	[Tooltip("Will be fetched with GetComponent<Collider>(), if null.")]
	private Collider triggerCollider;
	private bool isInTrigger;

	// Properties
	public Collider Collider { get; }
	public bool IsInTrigger { get; }

	// Events
	public event EventHandler<TriggerEventArgs> TriggerEnterOverride {
		add;
		remove;
	}
	public event EventHandler<TriggerEventArgs> TriggerExitOverride {
		add;
		remove;
	}
	public event EventHandler<TriggerEventArgs> TriggerEnter {
		add;
		remove;
	}
	public event EventHandler<TriggerEventArgs> TriggerExit {
		add;
		remove;
	}

	// Constructors
	public TriggerBoxEvents();

	// Methods
	protected void OnValidate();
	public void OnMVTriggerEnter(Collider other);
	public void OnMVTriggerExit(Collider other);
	private MVWorldObjectClient GetValidWorldObject(Collider other);
}

