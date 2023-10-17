/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdErrorEventArgs : EventArgs
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private AdError _AdError_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private string _Message_k__BackingField;
	
		// Properties
		public AdError AdError { [CompilerGenerated] get; [CompilerGenerated] set; }
		[Obsolete("use AdError.GetMessage() instead.")]
		public string Message { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public AdErrorEventArgs();
	}
}
