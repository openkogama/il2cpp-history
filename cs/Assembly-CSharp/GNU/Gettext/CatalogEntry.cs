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
	public class CatalogEntry
	{
		// Fields
		private string str;
		private string plural;
		private bool hasPlural;
		private List<string> translations;
		private List<string> references;
		private List<string> autocomments;
		private bool isFuzzy;
		private bool isModified;
		private bool isAutomatic;
		private bool hasBadTokens;
		private string moreFlags;
		private string comment;
		private Validity validity;
		private string errorString;
		private string context;
		private Catalog owner;
	
		// Properties
		public string String { get; }
		public bool HasPlural { get; }
		public string PluralString { get; }
		public int NumberOfTranslations { get; }
		public int TranslationsCount { get; }
		public string Context { get; set; }
		public bool HasContext { get; }
		public string Key { get; }
		public string[] References { get; }
		public string Comment { get; set; }
		public string[] AutoComments { get; }
		public bool HasComment { get; }
		public string Flags { get; set; }
		public bool IsFuzzy { get; set; }
		public bool IsTranslated { get; }
		public bool IsModified { get; set; }
		public bool IsAutomatic { get; set; }
		public Validity DataValidity { get; set; }
		public string ErrorString { get; set; }
		public string LocaleCode { get; }
	
		// Nested types
		public enum Validity
		{
			Unknown = 0,
			Invalid = 1,
			Valid = 2
		}
	
		// Constructors
		public CatalogEntry(Catalog owner, string str, string plural);
		public CatalogEntry(Catalog owner, CatalogEntry dt);
	
		// Methods
		public string GetTranslation(int index);
		public static string MakeKey(string msgid, string context);
		public void AddReference(string reference);
		public void ClearReferences();
		public bool RemoveReferenceTo(string fileNamePrefix);
		public void RemoveReference(string reference);
		public void SetString(string str);
		public void SetPluralString(string plural);
		public void SetTranslation(string translation, int index);
		public void SetTranslations(string[] translations);
		public bool IsInFormat(string format);
		public void AddAutoComment(string comment, bool ifNotExists);
		public void AddAutoComment(string comment);
		public void ClearAutoComments();
		private void MarkOwnerDirty();
	}
}
