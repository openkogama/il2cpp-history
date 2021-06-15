/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SelectionBox : MonoBehaviour
{
	// Fields
	private MeshRenderer meshRenderer;
	private MeshFilter meshFilter;
	private float fadeOutTime;
	private float fadeOutBeginTime;
	private bool isFadingOut;
	private float fadeInTime;
	private float fadeInBeginTime;
	private bool isFadingIn;
	private float baseAlpha;
	private float currentAlpha;

	// Constructors
	public SelectionBox();

	// Methods
	private void Start();
	public void Init(IModelingConstraint constraint, string layer = "UIItems");
	private void Update();
	public void FadeIn(float fadeInTime, Material material, Vector3[] corners);
	public void FadeOutDestroy(float fadeOutTime);
	private void OnDestroy();
}

