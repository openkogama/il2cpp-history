/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DragInputHandler : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
	// Fields
	private List<IDragInputReciever> dragInputRecievers;

	// Constructors
	public DragInputHandler();

	// Methods
	public void AddInputReciever(IDragInputReciever newInputReciever);
	public void RemoveInputReciever(IDragInputReciever inputReciever);
	public void OnBeginDrag(PointerEventData data);
	public void OnEndDrag(PointerEventData eventData);
	public void OnDrag(PointerEventData eventData);
}

