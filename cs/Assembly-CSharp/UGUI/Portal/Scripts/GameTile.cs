/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	public class GameTile : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private Image image;
		[SerializeField]
		private TMP_Text titleText;
		private GameDto gameDto;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Action<string> __9__4_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _SetDefaultImage_b__4_1(string error);
		}
	
		// Constructors
		public GameTile();
	
		// Methods
		public void UpdateContent(GameDto gameDto);
		private void SetDefaultImage();
		public void OpenGameInfo();
		[CompilerGenerated]
		private void _UpdateContent_b__3_0(Sprite sprite);
		[CompilerGenerated]
		private void _UpdateContent_b__3_1(string error);
		[CompilerGenerated]
		private void _SetDefaultImage_b__4_0(Sprite sprite);
	}
}
