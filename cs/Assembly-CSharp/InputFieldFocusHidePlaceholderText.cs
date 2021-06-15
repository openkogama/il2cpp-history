/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InputFieldFocusHidePlaceholderText : MonoBehaviour, ISelectHandler, IDeselectHandler
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text placeholderText;

	// Constructors
	public InputFieldFocusHidePlaceholderText();

	// Methods
	public void OnSelect(BaseEventData data);
	public void OnDeselect(BaseEventData eventData);
}

