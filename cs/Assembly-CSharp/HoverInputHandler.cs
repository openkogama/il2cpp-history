/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HoverInputHandler : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	private List<HoverInputReceiver> hoverInputReceivers;

	// Constructors
	public HoverInputHandler();

	// Methods
	public void SubscribeToHoverInput(HoverInputReceiver newInputReceiver);
	public void UnsubscribeToHoverInput(HoverInputReceiver newInputReceiver);
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
}

