/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FlipDrawPlane : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Color SelectedColor;
	[SerializeField]
	private Color NormalColor;
	[SerializeField]
	private Image XAxisImage;
	[SerializeField]
	private Image YAxisImage;
	[SerializeField]
	private Image ZAxisImage;
	private int currentIndex;
	private List<DrawPlaneAxis> drawPlaneAxises;
	private Image currentlySelectedImage;

	// Constructors
	public FlipDrawPlane();

	// Methods
	private void Awake();
	private void OnEnable();
	private void InitalizeImages();
	public void Flip();
	private void HighlightImages();
}

