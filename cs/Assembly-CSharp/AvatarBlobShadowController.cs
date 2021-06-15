/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent]
public class AvatarBlobShadowController : MonoBehaviour
{
	// Fields
	public Projector blobProjector;
	private float baseScale;

	// Constructors
	public AvatarBlobShadowController();

	// Methods
	private void Start();
	private void OnEnable();
	private void OnDisable();
	private void OnDestroy();
	public void ScaleShadow(float scale);
	private void OnQualityLevelChanged(int level);
}

