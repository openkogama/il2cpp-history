/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPointLightObject : ObjectPrefab
{
	// Fields
	[SerializeField]
	private Light pointLight;
	[SerializeField]
	private GameObject visualObject;
	[SerializeField]
	private StreamedTextureToMeshRenderer streamedTexture;
	[SerializeField]
	private MeshRenderer pointLightPlaneMesh;
	[SerializeField]
	private Transform pointLightPlaneTransform;

	// Properties
	public GameObject VisualObject { get; }
	public Light PointLight { get; }
	public StreamedTextureToMeshRenderer StreamedTexture { get; }
	public MeshRenderer PointLightPlaneMesh { get; }
	public Transform PointLightPlaneTransform { get; }

	// Constructors
	public MVPointLightObject();
}

