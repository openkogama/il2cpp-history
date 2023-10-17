/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace Photon.SocketServer.Numeric
{
	internal class BigInteger
	{
		// Fields
		private const int maxLength = 70;
		public static readonly int[] primesBelow2000;
		private uint[] data;
		public int dataLength;
	
		// Constructors
		public BigInteger();
		public BigInteger(long value);
		public BigInteger(ulong value);
		public BigInteger(BigInteger bi);
		public BigInteger(string value, int radix);
		public BigInteger(byte[] inData);
		public BigInteger(byte[] inData, int inLen);
		public BigInteger(uint[] inData);
		static BigInteger();
	
		// Methods
		public static implicit operator BigInteger(long value);
		public static implicit operator BigInteger(ulong value);
		public static implicit operator BigInteger(int value);
		public static implicit operator BigInteger(uint value);
		public static BigInteger operator +(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator ++(BigInteger bi1);
		public static BigInteger operator -(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator --(BigInteger bi1);
		public static BigInteger operator *(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator <<(BigInteger bi1, int shiftVal);
		private static int shiftLeft(uint[] buffer, int shiftVal);
		public static BigInteger operator >>(BigInteger bi1, int shiftVal);
		private static int shiftRight(uint[] buffer, int shiftVal);
		public static BigInteger operator ~(BigInteger bi1);
		public static BigInteger operator -(BigInteger bi1);
		public static bool operator ==(BigInteger bi1, BigInteger bi2);
		public static bool operator !=(BigInteger bi1, BigInteger bi2);
		public override bool Equals(object o);
		public override int GetHashCode();
		public static bool operator >(BigInteger bi1, BigInteger bi2);
		public static bool operator <(BigInteger bi1, BigInteger bi2);
		public static bool operator >=(BigInteger bi1, BigInteger bi2);
		public static bool operator <=(BigInteger bi1, BigInteger bi2);
		private static void multiByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder);
		private static void singleByteDivide(BigInteger bi1, BigInteger bi2, BigInteger outQuotient, BigInteger outRemainder);
		public static BigInteger operator /(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator %(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator &(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator |(BigInteger bi1, BigInteger bi2);
		public static BigInteger operator ^(BigInteger bi1, BigInteger bi2);
		public BigInteger max(BigInteger bi);
		public BigInteger min(BigInteger bi);
		public BigInteger abs();
		public override string ToString();
		public string ToString(int radix);
		public string ToHexString();
		public BigInteger ModPow(BigInteger exp, BigInteger n);
		private BigInteger BarrettReduction(BigInteger x, BigInteger n, BigInteger constant);
		public BigInteger gcd(BigInteger bi);
		public static BigInteger GenerateRandom(int bits);
		public void genRandomBits(int bits, Random rand);
		public int bitCount();
		public bool FermatLittleTest(int confidence);
		public bool RabinMillerTest(int confidence);
		public bool SolovayStrassenTest(int confidence);
		public bool LucasStrongTest();
		private bool LucasStrongTestHelper(BigInteger thisVal);
		public bool isProbablePrime(int confidence);
		public bool isProbablePrime();
		public int IntValue();
		public long LongValue();
		public static int Jacobi(BigInteger a, BigInteger b);
		public static BigInteger genPseudoPrime(int bits, int confidence, Random rand);
		public BigInteger genCoPrime(int bits, Random rand);
		public BigInteger modInverse(BigInteger modulus);
		public byte[] GetBytes();
		public void setBit(uint bitNum);
		public void unsetBit(uint bitNum);
		public BigInteger sqrt();
		public static BigInteger[] LucasSequence(BigInteger P, BigInteger Q, BigInteger k, BigInteger n);
		private static BigInteger[] LucasSequenceHelper(BigInteger P, BigInteger Q, BigInteger k, BigInteger n, BigInteger constant, int s);
		public static void MulDivTest(int rounds);
		public static void RSATest(int rounds);
		public static void RSATest2(int rounds);
		public static void SqrtTest(int rounds);
		public static void Main(string[] args);
	}
}
