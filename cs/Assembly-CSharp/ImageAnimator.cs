/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Image))]
public class ImageAnimator : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image image;
	[SerializeField]
	private Color startColor;
	[SerializeField]
	private Color endColor;
	[SerializeField]
	private AnimationCurve curve;
	[SerializeField]
	private float speed;
	private float time;

	// Constructors
	public ImageAnimator();

	// Methods
	public void SetColor(Color start, Color end);
	public float GetCurrentAlpha();
	private void Update();
	private void OnDisable();
}

