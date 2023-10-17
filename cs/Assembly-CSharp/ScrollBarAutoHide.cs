/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScrollBarAutoHide : MonoBehaviour, IBeginDragHandler, IEndDragHandler
{
	// Fields
	[SerializeField]
	private NotificationFade scrollBarFader;
	[SerializeField]
	private CanvasGroup scrollbarCanvasGroup;

	// Constructors
	public ScrollBarAutoHide();

	// Methods
	public void OnBeginDrag(PointerEventData eventData);
	public void OnEndDrag(PointerEventData eventData);
}

