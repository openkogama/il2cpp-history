/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class JoystickForwardingButton : JoystickBase
{
	// Fields
	private Vector2 startPosition;
	private bool isDragging;
	[SerializeField]
	private JoystickBase joystickBase;
	[SerializeField]
	private float deadZoneBase;

	// Properties
	private float DeadZone { get; }

	// Constructors
	public JoystickForwardingButton();

	// Methods
	public override void OnDrag(PointerEventData eventData);
	public override void OnPointerDown(PointerEventData eventData);
	public override void OnPointerUp(PointerEventData eventData);
	private void OnDisable();
}

