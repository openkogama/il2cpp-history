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
[assembly: AssemblyCompany("Mono development team")]
[assembly: AssemblyCopyright("(c) Various Mono authors")]
[assembly: AssemblyDefaultAlias("mscorlib.dll")]
[assembly: AssemblyDelaySign(true)]
[assembly: AssemblyDescription("mscorlib.dll")]
[assembly: AssemblyFileVersion("4.0.30319.17020")]
[assembly: AssemblyInformationalVersion("4.0.30319.17020")]
[assembly: AssemblyKeyFile("../ecma.pub")]
[assembly: AssemblyProduct("Mono Common Language Infrastructure")]
[assembly: AssemblyTitle("mscorlib.dll")]
[assembly: CLSCompliant(true)]
[assembly: ComCompatibleVersion(1, 0, 3300, 0)]
[assembly: CompilationRelaxations(CompilationRelaxations.NoStringInterning)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: DefaultDependency(LoadHint.Always)]
[assembly: Guid("BED7F4EA-1A96-11D2-8F08-00A0C9A6186D")]
[assembly: InternalsVisibleTo("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB")]
[assembly: InternalsVisibleTo("System.Core, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB")]
[assembly: InternalsVisibleTo("System.Net.Http, PublicKey=002400000480000094000000060200000024000052534131000400000100010007d1fa57c4aed9f0a32e84aa0faefd0de9e8fd6aec8f87fb03766c834c99921eb23be79ad9d5dcc1dd9ad236132102900b723cf980957fc4e177108fc607774f29e8320e92ea05ece4e821c0a5efe8f1645c4c0c93c1ab99285d622caa652c1dfad63d745d6f2de5f17e5eaf0fc4963d261c8a12436518206dc093344d5ad293")]
[assembly: InternalsVisibleTo("System.Security, PublicKey=002400000480000094000000060200000024000052534131000400000100010007d1fa57c4aed9f0a32e84aa0faefd0de9e8fd6aec8f87fb03766c834c99921eb23be79ad9d5dcc1dd9ad236132102900b723cf980957fc4e177108fc607774f29e8320e92ea05ece4e821c0a5efe8f1645c4c0c93c1ab99285d622caa652c1dfad63d745d6f2de5f17e5eaf0fc4963d261c8a12436518206dc093344d5ad293")]
[assembly: InternalsVisibleTo("System.Runtime.WindowsRuntime.UI.Xaml, PublicKey=00000000000000000400000000000000")]
[assembly: InternalsVisibleTo("System.Runtime.WindowsRuntime, PublicKey=00000000000000000400000000000000")]
[assembly: NeutralResourcesLanguage("en-US")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: SatelliteContractVersion("4.0.0.0")]
[assembly: StringFreezing]

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

