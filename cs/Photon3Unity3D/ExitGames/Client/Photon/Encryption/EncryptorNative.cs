/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon.Encryption
{
	public class EncryptorNative : IPhotonEncryptor
	{
		// Fields
		private const string LibName = "PhotonEncryptorPlugin";
		public static readonly int BLOCK_SIZE;
		public static readonly int IV_SIZE;
		public static readonly int HMAC_SIZE;
		protected IntPtr encryptor;
		protected byte[] hmacHash;
	
		// Nested types
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		internal delegate void LogCallbackDelegate(IntPtr userData, int level, string msg);
	
		private enum egDebugLevel
		{
			OFF = 0,
			ERRORS = 1,
			WARNINGS = 2,
			INFO = 3,
			ALL = 4
		}
	
		// Constructors
		public EncryptorNative();
		static EncryptorNative();
	
		// Methods
		internal static extern IntPtr egconstructEncryptor(byte[] pEncryptSecret, byte[] pHmacSecret);
		internal static extern void egdestructEncryptor(IntPtr pEncryptor);
		internal static extern void egencrypt(IntPtr pEncryptor, byte[] pIn, int inSize, byte[] pOut, ref int outSize, ref int outOffset);
		internal static extern void egdecrypt(IntPtr pEncryptor, byte[] pIn, int inSizem, int inOffset, byte[] pOut, ref int outSize);
		internal static extern void egHMAC(IntPtr pEncryptor, byte[] pIn, int inSize, int inOffset, byte[] pOut, ref int outSize);
		internal static extern int eggetBlockSize();
		internal static extern int eggetIVSize();
		internal static extern int eggetHMACSize();
		internal static extern void egsetEncryptorLoggingCallback(IntPtr userData, LogCallbackDelegate callback);
		internal static extern bool egsetEncryptorLoggingLevel(int level);
		~EncryptorNative();
		private static void OnNativeLog(IntPtr userData, int debugLevel, string message);
		public void Init(byte[] encryptionSecret, byte[] hmacSecret, byte[] ivBytes = null);
		public void Dispose();
		private void Dispose(bool dispose);
		public void Encrypt(byte[] data, int len, byte[] output, ref int offset, bool ivPrefix = true);
		public byte[] CreateHMAC(byte[] data, int offset, int count);
		public byte[] Decrypt(byte[] data, int offset, int len, out int outLen, bool ivPrefix = true);
		public bool CheckHMAC(byte[] data, int len);
	}
}
