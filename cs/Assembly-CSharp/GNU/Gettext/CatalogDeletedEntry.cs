/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	public class CatalogDeletedEntry
	{
		// Fields
		private List<string> deletedLines;
		private List<string> references;
		private List<string> autocomments;
		private string flags;
		private string comment;
	
		// Properties
		public string[] DeletedLines { get; }
		public string[] References { get; }
		public string Comment { get; }
		public string[] AutoComments { get; }
		public bool HasComment { get; }
		public string Flags { get; set; }
	
		// Constructors
		public CatalogDeletedEntry(string[] deletedLines);
		public CatalogDeletedEntry(CatalogDeletedEntry dt);
	
		// Methods
		public void AddReference(string reference);
		public void ClearReferences();
		public void SetDeletedLines(string[] lines);
		public void SetComment(string comment);
		public void AddAutoComments(string comment);
		public void ClearAutoComments();
	}
}
