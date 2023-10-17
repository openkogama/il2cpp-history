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

public class TouchForwardingButton : MonoBehaviour, IPointerUpHandler, IPointerDownHandler
{
	// Fields
	[SerializeField]
	private TouchPadAbsolute touchPadAbsolute;
	[SerializeField]
	private bool horizontalEnabled;
	[SerializeField]
	private bool verticalEnabled;
	private bool initialized;

	// Constructors
	public TouchForwardingButton();

	// Methods
	public void OnPointerUp(PointerEventData eventData);
	private void Start();
	public void OnPointerDown(PointerEventData eventData);
}

