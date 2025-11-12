/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UGUI.Portal.Scripts;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts.Carousel
{
	public class GameCarouselError : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private TMP_Text errorText;
		[SerializeField]
		private UnityEngine.UI.Button tryAgainButton;
	
		// Constructors
		public GameCarouselError();
	
		// Methods
		public void Show(WebResponse response);
	}
}
