/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 29: GoogleMobileAds.Core.dll - Assembly: GoogleMobileAds.Core, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdapterStatus
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private AdapterState _InitializationState_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private string _Description_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private int _Latency_k__BackingField;
	
		// Properties
		public AdapterState InitializationState { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public string Description { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int Latency { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		internal AdapterStatus(AdapterState state, string description, int latency);
	}
}
