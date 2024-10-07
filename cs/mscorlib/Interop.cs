/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
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
[assembly: InternalsVisibleTo("System.Security, PublicKey=002400000480000094000000060200000024000052534131000400000100010007d1fa57c4aed9f0a32e84aa0faefd0de9e8fd6aec8f87fb03766c834c99921eb23be79ad9d5dcc1dd9ad236132102900b723cf980957fc4e177108fc607774f29e8320e92ea05ece4e821c0a5efe8f1645c4c0c93c1ab99285d622caa652c1dfad63d745d6f2de5f17e5eaf0fc4963d261c8a12436518206dc093344d5ad293")]
[assembly: InternalsVisibleTo("System.Runtime.WindowsRuntime, PublicKey=00000000000000000400000000000000")]
[assembly: InternalsVisibleTo("System.Runtime.WindowsRuntime.UI.Xaml, PublicKey=00000000000000000400000000000000")]
[assembly: InternalsVisibleTo("System.Net.Http, PublicKey=002400000480000094000000060200000024000052534131000400000100010007d1fa57c4aed9f0a32e84aa0faefd0de9e8fd6aec8f87fb03766c834c99921eb23be79ad9d5dcc1dd9ad236132102900b723cf980957fc4e177108fc607774f29e8320e92ea05ece4e821c0a5efe8f1645c4c0c93c1ab99285d622caa652c1dfad63d745d6f2de5f17e5eaf0fc4963d261c8a12436518206dc093344d5ad293")]
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

			// Methods
			internal void SetFileName(string fileName);
		}

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

		internal enum FILE_INFO_BY_HANDLE_CLASS : uint
		{
			FileBasicInfo = 0,
			FileStandardInfo = 1,
			FileNameInfo = 2,
			FileRenameInfo = 3,
			FileDispositionInfo = 4,
			FileAllocationInfo = 5,
			FileEndOfFileInfo = 6,
			FileStreamInfo = 7,
			FileCompressionInfo = 8,
			FileAttributeTagInfo = 9,
			FileIdBothDirectoryInfo = 10,
			FileIdBothDirectoryRestartInfo = 11,
			FileIoPriorityHintInfo = 12,
			FileRemoteProtocolInfo = 13,
			FileFullDirectoryInfo = 14,
			FileFullDirectoryRestartInfo = 15
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

		internal struct SECURITY_ATTRIBUTES
		{
			// Fields
			internal uint nLength;
			internal IntPtr lpSecurityDescriptor;
			internal BOOL bInheritHandle;
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

		// Methods
		internal static extern bool FreeLibrary(IntPtr hModule);
		internal static extern SafeLibraryHandle LoadLibraryEx(string libFilename, IntPtr reserved, int flags);
		internal static extern bool GetFileMUIPath(uint flags, string filePath, out StringBuilder language, ref int languageLength, out StringBuilder fileMuiPath, ref int fileMuiPathLength, ref long enumerator);
		internal static extern uint GetDynamicTimeZoneInformation(out TIME_DYNAMIC_ZONE_INFORMATION pTimeZoneInformation);
		internal static extern uint GetTimeZoneInformation(out TIME_ZONE_INFORMATION lpTimeZoneInformation);
		internal static extern bool CloseHandle(IntPtr handle);
		private static extern bool CreateDirectoryPrivate(string path, ref SECURITY_ATTRIBUTES lpSecurityAttributes);
		internal static bool CreateDirectory(string path, ref SECURITY_ATTRIBUTES lpSecurityAttributes);
		private static unsafe extern IntPtr CreateFilePrivate(string lpFileName, int dwDesiredAccess, FileShare dwShareMode, SECURITY_ATTRIBUTES* securityAttrs, FileMode dwCreationDisposition, int dwFlagsAndAttributes, IntPtr hTemplateFile);
		internal static IntPtr CreateFile_IntPtr(string lpFileName, int dwDesiredAccess, FileShare dwShareMode, FileMode dwCreationDisposition, int dwFlagsAndAttributes);
		private static extern bool DeleteFilePrivate(string path);
		internal static bool DeleteFile(string path);
		private static extern SafeFindHandle FindFirstFileExPrivate(string lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, ref WIN32_FIND_DATA lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, IntPtr lpSearchFilter, int dwAdditionalFlags);
		internal static SafeFindHandle FindFirstFile(string fileName, ref WIN32_FIND_DATA data);
		private static unsafe extern int FormatMessage(int dwFlags, IntPtr lpSource, uint dwMessageId, int dwLanguageId, char* lpBuffer, int nSize, IntPtr[] arguments);
		internal static string GetMessage(int errorCode);
		internal static string GetMessage(IntPtr moduleHandle, int errorCode);
		private static bool TryGetErrorMessage(IntPtr moduleHandle, int errorCode, Span<char> buffer, out string errorMsg);
		private static extern bool GetFileAttributesExPrivate(string name, GET_FILEEX_INFO_LEVELS fileInfoLevel, ref WIN32_FILE_ATTRIBUTE_DATA lpFileInformation);
		internal static bool GetFileAttributesEx(string name, GET_FILEEX_INFO_LEVELS fileInfoLevel, ref WIN32_FILE_ATTRIBUTE_DATA lpFileInformation);
		public static extern bool GetFileInformationByHandleEx(IntPtr hFile, FILE_INFO_BY_HANDLE_CLASS FileInformationClass, IntPtr lpFileInformation, uint dwBufferSize);
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

	internal enum BOOL
	{
		FALSE = 0,
		TRUE = 1
	}

	internal enum BOOLEAN : byte
	{
		FALSE = 0,
		TRUE = 1
	}

	internal struct LongFileTime
	{
		// Fields
		internal long TicksSince1601;
	}

	internal struct UNICODE_STRING
	{
		// Fields
		internal ushort Length;
		internal ushort MaximumLength;
		internal IntPtr Buffer;
	}

	internal class NtDll
	{
		// Nested types
		public struct FILE_FULL_DIR_INFORMATION
		{
			// Fields
			public uint NextEntryOffset;
			public uint FileIndex;
			public LongFileTime CreationTime;
			public LongFileTime LastAccessTime;
			public LongFileTime LastWriteTime;
			public LongFileTime ChangeTime;
			public long EndOfFile;
			public long AllocationSize;
			public FileAttributes FileAttributes;
			public uint FileNameLength;
			public uint EaSize;
			private char _fileName;

			// Properties
			public ReadOnlySpan<char> FileName { get; }

			// Methods
			public static unsafe FILE_FULL_DIR_INFORMATION* GetNextInfo(FILE_FULL_DIR_INFORMATION* info);
		}

		public enum FILE_INFORMATION_CLASS : uint
		{
			FileDirectoryInformation = 1,
			FileFullDirectoryInformation = 2,
			FileBothDirectoryInformation = 3,
			FileBasicInformation = 4,
			FileStandardInformation = 5,
			FileInternalInformation = 6,
			FileEaInformation = 7,
			FileAccessInformation = 8,
			FileNameInformation = 9,
			FileRenameInformation = 10,
			FileLinkInformation = 11,
			FileNamesInformation = 12,
			FileDispositionInformation = 13,
			FilePositionInformation = 14,
			FileFullEaInformation = 15,
			FileModeInformation = 16,
			FileAlignmentInformation = 17,
			FileAllInformation = 18,
			FileAllocationInformation = 19,
			FileEndOfFileInformation = 20,
			FileAlternateNameInformation = 21,
			FileStreamInformation = 22,
			FilePipeInformation = 23,
			FilePipeLocalInformation = 24,
			FilePipeRemoteInformation = 25,
			FileMailslotQueryInformation = 26,
			FileMailslotSetInformation = 27,
			FileCompressionInformation = 28,
			FileObjectIdInformation = 29,
			FileCompletionInformation = 30,
			FileMoveClusterInformation = 31,
			FileQuotaInformation = 32,
			FileReparsePointInformation = 33,
			FileNetworkOpenInformation = 34,
			FileAttributeTagInformation = 35,
			FileTrackingInformation = 36,
			FileIdBothDirectoryInformation = 37,
			FileIdFullDirectoryInformation = 38,
			FileValidDataLengthInformation = 39,
			FileShortNameInformation = 40,
			FileIoCompletionNotificationInformation = 41,
			FileIoStatusBlockRangeInformation = 42,
			FileIoPriorityHintInformation = 43,
			FileSfioReserveInformation = 44,
			FileSfioVolumeInformation = 45,
			FileHardLinkInformation = 46,
			FileProcessIdsUsingFileInformation = 47,
			FileNormalizedNameInformation = 48,
			FileNetworkPhysicalNameInformation = 49,
			FileIdGlobalTxDirectoryInformation = 50,
			FileIsRemoteDeviceInformation = 51,
			FileUnusedInformation = 52,
			FileNumaNodeInformation = 53,
			FileStandardLinkInformation = 54,
			FileRemoteProtocolInformation = 55,
			FileRenameInformationBypassAccessCheck = 56,
			FileLinkInformationBypassAccessCheck = 57,
			FileVolumeNameInformation = 58,
			FileIdInformation = 59,
			FileIdExtdDirectoryInformation = 60,
			FileReplaceCompletionInformation = 61,
			FileHardLinkFullIdInformation = 62,
			FileIdExtdBothDirectoryInformation = 63,
			FileDispositionInformationEx = 64,
			FileRenameInformationEx = 65,
			FileRenameInformationExBypassAccessCheck = 66,
			FileDesiredStorageClassInformation = 67,
			FileStatInformation = 68
		}

		public struct IO_STATUS_BLOCK
		{
			// Fields
			public IO_STATUS Status;
			public IntPtr Information;

			// Nested types
			public struct IO_STATUS
			{
				// Fields
				public uint Status;
				public IntPtr Pointer;
			}
		}

		public struct OBJECT_ATTRIBUTES
		{
			// Fields
			public uint Length;
			public IntPtr RootDirectory;
			public unsafe UNICODE_STRING* ObjectName;
			public ObjectAttributes Attributes;
			public unsafe void* SecurityDescriptor;
			public unsafe void* SecurityQualityOfService;

			// Constructors
			public unsafe OBJECT_ATTRIBUTES(UNICODE_STRING* objectName, ObjectAttributes attributes, IntPtr rootDirectory);
		}

		[Flags]
		public enum ObjectAttributes : uint
		{
			OBJ_INHERIT = 2,
			OBJ_PERMANENT = 16,
			OBJ_EXCLUSIVE = 32,
			OBJ_CASE_INSENSITIVE = 64,
			OBJ_OPENIF = 128,
			OBJ_OPENLINK = 256
		}

		public enum CreateDisposition : uint
		{
			FILE_SUPERSEDE = 0,
			FILE_OPEN = 1,
			FILE_CREATE = 2,
			FILE_OPEN_IF = 3,
			FILE_OVERWRITE = 4,
			FILE_OVERWRITE_IF = 5
		}

		public enum CreateOptions : uint
		{
			FILE_DIRECTORY_FILE = 1,
			FILE_WRITE_THROUGH = 2,
			FILE_SEQUENTIAL_ONLY = 4,
			FILE_NO_INTERMEDIATE_BUFFERING = 8,
			FILE_SYNCHRONOUS_IO_ALERT = 16,
			FILE_SYNCHRONOUS_IO_NONALERT = 32,
			FILE_NON_DIRECTORY_FILE = 64,
			FILE_CREATE_TREE_CONNECTION = 128,
			FILE_COMPLETE_IF_OPLOCKED = 256,
			FILE_NO_EA_KNOWLEDGE = 512,
			FILE_RANDOM_ACCESS = 2048,
			FILE_DELETE_ON_CLOSE = 4096,
			FILE_OPEN_BY_FILE_ID = 8192,
			FILE_OPEN_FOR_BACKUP_INTENT = 16384,
			FILE_NO_COMPRESSION = 32768,
			FILE_OPEN_REQUIRING_OPLOCK = 65536,
			FILE_DISALLOW_EXCLUSIVE = 131072,
			FILE_SESSION_AWARE = 262144,
			FILE_RESERVE_OPFILTER = 1048576,
			FILE_OPEN_REPARSE_POINT = 2097152,
			FILE_OPEN_NO_RECALL = 4194304
		}

		[Flags]
		public enum DesiredAccess : uint
		{
			FILE_READ_DATA = 1,
			FILE_LIST_DIRECTORY = 1,
			FILE_WRITE_DATA = 2,
			FILE_ADD_FILE = 2,
			FILE_APPEND_DATA = 4,
			FILE_ADD_SUBDIRECTORY = 4,
			FILE_CREATE_PIPE_INSTANCE = 4,
			FILE_READ_EA = 8,
			FILE_WRITE_EA = 16,
			FILE_EXECUTE = 32,
			FILE_TRAVERSE = 32,
			FILE_DELETE_CHILD = 64,
			FILE_READ_ATTRIBUTES = 128,
			FILE_WRITE_ATTRIBUTES = 256,
			DELETE = 65536,
			READ_CONTROL = 131072,
			STANDARD_RIGHTS_READ = 131072,
			STANDARD_RIGHTS_WRITE = 131072,
			STANDARD_RIGHTS_EXECUTE = 131072,
			WRITE_DAC = 262144,
			WRITE_OWNER = 524288,
			FILE_ALL_ACCESS = 983551,
			SYNCHRONIZE = 1048576,
			FILE_GENERIC_EXECUTE = 536870912,
			FILE_GENERIC_WRITE = 1073741824,
			FILE_GENERIC_READ = 2147483648
		}

		// Methods
		private static unsafe extern int NtCreateFile(out IntPtr FileHandle, DesiredAccess DesiredAccess, ref OBJECT_ATTRIBUTES ObjectAttributes, out IO_STATUS_BLOCK IoStatusBlock, long* AllocationSize, FileAttributes FileAttributes, FileShare ShareAccess, CreateDisposition CreateDisposition, CreateOptions CreateOptions, void* EaBuffer, uint EaLength);
		internal static ValueTuple<int, IntPtr> CreateFile(ReadOnlySpan<char> path, IntPtr rootDirectory, CreateDisposition createDisposition, DesiredAccess desiredAccess = DesiredAccess.SYNCHRONIZE | DesiredAccess.FILE_GENERIC_READ, FileShare shareAccess = FileShare.None | FileShare.Read | FileShare.Write | FileShare.ReadWrite | FileShare.Delete, FileAttributes fileAttributes = , CreateOptions createOptions = CreateOptions.FILE_SYNCHRONOUS_IO_NONALERT, ObjectAttributes objectAttributes = ObjectAttributes.OBJ_CASE_INSENSITIVE);
		public static unsafe extern int NtQueryDirectoryFile(IntPtr FileHandle, IntPtr Event, IntPtr ApcRoutine, IntPtr ApcContext, out IO_STATUS_BLOCK IoStatusBlock, IntPtr FileInformation, uint Length, FILE_INFORMATION_CLASS FileInformationClass, BOOLEAN ReturnSingleEntry, UNICODE_STRING* FileName, BOOLEAN RestartScan);
		public static extern uint RtlNtStatusToDosError(int Status);
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

