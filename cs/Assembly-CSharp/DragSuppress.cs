/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DragSuppress : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
	// Fields
	private bool isDragging;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass2_0
	{
		// Fields
		public PointerEventData eventData;

		// Constructors
		public __c__DisplayClass2_0();

		// Methods
		internal void _OnBeginDrag_b__0(IBeginDragHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass3_0
	{
		// Fields
		public PointerEventData eventData;

		// Constructors
		public __c__DisplayClass3_0();

		// Methods
		internal void _OnEndDrag_b__0(IEndDragHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public PointerEventData eventData;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _OnDrag_b__0(IDragHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public PointerEventData eventData;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal void _OnPointerDown_b__0(IPointerDownHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public PointerEventData eventData;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _OnPointerUp_b__0(IPointerUpHandler handler, BaseEventData data);
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

