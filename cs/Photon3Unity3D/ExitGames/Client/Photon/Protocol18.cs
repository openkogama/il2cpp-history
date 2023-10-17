/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class Protocol18 : IProtocol
	{
		// Fields
		private readonly byte[] versionBytes;
		private readonly byte[] memDouble;
		private static readonly byte[] boolMasks;
		private readonly double[] memDoubleBlock;
		private readonly float[] memFloatBlock;
		private readonly byte[] memFloat;
		private readonly byte[] memCustomTypeBodyLengthSerialized;
		private readonly byte[] memCompressedUInt32;
		private byte[] memCompressedUInt64;
	
		// Properties
		public override string ProtocolType { get; }
		public override byte[] VersionBytes { get; }
	
		// Nested types
		public enum GpType : byte
		{
			Unknown = 0,
			Boolean = 2,
			Byte = 3,
			Short = 4,
			Float = 5,
			Double = 6,
			String = 7,
			Null = 8,
			CompressedInt = 9,
			CompressedLong = 10,
			Int1 = 11,
			Int1_ = 12,
			Int2 = 13,
			Int2_ = 14,
			L1 = 15,
			L1_ = 16,
			L2 = 17,
			L2_ = 18,
			Custom = 19,
			Dictionary = 20,
			Hashtable = 21,
			ObjectArray = 23,
			OperationRequest = 24,
			OperationResponse = 25,
			EventData = 26,
			BooleanFalse = 27,
			BooleanTrue = 28,
			ShortZero = 29,
			IntZero = 30,
			LongZero = 31,
			FloatZero = 32,
			DoubleZero = 33,
			ByteZero = 34,
			Array = 64,
			BooleanArray = 66,
			ByteArray = 67,
			ShortArray = 68,
			FloatArray = 69,
			DoubleArray = 70,
			StringArray = 71,
			CompressedIntArray = 73,
			CompressedLongArray = 74,
			CustomTypeArray = 83,
			DictionaryArray = 84,
			HashtableArray = 85,
			CustomTypeSlim = 128
		}
	
		// Constructors
		public Protocol18();
		static Protocol18();
	
		// Methods
		public override void Serialize(StreamBuffer dout, object serObject, bool setType);
		public override void SerializeShort(StreamBuffer dout, short serObject, bool setType);
		public override void SerializeString(StreamBuffer dout, string serObject, bool setType);
		public override object Deserialize(StreamBuffer din, byte type);
		public override short DeserializeShort(StreamBuffer din);
		public override byte DeserializeByte(StreamBuffer din);
		private static System.Type GetAllowedDictionaryKeyTypes(GpType gpType);
		private static System.Type GetClrArrayType(GpType gpType);
		private GpType GetCodeOfType(System.Type type);
		private GpType GetCodeOfTypeCode(TypeCode type);
		private object Read(StreamBuffer stream);
		private object Read(StreamBuffer stream, byte gpType);
		internal bool ReadBoolean(StreamBuffer stream);
		internal byte ReadByte(StreamBuffer stream);
		internal short ReadInt16(StreamBuffer stream);
		internal ushort ReadUShort(StreamBuffer stream);
		internal int ReadInt32(StreamBuffer stream);
		internal long ReadInt64(StreamBuffer stream);
		internal float ReadSingle(StreamBuffer stream);
		internal double ReadDouble(StreamBuffer stream);
		internal byte[] ReadByteArray(StreamBuffer stream);
		public object ReadCustomType(StreamBuffer stream, byte gpType = 0);
		public override EventData DeserializeEventData(StreamBuffer din, EventData target = null);
		private Dictionary<byte, object> ReadParameterTable(StreamBuffer stream, Dictionary<byte, object> target = null);
		public Hashtable ReadHashtable(StreamBuffer stream);
		public int[] ReadIntArray(StreamBuffer stream);
		public override OperationRequest DeserializeOperationRequest(StreamBuffer din);
		public override OperationResponse DeserializeOperationResponse(StreamBuffer stream);
		internal string ReadString(StreamBuffer stream);
		private object ReadCustomTypeArray(StreamBuffer stream);
		private System.Type ReadDictionaryType(StreamBuffer stream, out GpType keyReadType, out GpType valueReadType);
		private System.Type ReadDictionaryType(StreamBuffer stream);
		private System.Type GetDictArrayType(StreamBuffer stream);
		private IDictionary ReadDictionary(StreamBuffer stream);
		private bool ReadDictionaryElements(StreamBuffer stream, GpType keyReadType, GpType valueReadType, IDictionary dictionary);
		private object[] ReadObjectArray(StreamBuffer stream);
		private bool[] ReadBooleanArray(StreamBuffer stream);
		internal short[] ReadInt16Array(StreamBuffer stream);
		private float[] ReadSingleArray(StreamBuffer stream);
		private double[] ReadDoubleArray(StreamBuffer stream);
		internal string[] ReadStringArray(StreamBuffer stream);
		private Hashtable[] ReadHashtableArray(StreamBuffer stream);
		private IDictionary[] ReadDictionaryArray(StreamBuffer stream);
		private Array ReadArrayInArray(StreamBuffer stream);
		internal int ReadInt1(StreamBuffer stream, bool signNegative);
		internal int ReadInt2(StreamBuffer stream, bool signNegative);
		internal int ReadCompressedInt32(StreamBuffer stream);
		private uint ReadCompressedUInt32(StreamBuffer stream);
		internal long ReadCompressedInt64(StreamBuffer stream);
		private ulong ReadCompressedUInt64(StreamBuffer stream);
		internal int[] ReadCompressedInt32Array(StreamBuffer stream);
		internal long[] ReadCompressedInt64Array(StreamBuffer stream);
		private int DecodeZigZag32(uint value);
		private long DecodeZigZag64(ulong value);
		internal void Write(StreamBuffer stream, object value, bool writeType);
		private void Write(StreamBuffer stream, object value, GpType gpType, bool writeType);
		public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType);
		private void WriteParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters);
		private void SerializeOperationRequest(StreamBuffer stream, OperationRequest serObject, bool setType);
		public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType);
		public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType);
		internal void WriteByte(StreamBuffer stream, byte value, bool writeType);
		internal void WriteBoolean(StreamBuffer stream, bool value, bool writeType);
		internal void WriteUShort(StreamBuffer stream, ushort value);
		internal void WriteInt16(StreamBuffer stream, short value, bool writeType);
		internal void WriteDouble(StreamBuffer stream, double value, bool writeType);
		internal void WriteSingle(StreamBuffer stream, float value, bool writeType);
		internal void WriteString(StreamBuffer stream, string value, bool writeType);
		private void WriteHashtable(StreamBuffer stream, object value, bool writeType);
		internal void WriteByteArray(StreamBuffer stream, byte[] value, bool writeType);
		private void WriteByteArraySegment(StreamBuffer stream, byte[] value, int offset, int count, bool writeType);
		internal void WriteInt32ArrayCompressed(StreamBuffer stream, int[] value, bool writeType);
		private void WriteInt64ArrayCompressed(StreamBuffer stream, long[] values, bool setType);
		internal void WriteBoolArray(StreamBuffer stream, bool[] value, bool writeType);
		internal void WriteInt16Array(StreamBuffer stream, short[] value, bool writeType);
		internal void WriteSingleArray(StreamBuffer stream, float[] values, bool setType);
		internal void WriteDoubleArray(StreamBuffer stream, double[] values, bool setType);
		internal void WriteStringArray(StreamBuffer stream, object value0, bool writeType);
		private void WriteObjectArray(StreamBuffer stream, object array, bool writeType);
		private void WriteObjectArray(StreamBuffer stream, IList array, bool writeType);
		private void WriteArrayInArray(StreamBuffer stream, object value, bool writeType);
		private void WriteCustomTypeBody(CustomType customType, StreamBuffer stream, object value);
		private void WriteCustomType(StreamBuffer stream, object value, bool writeType);
		private void WriteCustomTypeArray(StreamBuffer stream, object value, bool writeType);
		private bool WriteArrayHeader(StreamBuffer stream, System.Type type);
		private void WriteDictionaryElements(StreamBuffer stream, IDictionary dictionary, GpType keyWriteType, GpType valueWriteType);
		private void WriteDictionary(StreamBuffer stream, object dict, bool setType);
		private void WriteDictionaryHeader(StreamBuffer stream, System.Type type, out GpType keyWriteType, out GpType valueWriteType);
		private bool WriteArrayType(StreamBuffer stream, System.Type type, out GpType writeType);
		private void WriteHashtableArray(StreamBuffer stream, object value, bool writeType);
		private void WriteDictionaryArray(StreamBuffer stream, IDictionary[] dictArray, bool writeType);
		private void WriteIntLength(StreamBuffer stream, int value);
		private void WriteVarInt32(StreamBuffer stream, int value, bool writeType);
		private void WriteCompressedInt32(StreamBuffer stream, int value, bool writeType);
		private void WriteCompressedInt64(StreamBuffer stream, long value, bool writeType);
		private void WriteCompressedUInt32(StreamBuffer stream, uint value);
		private int WriteCompressedUInt32(byte[] buffer, uint value);
		private void WriteCompressedUInt64(StreamBuffer stream, ulong value);
		private uint EncodeZigZag32(int value);
		private ulong EncodeZigZag64(long value);
	}
}
