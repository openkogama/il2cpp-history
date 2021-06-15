/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryShinyButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform buttonRect;
	[SerializeField]
	private Transform buttonShine;
	[SerializeField]
	private AnimationCurve buttonShinePositionCurve;
	[SerializeField]
	private Image topFlare;
	[SerializeField]
	private AnimationCurve topFlarePositionCurve;
	[SerializeField]
	private Image bottomFlare;
	[SerializeField]
	private AnimationCurve bottomFlarePositionCurve;
	[SerializeField]
	private AnimationCurve flareAlphaCurve;
	[SerializeField]
	private float animationDuration;
	private float currentProgress;
	private RectTransform shine;

	// Constructors
	public AccessoryShinyButton();

	// Methods
	private void Start();
	private void Update();
}

