/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PointerDownController : MonoBehaviour, IPointerDownHandler
{
	// Fields
	private bool isInitialized;
	private UnityAction pointerDownCallback;

	// Constructors
	public PointerDownController();

	// Methods
	public void Initialize(UnityAction pointerDownCallback);
	public void OnPointerDown(PointerEventData eventData);
}

