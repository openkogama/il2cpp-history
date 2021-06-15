/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JObject : JContainer, IDictionary<string, JToken>, INotifyPropertyChanged, ICustomTypeDescriptor
	{
		// Fields
		private JPropertKeyedCollection _properties;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private PropertyChangedEventHandler PropertyChanged;
		[CompilerGenerated]
		private static Func<JProperty, JToken> __f__am_cache0;
	
		// Properties
		ICollection<string> System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.Keys { get; }
		ICollection<JToken> System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.Values { get; }
		bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.IsReadOnly { get; }
		protected override IList<JToken> ChildrenTokens { get; }
		public override JTokenType Type { get; }
		public override JToken this[object key] { get => default; set {} }
		public JToken this[string propertyName] { get => default; set {} }
	
		// Events
		public event PropertyChangedEventHandler PropertyChanged {
			add;
			remove;
		}
	
		// Nested types
		public class JPropertKeyedCollection : KeyedCollection<string, JToken>
		{
			// Properties
			public new IDictionary<string, JToken> Dictionary { get; }
	
			// Constructors
			public JPropertKeyedCollection(IEqualityComparer<string> comparer);
	
			// Methods
			protected override string GetKeyForItem(JToken item);
			protected override void InsertItem(int index, JToken item);
		}
	
		[CompilerGenerated]
		private sealed class _GetEnumerator_c__Iterator0 : IEnumerator<KeyValuePair<string, JToken>>
		{
			// Fields
			internal IEnumerator<JToken> _locvar0;
			internal JProperty _property___1;
			internal JObject _this;
			internal KeyValuePair<string, JToken> _current;
			internal bool _disposing;
			internal int _PC;
	
			// Properties
			KeyValuePair<string, JToken> IEnumerator<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _GetEnumerator_c__Iterator0();
	
			// Methods
			public bool MoveNext();
			[DebuggerHidden]
			public void Dispose();
			[DebuggerHidden]
			public void Reset();
		}
	
		// Constructors
		public JObject();
		public JObject(JObject other);
		public JObject(params object[] content);
		public JObject(object content);
	
		// Methods
		internal override bool DeepEquals(JToken node);
		internal override void InsertItem(int index, JToken item);
		internal override void ValidateToken(JToken o, JToken existing);
		internal void InternalPropertyChanged(JProperty childProperty);
		internal void InternalPropertyChanging(JProperty childProperty);
		internal override JToken CloneToken();
		public IEnumerable<JProperty> Properties();
		public JProperty Property(string name);
		public JEnumerable<JToken> PropertyValues();
		public static new JObject Load(JsonReader reader);
		public static new JObject Parse(string json);
		public static new JObject FromObject(object o);
		public static new JObject FromObject(object o, JsonSerializer jsonSerializer);
		public override void WriteTo(JsonWriter writer, JsonConverter[] converters);
		public void Add(string propertyName, JToken value);
		bool System.Collections.Generic.IDictionary<string,Newtonsoft.Json.Linq.JToken>.ContainsKey(string key);
		public bool Remove(string propertyName);
		public bool TryGetValue(string propertyName, out JToken value);
		void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Add(KeyValuePair<string, JToken> item);
		void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Clear();
		bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Contains(KeyValuePair<string, JToken> item);
		void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.CopyTo(KeyValuePair<string, JToken>[] array, int arrayIndex);
		bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,Newtonsoft.Json.Linq.JToken>>.Remove(KeyValuePair<string, JToken> item);
		internal override int GetDeepHashCode();
		[DebuggerHidden]
		public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator();
		protected virtual void OnPropertyChanged(string propertyName);
		PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties();
		private static Type GetTokenPropertyType(JToken token);
		PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties(Attribute[] attributes);
		AttributeCollection ICustomTypeDescriptor.GetAttributes();
		string ICustomTypeDescriptor.GetClassName();
		string ICustomTypeDescriptor.GetComponentName();
		TypeConverter ICustomTypeDescriptor.GetConverter();
		EventDescriptor ICustomTypeDescriptor.GetDefaultEvent();
		PropertyDescriptor ICustomTypeDescriptor.GetDefaultProperty();
		object ICustomTypeDescriptor.GetEditor(Type editorBaseType);
		EventDescriptorCollection ICustomTypeDescriptor.GetEvents(Attribute[] attributes);
		EventDescriptorCollection ICustomTypeDescriptor.GetEvents();
		object ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd);
		[CompilerGenerated]
		private static JToken _PropertyValues_m__0(JProperty p);
	}
}
