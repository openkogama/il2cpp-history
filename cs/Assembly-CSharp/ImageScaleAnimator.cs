/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ImageScaleAnimator : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform scaleTarget;
	[SerializeField]
	[Tooltip]
	private AnimationCurve scaleCurve;
	[SerializeField]
	private float scaleSpeed;
	private Vector2 startSize;

	// Constructors
	public ImageScaleAnimator();

	// Methods
	private void Start();
	private void Update();
}

