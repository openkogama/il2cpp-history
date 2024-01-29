/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Projector))]
public class AvatarBlobShadowController : MonoBehaviour
{
	// Fields
	private const float baseScale = 1f;
	public Projector blobProjector;
	private bool forceHidden;

	// Properties
	public bool ForceHidden { get; set; }

	// Constructors
	public AvatarBlobShadowController();

	// Methods
	private void Start();
	private void OnEnable();
	private void OnDisable();
	private void OnDestroy();
	public void ScaleShadow(float scale);
	private void OnQualityLevelChanged(object value);
}

