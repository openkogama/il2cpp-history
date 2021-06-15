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
	public class StringLocalizeBookkeeping
	{
		// Fields
		private Dictionary<string, string> stringToStringKeyMap;
		private Action<Dictionary<string, string>> initCallback;
	
		// Constructors
		public StringLocalizeBookkeeping(Action<Dictionary<string, string>> initCallback);
	
		// Methods
		public string GetLocalizedString(string stringVal);
		private void Init();
	}
}
