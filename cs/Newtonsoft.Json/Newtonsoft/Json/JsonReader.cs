/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json.Serialization;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(2)]
	public abstract class JsonReader : IDisposable
	{
		// Fields
		private JsonToken _tokenType;
		private object _value;
		internal char _quoteChar;
		internal State _currentState;
		private JsonPosition _currentPosition;
		private CultureInfo _culture;
		private DateTimeZoneHandling _dateTimeZoneHandling;
		private int? _maxDepth;
		private bool _hasExceededMaxDepth;
		internal DateParseHandling _dateParseHandling;
		internal FloatParseHandling _floatParseHandling;
		private string _dateFormatString;
		private List<JsonPosition> _stack;
		[CompilerGenerated]
		private bool _CloseInput_k__BackingField;
		[CompilerGenerated]
		private bool _SupportMultipleContent_k__BackingField;
	
		// Properties
		protected State CurrentState { get; }
		public bool CloseInput { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool SupportMultipleContent { [CompilerGenerated] get; [CompilerGenerated] set; }
		public DateTimeZoneHandling DateTimeZoneHandling { get; set; }
		public DateParseHandling DateParseHandling { get; set; }
		public FloatParseHandling FloatParseHandling { get; set; }
		public string DateFormatString { get; set; }
		public int? MaxDepth { get; set; }
		public virtual JsonToken TokenType { get; }
		public virtual object Value { get; }
		public virtual System.Type ValueType { get; }
		public virtual int Depth { get; }
		[Nullable(1)]
		public virtual string Path { [NullableContext(1)] get; }
		[Nullable(1)]
		public CultureInfo Culture { [NullableContext(1)] get; [NullableContext(1)] set; }
	
		// Nested types
		[NullableContext(0)]
		protected internal enum State
		{
			Start = 0,
			Complete = 1,
			Property = 2,
			ObjectStart = 3,
			Object = 4,
			ArrayStart = 5,
			Array = 6,
			Closed = 7,
			PostValue = 8,
			ConstructorStart = 9,
			Constructor = 10,
			Error = 11,
			Finished = 12
		}
	
		// Constructors
		protected JsonReader();
	
		// Methods
		internal JsonPosition GetPosition(int depth);
		private void Push(JsonContainerType value);
		private JsonContainerType Pop();
		private JsonContainerType Peek();
		public abstract bool Read();
		public virtual int? ReadAsInt32();
		internal int? ReadInt32String(string s);
		public virtual string ReadAsString();
		public virtual byte[] ReadAsBytes();
		[NullableContext(1)]
		internal byte[] ReadArrayIntoByteArray();
		[NullableContext(1)]
		private bool ReadArrayElementIntoByteArrayReportDone(List<byte> buffer);
		public virtual double? ReadAsDouble();
		internal double? ReadDoubleString(string s);
		public virtual bool? ReadAsBoolean();
		internal bool? ReadBooleanString(string s);
		public virtual decimal? ReadAsDecimal();
		internal decimal? ReadDecimalString(string s);
		public virtual System.DateTime? ReadAsDateTime();
		internal System.DateTime? ReadDateTimeString(string s);
		public virtual DateTimeOffset? ReadAsDateTimeOffset();
		internal DateTimeOffset? ReadDateTimeOffsetString(string s);
		internal void ReaderReadAndAssert();
		[NullableContext(1)]
		internal JsonReaderException CreateUnexpectedEndException();
		internal void ReadIntoWrappedTypeObject();
		public void Skip();
		protected void SetToken(JsonToken newToken);
		protected void SetToken(JsonToken newToken, object value);
		protected void SetToken(JsonToken newToken, object value, bool updateIndex);
		internal void SetPostValueState(bool updateIndex);
		private void UpdateScopeWithFinishedValue();
		private void ValidateEnd(JsonToken endToken);
		protected void SetStateBasedOnCurrent();
		private void SetFinished();
		private JsonContainerType GetTypeForCloseToken(JsonToken token);
		void IDisposable.Dispose();
		protected virtual void Dispose(bool disposing);
		public virtual void Close();
		internal void ReadAndAssert();
		internal void ReadForTypeAndAssert(JsonContract contract, bool hasConverter);
		internal bool ReadForType(JsonContract contract, bool hasConverter);
		internal bool ReadAndMoveToContent();
		internal bool MoveToContent();
		private JsonToken GetContentToken();
	}
}
