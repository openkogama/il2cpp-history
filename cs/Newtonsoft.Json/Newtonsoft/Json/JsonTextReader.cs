/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Globalization;
using System.IO;
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
	public class JsonTextReader : JsonReader, IJsonLineInfo
	{
		// Fields
		private readonly bool _safeAsync;
		private readonly TextReader _reader;
		[Nullable(2)]
		private char[] _chars;
		private int _charsUsed;
		private int _charPos;
		private int _lineStartPos;
		private int _lineNumber;
		private bool _isEndOfFile;
		private StringBuffer _stringBuffer;
		private StringReference _stringReference;
		[Nullable(2)]
		private IArrayPool<char> _arrayPool;
		[CompilerGenerated]
		[Nullable(2)]
		private JsonNameTable _PropertyNameTable_k__BackingField;
	
		// Properties
		[Nullable(2)]
		public JsonNameTable PropertyNameTable { [NullableContext(2)] [CompilerGenerated] get; [NullableContext(2)] [CompilerGenerated] set; }
		public int LineNumber { get; }
		public int LinePosition { get; }
	
		// Constructors
		public JsonTextReader(TextReader reader);
	
		// Methods
		private void EnsureBufferNotEmpty();
		private void SetNewLine(bool hasNextChar);
		private void OnNewLine(int pos);
		private void ParseString(char quote, ReadType readType);
		private void ParseReadString(char quote, ReadType readType);
		private static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count);
		private void ShiftBufferIfNeeded();
		private int ReadData(bool append);
		private void PrepareBufferForReadData(bool append, int charsRequired);
		private int ReadData(bool append, int charsRequired);
		private bool EnsureChars(int relativePosition, bool append);
		private bool ReadChars(int relativePosition, bool append);
		public override bool Read();
		public override int? ReadAsInt32();
		public override System.DateTime? ReadAsDateTime();
		[NullableContext(2)]
		public override string ReadAsString();
		[NullableContext(2)]
		public override byte[] ReadAsBytes();
		[NullableContext(2)]
		private object ReadStringValue(ReadType readType);
		[NullableContext(2)]
		private object FinishReadQuotedStringValue(ReadType readType);
		private JsonReaderException CreateUnexpectedCharacterException(char c);
		public override bool? ReadAsBoolean();
		private void ProcessValueComma();
		[NullableContext(2)]
		private object ReadNumberValue(ReadType readType);
		[NullableContext(2)]
		private object FinishReadQuotedNumber(ReadType readType);
		public override DateTimeOffset? ReadAsDateTimeOffset();
		public override decimal? ReadAsDecimal();
		public override double? ReadAsDouble();
		private void HandleNull();
		private void ReadFinished();
		private bool ReadNullChar();
		private void EnsureBuffer();
		private void ReadStringIntoBuffer(char quote);
		private void FinishReadStringIntoBuffer(int charPos, int initialPosition, int lastWritePosition);
		private void WriteCharToBuffer(char writeChar, int lastWritePosition, int writeToPosition);
		private char ConvertUnicode(bool enoughChars);
		private char ParseUnicode();
		private void ReadNumberIntoBuffer();
		private bool ReadNumberCharIntoBuffer(char currentChar, int charPos);
		private void ClearRecentString();
		private bool ParsePostValue(bool ignoreComments);
		private bool ParseObject();
		private bool ParseProperty();
		private bool ValidIdentifierChar(char value);
		private void ParseUnquotedProperty();
		private bool ReadUnquotedPropertyReportIfDone(char currentChar, int initialPosition);
		private bool ParseValue();
		private void ProcessLineFeed();
		private void ProcessCarriageReturn(bool append);
		private void EatWhitespace();
		private void ParseConstructor();
		private void ParseNumber(ReadType readType);
		private void ParseReadNumber(ReadType readType, char firstChar, int initialPosition);
		private JsonReaderException ThrowReaderError(string message, [Nullable(2)] Exception ex = null);
		private static object BigIntegerParse(string number, CultureInfo culture);
		private void ParseComment(bool setToken);
		private void EndComment(bool setToken, int initialPosition, int endPosition);
		private bool MatchValue(string value);
		private bool MatchValue(bool enoughChars, string value);
		private bool MatchValueWithTrailingSeparator(string value);
		private bool IsSeparator(char c);
		private void ParseTrue();
		private void ParseNull();
		private void ParseUndefined();
		private void ParseFalse();
		private object ParseNumberNegativeInfinity(ReadType readType);
		private object ParseNumberNegativeInfinity(ReadType readType, bool matched);
		private object ParseNumberPositiveInfinity(ReadType readType);
		private object ParseNumberPositiveInfinity(ReadType readType, bool matched);
		private object ParseNumberNaN(ReadType readType);
		private object ParseNumberNaN(ReadType readType, bool matched);
		public override void Close();
		public bool HasLineInfo();
	}
}
