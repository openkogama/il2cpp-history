/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DragHandler : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
	// Fields
	private Vector3 startPos;
	private static bool dragging;
	[SerializeField]
	private CanvasGroup canvasGroup;

	// Properties
	public static bool Dragging { get; }

	// Constructors
	public DragHandler();

	// Methods
	public void OnBeginDrag(PointerEventData eventData);
	public void OnEndDrag(PointerEventData eventData);
	private void Update();
	public void OnDrag(PointerEventData eventData);
}

