/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[DefaultMember("Item")]
	[Nullable(new byte[2] {0, 1 })]
	[NullableContext(1)]
	internal class JPropertyKeyedCollection : Collection<Newtonsoft.Json.Linq.JToken>
	{
		// Fields
		private static readonly IEqualityComparer<string> Comparer;
		[Nullable(new byte[3] {2, 1, 1 })]
		private Dictionary<string, JToken> _dictionary;
	
		// Properties
		public ICollection<string> Keys { get; }
	
		// Constructors
		public JPropertyKeyedCollection();
		static JPropertyKeyedCollection();
	
		// Methods
		private void AddKey(string key, JToken item);
		protected override void ClearItems();
		public bool Contains(string key);
		private void EnsureDictionary();
		private string GetKeyForItem(JToken item);
		protected override void InsertItem(int index, JToken item);
		protected override void RemoveItem(int index);
		private void RemoveKey(string key);
		protected override void SetItem(int index, JToken item);
		public bool TryGetValue(string key, [Nullable(2)] [NotNullWhen(true)] out JToken value);
		public int IndexOfReference(JToken t);
	}
}
