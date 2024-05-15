/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public class BytePacker
	{
		// Fields
		private const int MaxCapacity = 2147483647;
		private const int DefaultCapacity = 32;
		private List<byte> _buffer;
		private int _position;
	
		// Properties
		public int Length { get; }
		public int Position { get; set; }
	
		// Constructors
		public BytePacker();
		public BytePacker(byte[] buffer);
	
		// Methods
		internal int Read7BitEncodedInt();
		public byte[] ToArray();
		public void Write(byte value);
		public void Write(byte[] buffer);
		public void Write(byte[] buffer, int index, int count);
		public void Write(ushort value);
		public void Write(short value);
		public void Write(uint value);
		public void Write(int value);
		public void Write(float value);
		public byte ReadByte();
		public byte[] ReadBytes(int count);
		public bool ReadBoolean();
		public ushort ReadUInt16();
		public short ReadInt16();
		public int ReadInt32();
		public ulong ReadUInt64();
		public long ReadInt64();
		public float ReadSingle();
		public string ReadString();
	}
}
