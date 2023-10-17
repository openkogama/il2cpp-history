/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using Photon.SocketServer.Numeric;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null
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

namespace Photon.SocketServer.Security
{
	internal class DiffieHellmanCryptoProvider : ICryptoProvider
	{
		// Fields
		private static readonly BigInteger primeRoot;
		private readonly BigInteger prime;
		private readonly BigInteger secret;
		private readonly BigInteger publicKey;
		private Rijndael crypto;
		private byte[] sharedKey;
	
		// Properties
		public bool IsInitialized { get; }
		public byte[] PublicKey { get; }
	
		// Constructors
		public DiffieHellmanCryptoProvider();
		public DiffieHellmanCryptoProvider(byte[] cryptoKey);
		static DiffieHellmanCryptoProvider();
	
		// Methods
		public void DeriveSharedKey(byte[] otherPartyPublicKey);
		public byte[] Encrypt(byte[] data);
		public byte[] Encrypt(byte[] data, int offset, int count);
		public byte[] Decrypt(byte[] data);
		public byte[] Decrypt(byte[] data, int offset, int count);
		public void Dispose();
		protected void Dispose(bool disposing);
		private BigInteger CalculatePublicKey();
		private BigInteger CalculateSharedKey(BigInteger otherPartyPublicKey);
		private BigInteger GenerateRandomSecret(int secretLength);
	}
}
