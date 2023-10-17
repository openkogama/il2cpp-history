/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ObjectEnabler : MonoBehaviour, IUpdatecontrollerSubscriberUpdate
{
	// Fields
	public MVObjectEnabler woObjectEnabler;
	[CompilerGenerated]
	private bool _IsDrawingEnabled_k__BackingField;
	private Material objectMaterial;
	private int nameToLayer;
	private float currentAlpha;
	private Camera mainCamera;

	// Properties
	public bool IsDrawingEnabled { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public ObjectEnabler();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	public void Initialize();
	private void DrawObject(MeshFilter[] previewMeshes);
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
}

