/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class EditorToolbarTab
	{
		// Fields
		[SerializeField]
		private string _tooltip;
		[SerializeField]
		private string _text;
		[NonSerialized]
		private EditorToolbar _targetToolbar;
		[NonSerialized]
		private List<Settings> _targetSettings;
	
		// Properties
		public string Tooltip { get; set; }
		public string Text { get; set; }
		public EditorToolbar TargetToolbar { get; set; }
		public int NumTargetSettings { get; }
	
		// Constructors
		public EditorToolbarTab(string text, string tooltip);
	
		// Methods
		public void AddTargetSettings(Settings targetSettings);
	}
}
