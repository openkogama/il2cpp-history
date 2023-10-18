/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.1.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("UnitTests")]
[assembly: InternalsVisibleTo("basic_unittests_test_library")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Placement")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace GoogleMobileAds.Api
{
	public class AdInspectorError : AdError
	{
		// Nested types
		public enum AdInspectorErrorCode
		{
			ERROR_CODE_INTERNAL_ERROR = 0,
			ERROR_CODE_FAILED_TO_LOAD = 1,
			ERROR_CODE_NOT_IN_TEST_MODE = 2,
			ERROR_CODE_ALREADY_OPEN = 3
		}
	
		// Constructors
		public AdInspectorError(IAdInspectorErrorClient client);
	
		// Methods
		public new AdInspectorErrorCode GetCode();
	}
}
