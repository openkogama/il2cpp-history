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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JObject : JContainer, IDictionary<string, JToken>, INotifyPropertyChanged, ICustomTypeDescriptor
	{
		// Fields
		private JPropertKeyedCollection _properties;
		[CompilerGenerated]
		private PropertyChangedEventHandler PropertyChanged;
	
		// Properties
		protected override IList<JToken> ChildrenTokens { get; }
		public override JTokenType Type { get; }
		public override JToken this[object key] { get => default; set {} }
		public JToken this[string propertyName] { get => default; set {} }
		ICollection<string> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.Keys { get; }
		ICollection<JToken> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.Values { get; }
		bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.IsReadOnly { get; }
	
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
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<JProperty, JToken> __9__21_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal JToken _PropertyValues_b__21_0(JProperty p);
		}
	
		[CompilerGenerated]
		private sealed class _GetEnumerator_d__49 : IEnumerator<KeyValuePair<string, JToken>>
		{
			// Fields
			private int __1__state;
			private KeyValuePair<string, JToken> __2__current;
			public JObject __4__this;
			private IEnumerator<JToken> __7__wrap1;
	
			// Properties
			KeyValuePair<string, JToken> IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _GetEnumerator_d__49(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			private void __m__Finally1();
			[DebuggerHidden]
			void IEnumerator.Reset();
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
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		public void Add(string propertyName, JToken value);
		bool IDictionary<string, JToken>.ContainsKey(string key);
		public bool Remove(string propertyName);
		public bool TryGetValue(string propertyName, out JToken value);
		void ICollection<KeyValuePair<string, JToken>>.Add(KeyValuePair<string, JToken> item);
		void ICollection<KeyValuePair<string, JToken>>.Clear();
		bool ICollection<KeyValuePair<string, JToken>>.Contains(KeyValuePair<string, JToken> item);
		void ICollection<KeyValuePair<string, JToken>>.CopyTo(KeyValuePair<string, JToken>[] array, int arrayIndex);
		bool ICollection<KeyValuePair<string, JToken>>.Remove(KeyValuePair<string, JToken> item);
		internal override int GetDeepHashCode();
		[IteratorStateMachine(typeof(_GetEnumerator_d__49))]
		public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator();
		protected virtual void OnPropertyChanged(string propertyName);
		PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties();
		private static System.Type GetTokenPropertyType(JToken token);
		PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties(Attribute[] attributes);
		AttributeCollection ICustomTypeDescriptor.GetAttributes();
		string ICustomTypeDescriptor.GetClassName();
		string ICustomTypeDescriptor.GetComponentName();
		TypeConverter ICustomTypeDescriptor.GetConverter();
		EventDescriptor ICustomTypeDescriptor.GetDefaultEvent();
		PropertyDescriptor ICustomTypeDescriptor.GetDefaultProperty();
		object ICustomTypeDescriptor.GetEditor(System.Type editorBaseType);
		EventDescriptorCollection ICustomTypeDescriptor.GetEvents(Attribute[] attributes);
		EventDescriptorCollection ICustomTypeDescriptor.GetEvents();
		object ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd);
	}
}
