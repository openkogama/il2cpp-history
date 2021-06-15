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

public class ContextMenuButton : MonoBehaviour, IPointerDownHandler
{
	// Fields
	[SerializeField]
	private Button button;
	[SerializeField]
	private UnityEngine.UI.Text text;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IHandlePointerDownOnContextMenuButton> __f__am_cache0;

	// Constructors
	public ContextMenuButton();

	// Methods
	public void Initialize(string buttonText, UnityAction onClickCallback);
	public void OnPointerDown(PointerEventData eventData);
	[CompilerGenerated]
	private static void _OnPointerDown_m__0(IHandlePointerDownOnContextMenuButton x, BaseEventData y);
}

