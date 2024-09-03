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
	public class UniversalGizmoConfig : Settings
	{
		// Fields
		[SerializeField]
		private UniversalGizmoSettingsCategory _inheritCategory;
		[SerializeField]
		private UniversalGizmoSettingsType _inheritType;
		[SerializeField]
		private UniversalGizmoSettingsCategory _displayCategory;
	
		// Properties
		public UniversalGizmoSettingsCategory InheritCategory { get; set; }
		public UniversalGizmoSettingsType InheritType { get; set; }
		public UniversalGizmoSettingsCategory DisplayCategory { get; set; }
	
		// Constructors
		public UniversalGizmoConfig();
	}
}
