/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;

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

namespace ExitGames.Client.Photon
{
	public class SupportClass
	{
		// Fields
		private static List<Thread> threadList;
		protected internal static IntegerMillisecondsDelegate IntegerMilliseconds;
		private static uint[] crcLookupTable;
	
		// Nested types
		public delegate int IntegerMillisecondsDelegate();
	
		public class ThreadSafeRandom
		{
			// Fields
			private static readonly Random _r;
	
			// Constructors
			public ThreadSafeRandom();
			static ThreadSafeRandom();
	
			// Methods
			public static int Next();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass6_0
		{
			// Fields
			public int millisecondsInterval;
			public Func<bool> myThread;
	
			// Constructors
			public __c__DisplayClass6_0();
	
			// Methods
			internal void _StartBackgroundCalls_b__0();
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
		public SupportClass();
		static SupportClass();
	
		// Methods
		public static List<MethodInfo> GetMethods(System.Type type, System.Type attribute);
		public static int GetTickCount();
		[Obsolete("Use StartBackgroundCalls() instead. It works with StopBackgroundCalls().")]
		public static byte CallInBackground(Func<bool> myThread, int millisecondsInterval = 100, string taskName = "");
		public static byte StartBackgroundCalls(Func<bool> myThread, int millisecondsInterval = 100, string taskName = "");
		public static bool StopBackgroundCalls(byte id);
		public static bool StopAllBackgroundCalls();
		public static void WriteStackTrace(Exception throwable, TextWriter stream);
		public static void WriteStackTrace(Exception throwable);
		public static string DictionaryToString(IDictionary dictionary);
		public static string DictionaryToString(IDictionary dictionary, bool includeTypes);
		[Obsolete("Use DictionaryToString() instead.")]
		public static string HashtableToString(Hashtable hash);
		public static string ByteArrayToString(byte[] list);
		private static uint[] InitializeTable(uint polynomial);
		public static uint CalculateCrc(byte[] buffer, int length);
	}
}
