/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.AntiCheat
{
	public class FileData
	{
		// Fields
		public List<byte> name;
		public uint crc;
	
		// Constructors
		public FileData(byte[] name, uint crc);
	
		// Methods
		public string NameAsString();
		public override bool Equals(object obj);
		public override int GetHashCode();
		public override string ToString();
	}
}
