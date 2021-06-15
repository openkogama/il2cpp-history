/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SmoothPhysicsMovement : MonoBehaviour
{
	// Fields
	private Queue<Package> packages;
	private CullingSubscriberBase cullingSubscriberBase;
	private MVWorldObjectClient worldObjectOwner;
	private Package next;
	private Package current;
	private Transform targetTransform;

	// Nested types
	private class Package
	{
		// Fields
		public readonly Vector3 position;
		public readonly Quaternion rotation;
		public readonly float time;

		// Constructors
		public Package(Vector3 position, Quaternion rotation);
	}

	// Constructors
	public SmoothPhysicsMovement();

	// Methods
	public void Init(Transform targetTransform, CullingSubscriberBase cullingSubscriberBase, MVWorldObjectClient worldObjectOwner);
	public void SmoothMove();
	public void Reset();
	private void FixedUpdate();
}

