/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 16: Assembly-CSharp-firstpass.dll - Assembly: Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: CompilationRelaxations(8)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace CodeStage.AntiCheat.ObscuredTypes
{
	[Serializable]
	public struct ObscuredByte : IEquatable<CodeStage.AntiCheat.ObscuredTypes.ObscuredByte>, IFormattable
	{
		// Fields
		private static byte cryptoKey;
		private byte currentCryptoKey;
		private byte hiddenValue;
		private byte fakeValue;
		private bool inited;
	
		// Constructors
		private ObscuredByte(byte value);
		static ObscuredByte();
	
		// Methods
		public static void SetNewCryptoKey(byte newKey);
		public static byte EncryptDecrypt(byte value);
		public static byte EncryptDecrypt(byte value, byte key);
		public void ApplyNewCryptoKey();
		public void RandomizeCryptoKey();
		public byte GetEncrypted();
		public void SetEncrypted(byte encrypted);
		public byte GetDecrypted();
		private byte InternalDecrypt();
		public static implicit operator ObscuredByte(byte value);
		public static implicit operator byte(ObscuredByte value);
		public static ObscuredByte operator ++(ObscuredByte input);
		public static ObscuredByte operator --(ObscuredByte input);
		public override bool Equals(object obj);
		public bool Equals(ObscuredByte obj);
		public override string ToString();
		public string ToString(string format);
		public override int GetHashCode();
		public string ToString(IFormatProvider provider);
		public string ToString(string format, IFormatProvider provider);
	}
}
