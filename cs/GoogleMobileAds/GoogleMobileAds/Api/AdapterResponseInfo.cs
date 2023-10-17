/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdapterResponseInfo
	{
		// Fields
		private IAdapterResponseInfoClient _client;
	
		// Properties
		public string AdapterClassName { get; }
		public string AdSourceId { get; }
		public string AdSourceName { get; }
		public string AdSourceInstanceId { get; }
		public string AdSourceInstanceName { get; }
		public Dictionary<string, string> AdUnitMapping { get; }
		public AdError AdError { get; }
		public long LatencyMillis { get; }
	
		// Constructors
		public AdapterResponseInfo(IAdapterResponseInfoClient client);
	
		// Methods
		public override string ToString();
	}
}
