/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public class TMP_ScrollbarEventHandler : MonoBehaviour, IPointerClickHandler, ISelectHandler, IDeselectHandler
	{
		// Fields
		public bool isSelected;
	
		// Constructors
		public TMP_ScrollbarEventHandler();
	
		// Methods
		public void OnPointerClick(PointerEventData eventData);
		public void OnSelect(BaseEventData eventData);
		public void OnDeselect(BaseEventData eventData);
	}
}
