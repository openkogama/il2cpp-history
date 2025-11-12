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
using Newtonsoft.Json.Utilities;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(1)]
	public abstract class JsonWriter : IDisposable
	{
		// Fields
		private static readonly State[][] StateArray;
		internal static readonly State[][] StateArrayTemplate;
		[Nullable(2)]
		private List<JsonPosition> _stack;
		private JsonPosition _currentPosition;
		private State _currentState;
		private Formatting _formatting;
		[CompilerGenerated]
		private bool _CloseOutput_k__BackingField;
		[CompilerGenerated]
		private bool _AutoCompleteOnClose_k__BackingField;
		private DateFormatHandling _dateFormatHandling;
		private DateTimeZoneHandling _dateTimeZoneHandling;
		private StringEscapeHandling _stringEscapeHandling;
		private FloatFormatHandling _floatFormatHandling;
		[Nullable(2)]
		private string _dateFormatString;
		[Nullable(2)]
		private CultureInfo _culture;
	
		// Properties
		public bool CloseOutput { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool AutoCompleteOnClose { [CompilerGenerated] get; [CompilerGenerated] set; }
		protected internal int Top { get; }
		public WriteState WriteState { get; }
		internal string ContainerPath { get; }
		public string Path { get; }
		public Formatting Formatting { get; set; }
		public DateFormatHandling DateFormatHandling { get; set; }
		public DateTimeZoneHandling DateTimeZoneHandling { get; set; }
		public StringEscapeHandling StringEscapeHandling { get; set; }
		public FloatFormatHandling FloatFormatHandling { get; set; }
		[Nullable(2)]
		public string DateFormatString { [NullableContext(2)] get; [NullableContext(2)] set; }
		public CultureInfo Culture { get; set; }
	
		// Nested types
		[NullableContext(0)]
		internal enum State
		{
			Start = 0,
			Property = 1,
			ObjectStart = 2,
			Object = 3,
			ArrayStart = 4,
			Array = 5,
			ConstructorStart = 6,
			Constructor = 7,
			Closed = 8,
			Error = 9
		}
	
		// Constructors
		static JsonWriter();
		protected JsonWriter();
	
		// Methods
		internal static State[][] BuildStateArray();
		internal virtual void OnStringEscapeHandlingChanged();
		internal void UpdateScopeWithFinishedValue();
		private void Push(JsonContainerType value);
		private JsonContainerType Pop();
		private JsonContainerType Peek();
		public virtual void Close();
		public virtual void WriteStartObject();
		public virtual void WriteEndObject();
		public virtual void WriteStartArray();
		public virtual void WriteEndArray();
		public virtual void WriteStartConstructor(string name);
		public virtual void WriteEndConstructor();
		public virtual void WritePropertyName(string name);
		public virtual void WritePropertyName(string name, bool escape);
		public virtual void WriteEnd();
		public void WriteToken(JsonReader reader);
		public void WriteToken(JsonReader reader, bool writeChildren);
		[NullableContext(2)]
		public void WriteToken(JsonToken token, object value);
		internal virtual void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments);
		private bool IsWriteTokenIncomplete(JsonReader reader, bool writeChildren, int initialDepth);
		private int CalculateWriteTokenInitialDepth(JsonReader reader);
		private int CalculateWriteTokenFinalDepth(JsonReader reader);
		private void WriteConstructorDate(JsonReader reader);
		private void WriteEnd(JsonContainerType type);
		private void AutoCompleteAll();
		private JsonToken GetCloseTokenForType(JsonContainerType type);
		private void AutoCompleteClose(JsonContainerType type);
		private int CalculateLevelsToComplete(JsonContainerType type);
		private void UpdateCurrentState();
		protected virtual void WriteEnd(JsonToken token);
		protected virtual void WriteIndent();
		protected virtual void WriteValueDelimiter();
		protected virtual void WriteIndentSpace();
		internal void AutoComplete(JsonToken tokenBeingWritten);
		public virtual void WriteNull();
		public virtual void WriteUndefined();
		[NullableContext(2)]
		public virtual void WriteRaw(string json);
		[NullableContext(2)]
		public virtual void WriteRawValue(string json);
		[NullableContext(2)]
		public virtual void WriteValue(string value);
		public virtual void WriteValue(int value);
		[CLSCompliant(false)]
		public virtual void WriteValue(uint value);
		public virtual void WriteValue(long value);
		[CLSCompliant(false)]
		public virtual void WriteValue(ulong value);
		public virtual void WriteValue(float value);
		public virtual void WriteValue(double value);
		public virtual void WriteValue(bool value);
		public virtual void WriteValue(short value);
		[CLSCompliant(false)]
		public virtual void WriteValue(ushort value);
		public virtual void WriteValue(char value);
		public virtual void WriteValue(byte value);
		[CLSCompliant(false)]
		public virtual void WriteValue(sbyte value);
		public virtual void WriteValue(decimal value);
		public virtual void WriteValue(System.DateTime value);
		public virtual void WriteValue(DateTimeOffset value);
		public virtual void WriteValue(Guid value);
		public virtual void WriteValue(TimeSpan value);
		public virtual void WriteValue(int? value);
		[CLSCompliant(false)]
		public virtual void WriteValue(uint? value);
		public virtual void WriteValue(long? value);
		[CLSCompliant(false)]
		public virtual void WriteValue(ulong? value);
		public virtual void WriteValue(float? value);
		public virtual void WriteValue(double? value);
		public virtual void WriteValue(bool? value);
		public virtual void WriteValue(short? value);
		[CLSCompliant(false)]
		public virtual void WriteValue(ushort? value);
		public virtual void WriteValue(char? value);
		public virtual void WriteValue(byte? value);
		[CLSCompliant(false)]
		public virtual void WriteValue(sbyte? value);
		public virtual void WriteValue(decimal? value);
		public virtual void WriteValue(System.DateTime? value);
		public virtual void WriteValue(DateTimeOffset? value);
		public virtual void WriteValue(Guid? value);
		public virtual void WriteValue(TimeSpan? value);
		[NullableContext(2)]
		public virtual void WriteValue(byte[] value);
		[NullableContext(2)]
		public virtual void WriteValue(System.Uri value);
		[NullableContext(2)]
		public virtual void WriteValue(object value);
		[NullableContext(2)]
		public virtual void WriteComment(string text);
		void IDisposable.Dispose();
		protected virtual void Dispose(bool disposing);
		internal static void WriteValue(JsonWriter writer, PrimitiveTypeCode typeCode, object value);
		private static void ResolveConvertibleValue(IConvertible convertible, out PrimitiveTypeCode typeCode, out object value);
		private static JsonWriterException CreateUnsupportedTypeException(JsonWriter writer, object value);
		protected void SetWriteState(JsonToken token, object value);
		internal void InternalWriteEnd(JsonContainerType container);
		internal void InternalWritePropertyName(string name);
		internal void InternalWriteRaw();
		internal void InternalWriteStart(JsonToken token, JsonContainerType container);
		internal void InternalWriteValue(JsonToken token);
		internal void InternalWriteComment();
	}
}
