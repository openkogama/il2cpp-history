/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ToggleButtonAnimation : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform toggleOffMaskTransform;
	[SerializeField]
	private RectTransform toggleOffContentTransform;
	[SerializeField]
	private RectTransform toggleButtonTransform;
	[SerializeField]
	private bool isToggleOn;
	[SerializeField]
	private float toggleInterpolationDuration;
	[SerializeField]
	private float toggleButtonMoveAmount;
	private float toggleOffOriginalPositionX;
	private float toggleButtonOriginalPositionX;
	private float interpolateToggleMaskStartPositionX;
	private float interpolateToggleMaskNewPositionX;
	private float interpolateToggleContentStartPositionX;
	private float interpolateToggleContentNewPositionX;
	private float interpolateToggleButtonStartPositionX;
	private float interpolateToggleButtonNewPositionX;
	private float interpolationStartTime;
	private bool isInitialized;

	// Properties
	public bool IsToggleOn { get; }

	// Constructors
	public ToggleButtonAnimation();

	// Methods
	private void Start();
	public void Initialize();
	public void ToggleOn();
	public void ToggleOff();
	public void Toggle();
	public void SetToggleOnWithoutInterpolation();
	public void SetToggleOffWithoutInterpolation();
	private void HandleToggle();
	private void Update();
}

