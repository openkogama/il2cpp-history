/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GizmoButton : MonoBehaviour, IPointerDownHandler
{
	// Fields
	[SerializeField]
	private GizmoAction gizmoAction;

	// Constructors
	public GizmoButton();

	// Methods
	public void OnPointerDown(PointerEventData eventData);
	[CompilerGenerated]
	private void _OnPointerDown_m__0(IGizmoHandler handler, BaseEventData data);
}

