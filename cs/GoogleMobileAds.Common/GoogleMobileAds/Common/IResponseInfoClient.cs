/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 28: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common
{
	public interface IResponseInfoClient
	{
		// Methods
		IAdapterResponseInfoClient GetLoadedAdapterResponseInfo();
		List<IAdapterResponseInfoClient> GetAdapterResponses();
		Dictionary<string, string> GetResponseExtras();
		string GetMediationAdapterClassName();
		string GetResponseId();
	}
}
