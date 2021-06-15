/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	internal class PluralFormsScanner
	{
		// Fields
		private string str;
		private int pos;
		private PluralFormsToken token;
	
		// Properties
		public PluralFormsToken Token { get; }
	
		// Constructors
		public PluralFormsScanner(string str);
	
		// Methods
		public bool NextToken();
	}
}
