/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ObjectLinkObjectScript : LinkObjectBase
{
	// Fields
	[SerializeField]
	private BoxCollider boxCollider;
	[SerializeField]
	private LineRenderer lineRenderer;

	// Constructors
	public ObjectLinkObjectScript();

	// Methods
	private void Awake();
	public void Initialize(ObjectLink link);
	private bool UpdatePositions(ObjectLink link);
	public void UpdateLinkVisual(ObjectLink link);
}

