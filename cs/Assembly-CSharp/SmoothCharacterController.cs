/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SmoothCharacterController : MonoBehaviour
{
	// Fields
	private MvCharacterController controller;
	private SmoothPhysicsMovement smoothPhysicsMovement;

	// Properties
	public MvCharacterController Controller { get; }

	// Constructors
	public SmoothCharacterController();

	// Methods
	public void Init(GameObject worldObjectRoot, CullingSubscriberBase cullingSubscriberBase, MVWorldObjectClient worldObjectOwner);
	public void Reset();
	public void SmoothMove();
	private void OnDestroy();
	public SmoothCharacterController Clone(GameObject targetGameObject, GameObject seat, CullingSubscriberBase cullingSubscriberBase, MVWorldObjectClient worldObjectOwner);
}

