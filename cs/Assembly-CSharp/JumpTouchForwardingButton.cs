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

public class JumpTouchForwardingButton : MonoBehaviour, IPointerUpHandler, IPointerDownHandler, IDragHandler
{
	// Fields
	private const float deadZoneBase = 10f;
	private bool touchPadEnabled;
	private Vector2 startPos;
	private float prevScale;
	private bool initialized;
	[SerializeField]
	private TouchPadAbsolute touchPadAbsolute;
	[SerializeField]
	private bool horizontalEnabled;
	[SerializeField]
	private bool verticalEnabled;

	// Properties
	private float DeadZone { get; }

	// Constructors
	public JumpTouchForwardingButton();

	// Methods
	private void Start();
	public void OnPointerUp(PointerEventData eventData);
	public void OnPointerDown(PointerEventData eventData);
	public void OnDrag(PointerEventData eventData);
}

