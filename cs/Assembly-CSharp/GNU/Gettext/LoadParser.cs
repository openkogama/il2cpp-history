/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	internal class LoadParser : CatalogParser
	{
		// Fields
		private Catalog catalog;
		private bool headerParsed;
	
		// Constructors
		public LoadParser(Catalog catalog, string text, Encoding encoding);
	
		// Methods
		protected override bool OnEntry(string msgid, string msgidPlural, bool hasPlural, string[] translations, string flags, string[] references, string comment, string[] autocomments, string msgctxt);
		protected override bool OnDeletedEntry(string[] deletedLines, string flags, string[] references, string comment, string[] autocomments);
	}
}
