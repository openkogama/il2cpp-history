/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class SerializableDictionary<SerializedKeyType, SerializedValueType> : ISerializationCallbackReceiver
	{
		// Fields
		private Dictionary<SerializedKeyType, SerializedValueType> _dictionary;
		[SerializeField]
		private List<SerializedKeyType> _serializedKeys;
		[SerializeField]
		private List<SerializedValueType> _serializedValues;
	
		// Properties
		public Dictionary<SerializedKeyType, SerializedValueType> Dictionary { get; }
		public SerializedValueType this[SerializedKeyType index] { get => default; set {} }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c<SerializedKeyType, SerializedValueType> __9;
			public static Func<KeyValuePair<SerializedKeyType, SerializedValueType>, bool> __9__14_0;
			public static Func<KeyValuePair<SerializedKeyType, SerializedValueType>, SerializedKeyType> __9__14_1;
			public static Func<KeyValuePair<SerializedKeyType, SerializedValueType>, SerializedValueType> __9__14_2;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal bool _RemoveNullKeys_b__14_0(KeyValuePair<SerializedKeyType, SerializedValueType> keyValuePair);
			internal SerializedKeyType _RemoveNullKeys_b__14_1(KeyValuePair<SerializedKeyType, SerializedValueType> keyValuePair);
			internal SerializedValueType _RemoveNullKeys_b__14_2(KeyValuePair<SerializedKeyType, SerializedValueType> keyValuePair);
		}
	
		// Constructors
		public SerializableDictionary();
	
		// Methods
		public void OnBeforeSerialize();
		public void OnAfterDeserialize();
		public void Clear();
		public void Add(SerializedKeyType key, SerializedValueType value);
		public bool ContainsKey(SerializedKeyType key);
		public void Copy(SerializableDictionary<SerializedKeyType, SerializedValueType> other);
		public void RemoveNullKeys();
	}
}
