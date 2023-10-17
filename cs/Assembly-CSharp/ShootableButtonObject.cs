/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShootableButtonObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private Collider editCollider;
	[SerializeField]
	private GreyOutObjectScript greyOutObject;
	[SerializeField]
	private Collider targetCollider2D;
	[SerializeField]
	private Collider targetCollider3D;
	[SerializeField]
	private GameObject visualRoot;

	// Properties
	public Collider EditCollider { get; }
	public Collider TargetCollider2D { get; }
	public Collider TargetCollider3D { get; }
	public GreyOutObjectScript GreyOutObject { get; }
	public GameObject VisualRoot { get; }

	// Constructors
	public ShootableButtonObject();

	// Methods
	protected override void OnValidate();
}

