/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Microsoft.Win32.SafeHandles;

// Image 1: mscorlib.dll - Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089

internal static class Interop
{
	// Nested types
	internal static class Kernel32
	{
		// Nested types
		internal struct REG_TZI_FORMAT
		{
			// Fields
			internal int Bias;
			internal int StandardBias;
			internal int DaylightBias;
			internal SYSTEMTIME StandardDate;
			internal SYSTEMTIME DaylightDate;

			// Constructors
			internal REG_TZI_FORMAT([IsReadOnly] in TIME_ZONE_INFORMATION tzi);
		}

		internal struct SYSTEMTIME
		{
			// Fields
			internal ushort Year;
			internal ushort Month;
			internal ushort DayOfWeek;
			internal ushort Day;
			internal ushort Hour;
			internal ushort Minute;
			internal ushort Second;
			internal ushort Milliseconds;

			// Methods
			internal bool Equals([IsReadOnly] in SYSTEMTIME other);
		}

		internal struct TIME_DYNAMIC_ZONE_INFORMATION
		{
			// Fields
			internal int Bias;
			internal unsafe fixed char StandardName[0];
			internal SYSTEMTIME StandardDate;
			internal int StandardBias;
			internal unsafe fixed char DaylightName[0];
			internal SYSTEMTIME DaylightDate;
			internal int DaylightBias;
			internal unsafe fixed char TimeZoneKeyName[0];
			internal byte DynamicDaylightTimeDisabled;

			// Nested types
			[CompilerGenerated]
			[UnsafeValueType]
			public struct _StandardName_e__FixedBuffer
			{
				// Fields
				public char FixedElementField;
			}

			[CompilerGenerated]
			[UnsafeValueType]
			public struct _DaylightName_e__FixedBuffer
			{
				// Fields
				public char FixedElementField;
			}

			[CompilerGenerated]
			[UnsafeValueType]
			public struct _TimeZoneKeyName_e__FixedBuffer
			{
				// Fields
				public char FixedElementField;
			}

			// Methods
			internal string GetTimeZoneKeyName();
		}

		internal struct TIME_ZONE_INFORMATION
		{
			// Fields
			internal int Bias;
			internal unsafe fixed char StandardName[0];
			internal SYSTEMTIME StandardDate;
			internal int StandardBias;
			internal unsafe fixed char DaylightName[0];
			internal SYSTEMTIME DaylightDate;
			internal int DaylightBias;

			// Nested types
			[CompilerGenerated]
			[UnsafeValueType]
			public struct _StandardName_e__FixedBuffer
			{
				// Fields
				public char FixedElementField;
			}

			[CompilerGenerated]
			[UnsafeValueType]
			public struct _DaylightName_e__FixedBuffer
			{
				// Fields
				public char FixedElementField;
			}

			// Constructors
			internal unsafe TIME_ZONE_INFORMATION([IsReadOnly] in TIME_DYNAMIC_ZONE_INFORMATION dtzi);

			// Methods
			internal string GetStandardName();
			internal string GetDaylightName();
		}

		internal struct FILE_TIME
		{
			// Fields
			internal uint dwLowDateTime;
			internal uint dwHighDateTime;
		}

		internal enum FINDEX_INFO_LEVELS : uint
		{
			FindExInfoStandard = 0,
			FindExInfoBasic = 1,
			FindExInfoMaxInfoLevel = 2
		}

		internal enum FINDEX_SEARCH_OPS : uint
		{
			FindExSearchNameMatch = 0,
			FindExSearchLimitToDirectories = 1,
			FindExSearchLimitToDevices = 2,
			FindExSearchMaxSearchOp = 3
		}

		internal enum GET_FILEEX_INFO_LEVELS : uint
		{
			GetFileExInfoStandard = 0,
			GetFileExMaxInfoLevel = 1
		}

		internal struct WIN32_FILE_ATTRIBUTE_DATA
		{
			// Fields
			internal int dwFileAttributes;
			internal FILE_TIME ftCreationTime;
			internal FILE_TIME ftLastAccessTime;
			internal FILE_TIME ftLastWriteTime;
			internal uint nFileSizeHigh;
			internal uint nFileSizeLow;

			// Methods
			internal void PopulateFrom(ref WIN32_FIND_DATA findData);
		}

		internal struct WIN32_FIND_DATA
		{
			// Fields
			internal uint dwFileAttributes;
			internal FILE_TIME ftCreationTime;
			internal FILE_TIME ftLastAccessTime;
			internal FILE_TIME ftLastWriteTime;
			internal uint nFileSizeHigh;
			internal uint nFileSizeLow;
			internal uint dwReserved0;
			internal uint dwReserved1;
			private unsafe fixed char _cFileName[0];
			private unsafe fixed char _cAlternateFileName[0];

