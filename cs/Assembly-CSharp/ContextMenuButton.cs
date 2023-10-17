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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ContextMenuButton : MonoBehaviour, IPointerDownHandler
{
	// Fields
	[SerializeField]
	private Button button;
	[SerializeField]
	private UnityEngine.UI.Text text;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IHandlePointerDownOnContextMenuButton> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnPointerDown_b__4_0(IHandlePointerDownOnContextMenuButton x, BaseEventData y);
	}

	// Constructors
	public ContextMenuButton();

	// Methods
	public void Initialize(string buttonText, UnityAction onClickCallback);
	public void Initialize(string buttonText);
	public void OnPointerDown(PointerEventData eventData);
}

