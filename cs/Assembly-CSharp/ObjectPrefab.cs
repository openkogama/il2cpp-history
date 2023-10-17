/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ObjectPrefab : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected Renderer[] meshRenderers;
	[SerializeField]
	protected Collider mainCollider;

	// Properties
	public Renderer[] MeshRenderers { get; }
	public Collider Collider { get; }

	// Constructors
	public ObjectPrefab();

	// Methods
	protected virtual void OnValidate();
}