			// Nested types
			[CompilerGenerated]
			[UnsafeValueType]
			public struct __cFileName_e__FixedBuffer
			{
				// Fields
				public char FixedElementField;
			}

			[CompilerGenerated]
			[UnsafeValueType]
			public struct __cAlternateFileName_e__FixedBuffer
			{
				// Fields
				public char FixedElementField;
			}
		}

		// Methods
		internal static extern bool FreeLibrary(IntPtr hModule);
		internal static extern SafeLibraryHandle LoadLibraryEx(string libFilename, IntPtr reserved, int flags);
		internal static extern bool GetFileMUIPath(uint flags, string filePath, out StringBuilder language, ref int languageLength, out StringBuilder fileMuiPath, ref int fileMuiPathLength, ref long enumerator);
		internal static extern uint GetDynamicTimeZoneInformation(out TIME_DYNAMIC_ZONE_INFORMATION pTimeZoneInformation);
		internal static extern uint GetTimeZoneInformation(out TIME_ZONE_INFORMATION lpTimeZoneInformation);
		private static extern SafeFindHandle FindFirstFileExPrivate(string lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, ref WIN32_FIND_DATA lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, IntPtr lpSearchFilter, int dwAdditionalFlags);
		internal static SafeFindHandle FindFirstFile(string fileName, ref WIN32_FIND_DATA data);
		private static unsafe extern int FormatMessage(int dwFlags, IntPtr lpSource, uint dwMessageId, int dwLanguageId, char* lpBuffer, int nSize, IntPtr[] arguments);
		internal static string GetMessage(int errorCode);
		internal static string GetMessage(IntPtr moduleHandle, int errorCode);
		private static bool TryGetErrorMessage(IntPtr moduleHandle, int errorCode, Span<char> buffer, out string errorMsg);
		private static extern bool GetFileAttributesExPrivate(string name, GET_FILEEX_INFO_LEVELS fileInfoLevel, ref WIN32_FILE_ATTRIBUTE_DATA lpFileInformation);
		internal static bool GetFileAttributesEx(string name, GET_FILEEX_INFO_LEVELS fileInfoLevel, ref WIN32_FILE_ATTRIBUTE_DATA lpFileInformation);
		internal static extern bool SetThreadErrorMode(uint dwNewMode, out uint lpOldMode);
	}

	internal class BCrypt
	{
		// Nested types
		internal enum NTSTATUS : uint
		{
			STATUS_SUCCESS = 0,
			STATUS_INVALID_PARAMETER = 3221225485,
			STATUS_NO_MEMORY = 3221225495,
			STATUS_NOT_FOUND = 3221226021
		}

		// Methods
		internal static unsafe extern NTSTATUS BCryptGenRandom(IntPtr hAlgorithm, byte* pbBuffer, int cbBuffer, int dwFlags);
	}

	internal class User32
	{
		// Methods
		internal static extern int LoadString(SafeLibraryHandle handle, int id, out StringBuilder buffer, int bufferLength);
	}

	internal class Advapi32
	{
		// Methods
		internal static extern int RegCloseKey(IntPtr hKey);
		internal static extern int RegEnumKeyEx(SafeRegistryHandle hKey, int dwIndex, char[] lpName, ref int lpcbName, int[] lpReserved, out StringBuilder lpClass, int[] lpcbClass, long[] lpftLastWriteTime);
		internal static extern int RegOpenKeyEx(SafeRegistryHandle hKey, string lpSubKey, int ulOptions, int samDesired, out SafeRegistryHandle hkResult);
		internal static extern int RegQueryInfoKey(SafeRegistryHandle hKey, out StringBuilder lpClass, int[] lpcbClass, IntPtr lpReserved_MustBeZero, ref int lpcSubKeys, int[] lpcbMaxSubKeyLen, int[] lpcbMaxClassLen, ref int lpcValues, int[] lpcbMaxValueNameLen, int[] lpcbMaxValueLen, int[] lpcbSecurityDescriptor, int[] lpftLastWriteTime);
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, out byte[] lpData, ref int lpcbData);
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, ref int lpData, ref int lpcbData);
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, ref long lpData, ref int lpcbData);
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, out char[] lpData, ref int lpcbData);
	}

	// Methods
	internal static unsafe void GetRandomBytes(byte* buffer, int length);
}

