/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.PlayMode.LobbyState.MenuButtons
{
	public abstract class AdminMenuButton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerUpHandler
	{
		// Fields
		[SerializeField]
		protected bool shouldPop;
		private bool isMouseOver;
	
		// Constructors
		protected AdminMenuButton();
	
		// Methods
		protected abstract void DoAction();
		public void OnPointerUp(PointerEventData eventData);
		public void OnPointerDown(PointerEventData eventData);
		public void OnPointerEnter(PointerEventData eventData);
		public void OnPointerExit(PointerEventData eventData);
	}
}
