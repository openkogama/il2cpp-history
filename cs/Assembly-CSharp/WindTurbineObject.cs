/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WindTurbineObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private Transform areaColliderTransform;
	[SerializeField]
	private Collider areaCollider;
	[SerializeField]
	private Collider editorCollider;
	[SerializeField]
	private ParticleSystem windParticleSystem;
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;

	// Properties
	public GameObject VisualObject { get; }
	public Transform AreaColliderTransform { get; }
	public Collider AreaCollider { get; }
	public Collider EditorCollider { get; }
	public ParticleSystem WindParticleSystem { get; }
	public TriggerBoxEvents TriggerBoxEvents { get; }

	// Constructors
	public WindTurbineObject();
}

