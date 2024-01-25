/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 12: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class SupportClass
	{
		// Fields
		protected internal static IntegerMillisecondsDelegate IntegerMilliseconds;
		private static uint[] crcLookupTable;
	
		// Nested types
		public delegate int IntegerMillisecondsDelegate();
	
		public class ThreadSafeRandom
		{
			// Fields
			private static readonly Random _r;
	
			// Constructors
			static ThreadSafeRandom();
	
			// Methods
			public static int Next();
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal int _.cctor_b__20_0();
		}
	
		// Constructors
		static SupportClass();
	
		// Methods
		public static int GetTickCount();
		public static void WriteStackTrace(Exception throwable, TextWriter stream);
		public static void WriteStackTrace(Exception throwable);
		public static string DictionaryToString(IDictionary dictionary);
		public static string DictionaryToString(IDictionary dictionary, bool includeTypes);
		public static string ByteArrayToString(byte[] list);
		private static uint[] InitializeTable(uint polynomial);
		public static uint CalculateCrc(byte[] buffer, int length);
	}
}
