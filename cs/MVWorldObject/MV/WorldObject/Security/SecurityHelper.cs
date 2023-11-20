/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.Security
{
	public static class SecurityHelper
	{
		// Fields
		private static readonly byte[] SALT;
		private static readonly byte[] key;
		private static readonly byte[] iv;
		private static readonly Rfc2898DeriveBytes keyGenerator;
	
		// Constructors
		static SecurityHelper();
	
		// Methods
		public static string Encrypt(string inputText);
		public static string Decrypt(string inputText);
	}
}
