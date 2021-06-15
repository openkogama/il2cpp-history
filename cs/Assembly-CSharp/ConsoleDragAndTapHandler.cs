/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ConsoleDragAndTapHandler : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler, IPointerDownHandler, IPointerUpHandler
{
	// Fields
	public UnityAction OnClick;
	private bool dragging;
	private float dragStart;
	private const float minDragDurationForClick = 0.2f;
	private bool scrollingEnabled;
	[SerializeField]
	private ScrollRect scrollRect;

	// Constructors
	public ConsoleDragAndTapHandler();

	// Methods
	public void OnChatModeClick();
	public void SetScrollingEnabled(bool scrollEnabled);
	public void OnDrag(PointerEventData eventData);
	public void OnBeginDrag(PointerEventData eventData);
	public void OnEndDrag(PointerEventData eventData);
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerUp(PointerEventData eventData);
}

