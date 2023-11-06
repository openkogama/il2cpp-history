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
	public class AdValue
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private PrecisionType _Precision_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private long _Value_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private string _CurrencyCode_k__BackingField;
	
		// Properties
		public PrecisionType Precision { [CompilerGenerated] get; [CompilerGenerated] set; }
		public long Value { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string CurrencyCode { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		public enum PrecisionType
		{
			Unknown = 0,
			Estimated = 1,
			PublisherProvided = 2,
			Precise = 3
		}
	
		// Constructors
		public AdValue();
	}
}
