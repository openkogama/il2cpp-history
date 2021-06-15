/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Linq;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public abstract class JsonReader : IDisposable
	{
		// Fields
		private JsonToken _token;
		private object _value;
		private Type _valueType;
		private char _quoteChar;
		private State _currentState;
		private JTokenType _currentTypeContext;
		private int _top;
		private readonly List<JTokenType> _stack;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _CloseInput_k__BackingField;
	
		// Properties
		protected State CurrentState { get; }
		public bool CloseInput { [CompilerGenerated] get; [CompilerGenerated] set; }
		public virtual char QuoteChar { get; protected internal set; }
		public virtual JsonToken TokenType { get; }
		public virtual object Value { get; }
		public virtual Type ValueType { get; }
		public virtual int Depth { get; }
	
		// Nested types
		protected enum State
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
		private void Push(JTokenType value);
		private JTokenType Pop();
		private JTokenType Peek();
		public abstract bool Read();
		public abstract byte[] ReadAsBytes();
		public abstract decimal? ReadAsDecimal();
		public abstract DateTimeOffset? ReadAsDateTimeOffset();
		public void Skip();
		protected void SetToken(JsonToken newToken);
		protected virtual void SetToken(JsonToken newToken, object value);
		private void ValidateEnd(JsonToken endToken);
		protected void SetStateBasedOnCurrent();
		internal static bool IsPrimitiveToken(JsonToken token);
		internal static bool IsStartToken(JsonToken token);
		private JTokenType GetTypeForCloseToken(JsonToken token);
		void IDisposable.Dispose();
		protected virtual void Dispose(bool disposing);
		public virtual void Close();
	}
}
