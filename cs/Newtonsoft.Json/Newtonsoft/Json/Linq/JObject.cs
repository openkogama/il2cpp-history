/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Dynamic;
using System.Linq.Expressions;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JObject : JContainer, IDictionary<string, JToken>, ICustomTypeDescriptor
	{
		// Fields
		private readonly JPropertyKeyedCollection _properties;
		[CompilerGenerated]
		[Nullable(2)]
		private PropertyChangedEventHandler PropertyChanged;
		[CompilerGenerated]
		[Nullable(2)]
		private PropertyChangingEventHandler PropertyChanging;
	
		// Properties
		protected override IList<JToken> ChildrenTokens { get; }
		public override JTokenType Type { get; }
		[Nullable(2)]
		public JToken this[string propertyName] { get => default; set {} }
		ICollection<string> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.Keys { get; }
		[Nullable(new byte[2] {1, 2 })]
		ICollection<JToken> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.Values { get; }
		bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.IsReadOnly { get; }
	
		// Nested types
		[Nullable(new byte[2] {0, 1 })]
		private class JObjectDynamicProxy : DynamicProxy<JObject>
		{
			// Nested types
			[Serializable]
			[CompilerGenerated]
			private sealed class __c
			{
				// Fields
				[Nullable(0)]
				public static readonly __c __9;
				[Nullable(0)]
				public static Func<JProperty, string> __9__2_0;
	
				// Constructors
				static __c();
				public __c();
	
				// Methods
				[NullableContext(0)]
				internal string _GetDynamicMemberNames_b__2_0(JProperty p);
			}
	
			// Constructors
			public JObjectDynamicProxy();
	
			// Methods
			public override bool TryGetMember(JObject instance, GetMemberBinder binder, [Nullable(2)] out object result);
			public override bool TrySetMember(JObject instance, SetMemberBinder binder, object value);
			public override IEnumerable<string> GetDynamicMemberNames(JObject instance);
		}
	
		[CompilerGenerated]
		private sealed class _GetEnumerator_d__64 : IEnumerator<KeyValuePair<string, JToken>>
		{
			// Fields
			private int __1__state;
			[Nullable(new byte[3] {0, 1, 2 })]
			private KeyValuePair<string, JToken> __2__current;
			[Nullable(0)]
			public JObject __4__this;
			[Nullable(new byte[2] {0, 1 })]
			private IEnumerator<JToken> __7__wrap1;
	
			// Properties
			KeyValuePair<string, JToken> IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _GetEnumerator_d__64(int __1__state);
	
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
		internal JObject(JObject other, [Nullable(2)] JsonCloneSettings settings);
	
		// Methods
		[NullableContext(2)]
		internal override int IndexOfItem(JToken item);
		[NullableContext(2)]
		internal override bool InsertItem(int index, JToken item, bool skipParentCheck, bool copyAnnotations);
		internal override void ValidateToken(JToken o, [Nullable(2)] JToken existing);
		internal void InternalPropertyChanged(JProperty childProperty);
		internal void InternalPropertyChanging(JProperty childProperty);
		internal override JToken CloneToken([Nullable(2)] JsonCloneSettings settings);
		public IEnumerable<JProperty> Properties();
		public JProperty Property(string name, StringComparison comparison);
		public static JObject Load(JsonReader reader, [Nullable(2)] JsonLoadSettings settings);
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		public void Add(string propertyName, [Nullable(2)] JToken value);
		public bool ContainsKey(string propertyName);
		public bool Remove(string propertyName);
		public bool TryGetValue(string propertyName, [Nullable(2)] [NotNullWhen(true)] out JToken value);
		void ICollection<KeyValuePair<string, JToken>>.Add([Nullable(new byte[3] {0, 1, 2 })] KeyValuePair<string, JToken> item);
		void ICollection<KeyValuePair<string, JToken>>.Clear();
		bool ICollection<KeyValuePair<string, JToken>>.Contains([Nullable(new byte[3] {0, 1, 2 })] KeyValuePair<string, JToken> item);
		void ICollection<KeyValuePair<string, JToken>>.CopyTo([Nullable(new byte[4] {1, 0, 1, 2 })] KeyValuePair<string, JToken>[] array, int arrayIndex);
		bool ICollection<KeyValuePair<string, JToken>>.Remove([Nullable(new byte[3] {0, 1, 2 })] KeyValuePair<string, JToken> item);
		[IteratorStateMachine(typeof(_GetEnumerator_d__64))]
		public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator();
		protected virtual void OnPropertyChanged(string propertyName);
		protected virtual void OnPropertyChanging(string propertyName);
		PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties();
		PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties([Nullable(new byte[2] {2, 1 })] Attribute[] attributes);
		AttributeCollection ICustomTypeDescriptor.GetAttributes();
		TypeConverter ICustomTypeDescriptor.GetConverter();
		[NullableContext(2)]
		object ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd);
		protected override DynamicMetaObject GetMetaObject(System.Linq.Expressions.Expression parameter);
	}
}
