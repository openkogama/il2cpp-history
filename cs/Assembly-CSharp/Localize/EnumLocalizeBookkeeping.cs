/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Localize
{
	public class EnumLocalizeBookkeeping
	{
		// Fields
		private Dictionary<int, string> enumToStringKeyMap;
		private Action<Dictionary<int, string>> initCallback;
	
		// Constructors
		public EnumLocalizeBookkeeping(Action<Dictionary<int, string>> initCallback);
	
		// Methods
		public string GetLocalizedString(int enumVal);
		private void Init();
	}
}
