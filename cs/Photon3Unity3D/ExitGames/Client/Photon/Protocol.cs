/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class Protocol
	{
		// Fields
		internal static readonly Dictionary<System.Type, CustomType> TypeDict;
		internal static readonly Dictionary<byte, CustomType> CodeDict;
		private static IProtocol ProtocolDefault;
		private static readonly float[] memFloatBlock;
		private static readonly byte[] memDeserialize;
	
		// Constructors
		public Protocol();
		static Protocol();
	
		// Methods
		public static bool TryRegisterType(System.Type type, byte typeCode, SerializeMethod serializeFunction, DeserializeMethod deserializeFunction);
		public static bool TryRegisterType(System.Type type, byte typeCode, SerializeStreamMethod serializeFunction, DeserializeStreamMethod deserializeFunction);
		[Obsolete]
		public static byte[] Serialize(object obj);
		[Obsolete]
		public static object Deserialize(byte[] serializedData);
		public static void Serialize(short value, byte[] target, ref int targetOffset);
		public static void Serialize(int value, byte[] target, ref int targetOffset);
		public static void Serialize(float value, byte[] target, ref int targetOffset);
		public static void Deserialize(out int value, byte[] source, ref int offset);
		public static void Deserialize(out short value, byte[] source, ref int offset);
		public static void Deserialize(out float value, byte[] source, ref int offset);
	}
}
