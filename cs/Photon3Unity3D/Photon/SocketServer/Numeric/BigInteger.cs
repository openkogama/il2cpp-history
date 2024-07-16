/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 12: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Exit Games GmbH")]
[assembly: AssemblyConfiguration(".NET Framework 3.5")]
[assembly: AssemblyCopyright("(c) Exit Games GmbH, http://www.exitgames.com")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyTitle("Debug. Unity Mono compatible")]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.Default | DebuggableAttribute.DebuggingModes.DisableOptimizations | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints | DebuggableAttribute.DebuggingModes.EnableEditAndContinue)]
[assembly: Guid("177c1da7-4b4e-4209-8d90-9d8830e6e950")]
[assembly: InternalsVisibleTo("NUnit")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace Photon.SocketServer.Numeric
{
	internal class BigInteger
	{
		// Fields
		public static readonly int[] primesBelow2000;
		private uint[] data;
		public int dataLength;
	
		// Constructors
		public BigInteger();
		public BigInteger(long value);
		public BigInteger(BigInteger bi);
		public BigInteger(byte[] inData);
		public BigInteger(uint[] inData);
		static BigInteger();
	
		// Methods
		public static implicit operator BigInteger(long value);
		public static implicit operator BigInteger(int value);
		public static BigInteger operator +(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator -(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator *(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator <<(BigInteger bi1, int shiftVal);
		private static int shiftLeft(uint[] buffer, int shiftVal);
		private static int shiftRight(uint[] buffer, int shiftVal);
		public static BigInteger operator -(BigInteger bi1);
		public static bool operator ==(BigInteger bi1, BigInteger bi2);
		public override bool Equals(object o);
		public override int GetHashCode();
		public static bool operator >(BigInteger bi1, BigInteger bi2);
		public static bool operator <(BigInteger bi1, BigInteger bi2);
		public static bool operator >=(BigInteger bi1, BigInteger bi2);
		private static void multiByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder);
		private static void singleByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder);
		public static BigInteger operator /(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator %(BigInteger bi1, BigInteger bi2);
		public override string ToString();
		public string ToString(int radix);
		public BigInteger ModPow(BigInteger exp, BigInteger n);
		private BigInteger BarrettReduction(BigInteger x, BigInteger n, BigInteger constant);
		public int bitCount();
		public byte[] GetBytes();
	}
}
