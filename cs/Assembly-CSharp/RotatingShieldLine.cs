/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RotatingShieldLine : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform lineTransform;
	[SerializeField]
	private Vector3 lineRotationSpeed;
	[SerializeField]
	private ParticleSystem orbSpawner;
	[SerializeField]
	private int segments;
	[SerializeField]
	private float radius;
	[SerializeField]
	private LineRenderer line;
	private Vector3[] positions;
	private int currIndex;
	private bool recreatOrbs;

	// Constructors
	public RotatingShieldLine();

	// Methods
	public void Initialize();
	public void OnSetHidden();
	public void OnSetVisible();
	private void CreatePoints();
	private void Update();
}

