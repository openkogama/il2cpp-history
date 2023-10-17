/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class JoystickController : JoystickBase
{
	// Fields
	private float alphaOn;
	[SerializeField]
	private JoystickBase joystick;
	[SerializeField]
	private RectTransform rectTransform;
	[SerializeField]
	private RectTransform startPosVisulization;
	[SerializeField]
	private CanvasGroup canvasGroup;

	// Constructors
	public JoystickController();

	// Methods
	private void Start();
	private void ScalePhysicalSize();
	public override void OnDrag(PointerEventData eventData);
	public override void OnPointerDown(PointerEventData eventData);
	public override void OnPointerUp(PointerEventData eventData);
	private void OnDisable();
}

