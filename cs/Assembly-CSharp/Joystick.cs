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

public class Joystick : JoystickBase
{
	// Fields
	private bool dragStart;
	private SupressAxisFlag supressAxis;
	private UIElipsoidHelper elipsoidHelper;
	private Vector3 startPos;
	private CrossPlatformInputManager.VirtualAxis m_HorizontalVirtualAxis;
	private CrossPlatformInputManager.VirtualAxis m_VerticalVirtualAxis;
	[SerializeField]
	private int baseMovementRangeX;
	[SerializeField]
	private int baseMovementRangeY;
	private JoystickLockAxis joystickLockAxis;
	[SerializeField]
	private string horizontalAxisName;
	[SerializeField]
	private string verticalAxisName;
	[SerializeField]
	private AnimationCurve deltaMovementModifier;
	[SerializeField]
	private bool useSupressAxis;

	// Properties
	private float MovementRangeX { get; }
	private float MovementRangeY { get; }

	// Nested types
	[Flags]
	public enum SupressAxisFlag
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2
	}

	// Constructors
	public Joystick();

	// Methods
	private void Awake();
	private void Update();
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

