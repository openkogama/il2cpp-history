/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	public abstract class CatalogParser
	{
		// Fields
		internal static readonly string[] LineSplitStrings;
		[CompilerGenerated]
		private string _NewLine_k__BackingField;
	
		// Properties
		public string NewLine { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public CatalogParser(string text, Encoding encoding);
		static CatalogParser();
	
		// Methods
		private static string GetNewLine(string text, Encoding encoding);
		private static bool ReadParam(string input, string pattern, out string output);
		private string ParseMessage(ref string line, ref string dummy, StringReader sr);
		public bool Parse(string text);
		protected abstract bool OnEntry(string msgid, string msgidPlural, bool hasPlural, string[] translations, string flags, string[] references, string comment, string[] autocomments, string msgctxt);
		protected virtual bool OnDeletedEntry(string[] deletedLines, string flags, string[] references, string comment, string[] autocomments);
	}
}
