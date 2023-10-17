/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HoverEnabler : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	[SerializeField]
	private GameObject objectToEnable;
	[SerializeField]
	private GameObject objectToDisable;

	// Constructors
	public HoverEnabler();

	// Methods
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	private void OnDisable();
}

