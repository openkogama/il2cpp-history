/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LinkObjectScript : LinkObjectBase
{
	// Fields
	[SerializeField]
	private BoxCollider boxCollider;
	[SerializeField]
	private LineRenderer lineRenderer;

	// Constructors
	public LinkObjectScript();

	// Methods
	private void Awake();
	public void Initialize(Link link);
	private bool UpdatePositions(Link link);
	private Vector3 CalculateUnconnectedLinkPos(Vector3 connectedPos);
	public void UpdateLinkVisual(Link link);
}

