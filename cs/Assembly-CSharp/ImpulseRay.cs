/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ImpulseRay : MonoBehaviour
{
	// Fields
	[SerializeField]
	private MeshRenderer rayRenderer;
	public float radius;
	public Color startColor;
	private const string tintColor = "_TintColor";
	private const float time = 0.4f;
	private readonly Color endColor;
	private float t;
	private float rayMagnitude;

	// Properties
	public MeshRenderer RayRenderer { get; }

	// Constructors
	public ImpulseRay();

	// Methods
	public void Initialize(Vector3 target);
	private void Update();
}

