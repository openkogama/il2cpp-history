/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace CSUACSelfElevation
{
	internal class NativeMethods
	{
		// Fields
		public const uint STANDARD_RIGHTS_REQUIRED = 983040;
		public const uint STANDARD_RIGHTS_READ = 131072;
		public const uint TOKEN_ASSIGN_PRIMARY = 1;
		public const uint TOKEN_DUPLICATE = 2;
		public const uint TOKEN_IMPERSONATE = 4;
		public const uint TOKEN_QUERY = 8;
		public const uint TOKEN_QUERY_SOURCE = 16;
		public const uint TOKEN_ADJUST_PRIVILEGES = 32;
		public const uint TOKEN_ADJUST_GROUPS = 64;
		public const uint TOKEN_ADJUST_DEFAULT = 128;
		public const uint TOKEN_ADJUST_SESSIONID = 256;
		public const uint TOKEN_READ = 131080;
		public const uint TOKEN_ALL_ACCESS = 983551;
		public const int ERROR_INSUFFICIENT_BUFFER = 122;
		public const int SECURITY_MANDATORY_UNTRUSTED_RID = 0;
		public const int SECURITY_MANDATORY_LOW_RID = 4096;
		public const int SECURITY_MANDATORY_MEDIUM_RID = 8192;
		public const int SECURITY_MANDATORY_HIGH_RID = 12288;
		public const int SECURITY_MANDATORY_SYSTEM_RID = 16384;
		public const uint BCM_SETSHIELD = 5644;
	
		// Constructors
		public NativeMethods();
	
		// Methods
		public static extern bool OpenProcessToken(IntPtr hProcess, uint desiredAccess, out SafeTokenHandle hToken);
		public static extern bool DuplicateToken(SafeTokenHandle ExistingTokenHandle, SECURITY_IMPERSONATION_LEVEL ImpersonationLevel, out SafeTokenHandle DuplicateTokenHandle);
		public static extern bool GetTokenInformation(SafeTokenHandle hToken, TOKEN_INFORMATION_CLASS tokenInfoClass, IntPtr pTokenInfo, int tokenInfoLength, out int returnLength);
		public static extern int SendMessage(IntPtr hWnd, uint Msg, int wParam, IntPtr lParam);
		public static extern IntPtr GetSidSubAuthority(IntPtr pSid, uint nSubAuthority);
	}
}
