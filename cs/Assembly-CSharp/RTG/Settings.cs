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
	public abstract class Settings
	{
		// Fields
		[SerializeField]
		private bool _canBeDisplayed;
		[SerializeField]
		protected bool _isExpanded;
		private string _foldoutLabel;
		[CompilerGenerated]
		private bool _UsesFoldout_k__BackingField;
	
		// Properties
		public bool CanBeDisplayed { get; set; }
		public bool UsesFoldout { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string FoldoutLabel { get; set; }
		public bool IsExpanded { get; set; }
	
		// Constructors
		protected Settings();
	}
}
