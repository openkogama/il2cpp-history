/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Text;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	public class Catalog : IEnumerable<GNU.Gettext.CatalogEntry>
	{
		// Fields
		private IDictionary<string, CatalogEntry> entriesDict;
		private List<CatalogEntry> entriesList;
		private List<CatalogDeletedEntry> deletedEntriesList;
		private bool isOk;
		private bool isDirty;
		private string fileName;
		public const string PluralFormsHeader = "Plural-Forms";
		[CompilerGenerated]
		private System.EventHandler DirtyChanged;
		private Dictionary<string, string> headerEntries;
		public string Project;
		public string CreationDate;
		public string RevisionDate;
		public string Translator;
		public string TranslatorEmail;
		public string Team;
		public string TeamEmail;
		public string Charset;
		public string Language;
		public string Country;
		public string Comment;
	
		// Properties
		public bool IsDirty { get; set; }
		public int Count { get; }
		public CatalogEntry this[int index] { get => default; }
		public int PluralFormsCount { get; }
		public string[] PluralFormsDescriptions { get; }
		public bool IsOk { get; }
		public string LocaleCode { get; }
		public bool HasDeletedItems { get; }
		public string CommentForGui { get; set; }
	
		// Events
		public event System.EventHandler DirtyChanged {
			add;
			remove;
		}
	
		// Constructors
		public Catalog();
	
		// Methods
		public string GetPluralFormsHeader();
		private static string GetDateTimeRfc822Format();
		private static void FormatMessageForFile(StringBuilder sb, string prefix, string message, string newlineChar);
		private void Clear();
		public void Load(string text, string fileName);
		private static string EnsureCorrectEndings(string reference, string text);
		private static void SaveMultiLines(StringBuilder sb, string text, string newLine);
		private static bool CanEncodeToCharset(string charset);
		private static Encoding GetEncoding(string charset);
		public bool Translate(string msgid, string context, string translation);
		public CatalogEntry FindItem(string msgid, string context);
		public bool Contains(string msgid, string context);
		public CatalogEntry FindItem(CatalogEntry entry);
		public CatalogEntry AddItem(string original, string plural);
		public void GetStatistics(out int all, out int fuzzy, out int missing, out int badtokens, out int untranslated);
		public void Append(Catalog catalog);
		public void AddItem(CatalogEntry data);
		public void RemoveItem(CatalogEntry data);
		public void AddDeletedItem(CatalogDeletedEntry data);
		public void RemoveDeletedItems();
		public void GetMergeSummary(Catalog refCat, out string[] newEntries, out string[] obsoleteEntries);
		protected virtual void OnDirtyChanged(EventArgs e);
		private void CreateNewHeaders();
		public void ParseHeaderString(string headers);
		public string GetHeaderString(string lineDelimeter);
		public string GetHeaderString();
		public void UpdateHeaderDict();
		private void ParseHeaderDict();
		public string GetHeader(string key);
		public bool HasHeader(string key);
		public void SetHeader(string key, string value);
		public void SetHeaderNotEmpty(string key, string value);
		public void DeleteHeader(string key);
		public IEnumerator<CatalogEntry> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
	}
}
