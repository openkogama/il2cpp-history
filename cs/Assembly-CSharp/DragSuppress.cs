/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DragSuppress : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
	// Fields
	private bool isDragging;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnBeginDrag_c__AnonStorey0
	{
		// Fields
		internal PointerEventData eventData;

		// Constructors
		public _OnBeginDrag_c__AnonStorey0();

		// Methods
		internal void __m__0(IBeginDragHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class _OnEndDrag_c__AnonStorey1
	{
		// Fields
		internal PointerEventData eventData;

		// Constructors
		public _OnEndDrag_c__AnonStorey1();

		// Methods
		internal void __m__0(IEndDragHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class _OnDrag_c__AnonStorey2
	{
		// Fields
		internal PointerEventData eventData;

		// Constructors
		public _OnDrag_c__AnonStorey2();

		// Methods
		internal void __m__0(IDragHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class _OnPointerDown_c__AnonStorey3
	{
		// Fields
		internal PointerEventData eventData;

		// Constructors
		public _OnPointerDown_c__AnonStorey3();

		// Methods
		internal void __m__0(IPointerDownHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class _OnPointerUp_c__AnonStorey4
	{
		// Fields
		internal PointerEventData eventData;

		// Constructors
		public _OnPointerUp_c__AnonStorey4();

		// Methods
		internal void __m__0(IPointerUpHandler handler, BaseEventData data);
	}

	// Constructors
	public DragSuppress();

	// Methods
	private void Update();
	public void OnBeginDrag(PointerEventData eventData);
	public void OnEndDrag(PointerEventData eventData);
	public void OnDrag(PointerEventData eventData);
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerUp(PointerEventData eventData);
}

