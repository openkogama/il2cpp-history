/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	[RequireComponent(typeof(UnityEngine.UI.Button))]
	public class PortalPageButton : MonoBehaviour
	{
		// Fields
		[Header("References")]
		[SerializeField]
		private UnityEngine.UI.Button button;
		[SerializeField]
		private UnityEngine.UI.Text text;
		[Header("Sprites")]
		[SerializeField]
		private Sprite normalSprite;
		[Header("Settings")]
		[SerializeField]
		private PortalPageType portalPageType;
	
		// Constructors
		public PortalPageButton();
	
		// Methods
		private void OnDestroy();
		private void PageChanged(PortalPageType currentPage);
		private void Start();
		private void ButtonClicked();
		private void DisplayAsCurrentPage();
		private void DisplayAsNormalPage();
	}
}
