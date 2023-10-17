/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon.Encryption
{
	public class EncryptorNet : IPhotonEncryptor
	{
		// Fields
		public const int BLOCK_SIZE = 16;
		public const int IV_SIZE = 16;
		public const int HMAC_SIZE = 32;
		protected Aes encryptorIn;
		protected Aes encryptorOut;
		protected HMACSHA256 hmacsha256In;
		protected HMACSHA256 hmacsha256Out;
		private readonly byte[] reusedIvBuffer;
		private readonly byte[] reusedReadBuffer;
	
		// Constructors
		public EncryptorNet();
	
		// Methods
		public void Init(byte[] encryptionSecret, byte[] hmacSecret, byte[] ivBytes = null);
		public void Encrypt(byte[] data, int len, byte[] output, ref int offset, bool ivPrefix = true);
		public byte[] Decrypt(byte[] data, int offset, int len, out int outLen, bool ivPrefix = true);
		public byte[] CreateHMAC(byte[] data, int offset, int count);
		public bool CheckHMAC(byte[] data, int len);
	}
}
