/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Bson
{
	public class BsonReader : JsonReader
	{
		// Fields
		private const int MaxCharBytesSize = 128;
		private static readonly byte[] _seqRange1;
		private static readonly byte[] _seqRange2;
		private static readonly byte[] _seqRange3;
		private static readonly byte[] _seqRange4;
		private readonly BinaryReader _reader;
		private readonly List<ContainerContext> _stack;
		private byte[] _byteBuffer;
		private char[] _charBuffer;
		private BsonType _currentElementType;
		private BsonReaderState _bsonReaderState;
		private ContainerContext _currentContext;
		private bool _readRootValueAsArray;
		private bool _jsonNet35BinaryCompatibility;
		private DateTimeKind _dateTimeKindHandling;
	
		// Properties
		public bool JsonNet35BinaryCompatibility { get; set; }
		public bool ReadRootValueAsArray { get; set; }
		public DateTimeKind DateTimeKindHandling { get; set; }
	
		// Nested types
		private enum BsonReaderState
		{
			Normal = 0,
			ReferenceStart = 1,
			ReferenceRef = 2,
			ReferenceId = 3,
			CodeWScopeStart = 4,
			CodeWScopeCode = 5,
			CodeWScopeScope = 6,
			CodeWScopeScopeObject = 7,
			CodeWScopeScopeEnd = 8
		}
	
		private class ContainerContext
		{
			// Fields
			public readonly BsonType Type;
			public int Length;
			public int Position;
	
			// Constructors
			public ContainerContext(BsonType type);
		}
	
		// Constructors
		public BsonReader(Stream stream);
		public BsonReader(Stream stream, bool readRootValueAsArray, DateTimeKind dateTimeKindHandling);
		static BsonReader();
	
		// Methods
		private string ReadElement();
		public override byte[] ReadAsBytes();
		public override decimal? ReadAsDecimal();
		public override DateTimeOffset? ReadAsDateTimeOffset();
		public override bool Read();
		public override void Close();
		private bool ReadCodeWScope();
		private bool ReadReference();
		private bool ReadNormal();
		private void PopContext();
		private void PushContext(ContainerContext newContext);
		private byte ReadByte();
		private void ReadType(BsonType type);
		private byte[] ReadBinary();
		private string ReadString();
		private string ReadLengthString();
		private string GetString(int length);
		private int GetLastFullCharStop(int start);
		private int BytesInSequence(byte b);
		private void EnsureBuffers();
		private double ReadDouble();
		private int ReadInt32();
		private long ReadInt64();
		private BsonType ReadType();
		private void MovePosition(int count);
		private byte[] ReadBytes(int count);
	}
}
