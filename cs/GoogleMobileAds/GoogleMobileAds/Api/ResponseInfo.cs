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
	public class ResponseInfo
	{
		// Fields
		private IResponseInfoClient _client;
		[CompilerGenerated]
		private static Func<IAdapterResponseInfoClient, AdapterResponseInfo> __f__am_cache0;
	
		// Constructors
		public ResponseInfo(IResponseInfoClient client);
	
		// Methods
		public AdapterResponseInfo GetLoadedAdapterResponseInfo();
		public List<AdapterResponseInfo> GetAdapterResponses();
		public Dictionary<string, string> GetResponseExtras();
		public string GetMediationAdapterClassName();
		public string GetResponseId();
		public override string ToString();
		[CompilerGenerated]
		private static AdapterResponseInfo _GetAdapterResponses_m__0(IAdapterResponseInfoClient o);
	}
}
