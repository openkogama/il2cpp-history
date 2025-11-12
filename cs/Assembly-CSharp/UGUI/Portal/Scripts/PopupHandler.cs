/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	public class PopupHandler : MonoBehaviour
	{
		// Fields
		[Header("References")]
		[SerializeField]
		private TMP_Text titleText;
		[SerializeField]
		private CanvasGroup canvasGroup;
		[SerializeField]
		private FadingTween fadingTween;
		private Action actionButtonCallback;
	
		// Constructors
		public PopupHandler();
	
		// Methods
		public void UpdatePopup(string title, Action actionButtonPressedCallback = null);
		public void FadeIn();
		public void ActionButtonPressed();
	}
}
