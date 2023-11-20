/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 12: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class StreamBuffer
	{
		// Fields
		private const int DefaultInitialSize = 0;
		private int pos;
		private int len;
		private byte[] buf;
	
		// Properties
		public int Length { get; }
		public int Position { get; set; }
	
		// Constructors
		public StreamBuffer(int size = 0);
		public StreamBuffer(byte[] buf);
	
		// Methods
		public byte[] ToArray();
		public byte[] ToArrayFromPos();
		public void Compact();
		public byte[] GetBuffer();
		public byte[] GetBufferAndAdvance(int length, out int offset);
		public long Seek(long offset, SeekOrigin origin);
		public void SetLength(long value);
		public void SetCapacityMinimum(int neededSize);
		public int Read(byte[] buffer, int offset, int count);
		public void Write(byte[] buffer, int srcOffset, int count);
		public byte ReadByte();
		public void WriteByte(byte value);
		public void WriteBytes(byte v0, byte v1);
		private bool CheckSize(int size);
	}
}
