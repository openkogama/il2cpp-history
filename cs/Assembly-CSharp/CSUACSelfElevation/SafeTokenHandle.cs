/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Microsoft.Win32.SafeHandles;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace CSUACSelfElevation
{
	internal class SafeTokenHandle : SafeHandleZeroOrMinusOneIsInvalid
	{
		// Constructors
		private SafeTokenHandle();
		internal SafeTokenHandle(IntPtr handle);
	
		// Methods
		internal static extern bool CloseHandle(IntPtr handle);
		protected override bool ReleaseHandle();
	}
}
