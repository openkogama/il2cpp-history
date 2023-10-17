/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityStandardAssets.CrossPlatformInput;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class JoystickVehicleThirdPerson : JoystickBase
{
	// Fields
	private Vector3 startPos;
	private CrossPlatformInputManager.VirtualAxis m_HorizontalVirtualAxis;
	private CrossPlatformInputManager.VirtualAxis m_VerticalVirtualAxis;
	[SerializeField]
	private int baseMovementRangeX;
	[SerializeField]
	private int baseMovementRangeY;
	[SerializeField]
	private string horizontalAxisName;
	[SerializeField]
	private string verticalAxisName;
	[SerializeField]
	private AnimationCurve deltaMovementModifierX;
	[SerializeField]
	private AnimationCurve deltaMovementModifierY;
	private float desiredDeltaX;
	private float currentDeltaX;

	// Properties
	private float MovementRangeX { get; }
	private float MovementRangeY { get; }

	// Constructors
	public JoystickVehicleThirdPerson();

	// Methods
	private void Awake();
	private void OnEnable();
	private void OnDisable();
	public override void OnDrag(PointerEventData data);
	public override void OnPointerUp(PointerEventData data);
	public override void OnPointerDown(PointerEventData data);
	private void CreateVirtualAxes();
	private void RegisterAxes();
	private void UpdateVirtualAxes(Vector3 value);
	private void Reset();
}

