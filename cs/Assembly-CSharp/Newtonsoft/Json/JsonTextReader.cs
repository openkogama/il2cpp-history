/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Utilities;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public class JsonTextReader : JsonReader, IJsonLineInfo
	{
		// Fields
		private readonly TextReader _reader;
		private readonly StringBuffer _buffer;
		private char? _lastChar;
		private int _currentLinePosition;
		private int _currentLineNumber;
		private bool _end;
		private ReadType _readType;
		private CultureInfo _culture;
		private const int LineFeedValue = 10;
		private const int CarriageReturnValue = 13;
	
		// Properties
		public CultureInfo Culture { get; set; }
		public int LineNumber { get; }
		public int LinePosition { get; }
	
		// Nested types
		private enum ReadType
		{
			Read = 0,
			ReadAsBytes = 1,
			ReadAsDecimal = 2,
			ReadAsDateTimeOffset = 3
		}
	
		// Constructors
		public JsonTextReader(TextReader reader);
	
		// Methods
		private void ParseString(char quote);
		private void ReadStringIntoBuffer(char quote);
		private JsonReaderException CreateJsonReaderException(string format, params object[] args);
		private TimeSpan ReadOffset(string offsetText);
		private void ParseDate(string text);
		private char MoveNext();
		private bool HasNext();
		private int PeekNext();
		public override bool Read();
		public override byte[] ReadAsBytes();
		public override decimal? ReadAsDecimal();
		public override DateTimeOffset? ReadAsDateTimeOffset();
		private bool ReadInternal();
		private bool ParsePostValue(char currentChar);
		private bool ParseObject(char currentChar);
		private bool ParseProperty(char firstChar);
		private bool ValidIdentifierChar(char value);
		private char ParseUnquotedProperty(char firstChar);
		private bool ParseValue(char currentChar);
		private bool EatWhitespace(char initialChar, bool oneOrMore, out char finalChar);
		private void ParseConstructor();
		private void ParseNumber(char firstChar);
		private void ParseComment();
		private bool MatchValue(char firstChar, string value);
		private bool MatchValue(char firstChar, string value, bool noTrailingNonSeperatorCharacters);
		private bool IsSeperator(char c);
		private void ParseTrue();
		private void ParseNull();
		private void ParseUndefined();
		private void ParseFalse();
		private void ParseNumberNegativeInfinity();
		private void ParseNumberPositiveInfinity();
		private void ParseNumberNaN();
		public override void Close();
		public bool HasLineInfo();
	}
}
