/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	internal class CharsetInfoFinder : CatalogParser
	{
		// Fields
		private string charset;
	
		// Properties
		public string Charset { get; }
	
		// Constructors
		public CharsetInfoFinder(string text);
	
		// Methods
		protected override bool OnEntry(string msgid, string msgidPlural, bool hasPlural, string[] translations, string flags, string[] references, string comment, string[] autocomments, string msgctxt);
	}
}
