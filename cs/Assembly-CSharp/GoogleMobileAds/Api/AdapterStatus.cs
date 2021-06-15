/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdapterStatus
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private AdapterState _InitializationState_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Description_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int _Latency_k__BackingField;
	
		// Properties
		public AdapterState InitializationState { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public string Description { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int Latency { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		internal AdapterStatus(AdapterState state, string description, int latency);
	}
}
