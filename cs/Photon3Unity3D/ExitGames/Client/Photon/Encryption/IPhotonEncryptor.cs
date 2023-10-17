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
	public interface IPhotonEncryptor
	{
		// Methods
		void Init(byte[] encryptionSecret, byte[] hmacSecret, byte[] ivBytes = null);
		void Encrypt(byte[] data, int len, byte[] output, ref int offset, bool ivPrefix = true);
		byte[] Decrypt(byte[] data, int offset, int len, out int outLen, bool ivPrefix = true);
		byte[] CreateHMAC(byte[] data, int offset, int count);
		bool CheckHMAC(byte[] data, int len);
	}
}
