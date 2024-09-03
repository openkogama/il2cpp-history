/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class EditorToolbar
	{
		// Fields
		[SerializeField]
		private Color _activeTabColor;
		[SerializeField]
		private int _numTabsPerRow;
		[SerializeField]
		private EditorToolbarTab[] _tabs;
		[SerializeField]
		private int _activeTabIndex;
	
		// Properties
		public int ActiveTabIndex { get; }
		public EditorToolbarTab ActiveTab { get; }
		public Color ActiveTabColor { get; set; }
		public int NumTabsPerRow { get; set; }
		public int NumTabs { get; }
	
		// Constructors
		public EditorToolbar(EditorToolbarTab[] tabs, int numTabsPerRow, Color activeTabColor);
	
		// Methods
		public EditorToolbarTab GetTabByIndex(int tabIndex);
	}
}
