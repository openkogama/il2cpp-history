/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	internal static class IsoCodes
	{
		// Fields
		private static IDictionary<string, IsoCode> isoLanguagesByCode;
		private static IDictionary<string, IsoCode> isoLanguagesByLang;
		private static IDictionary<string, IsoCode> isoCountriesByCode;
		private static IDictionary<string, IsoCode> isoCountriesByCountry;
	
		// Properties
		public static IEnumerable<IsoCode> KnownLanguages { get; }
		public static IEnumerable<IsoCode> KnownCountries { get; }
	
		// Nested types
		internal class IsoCode
		{
			// Fields
			private string iso;
			private string name;
	
			// Properties
			public string Iso { get; }
			public string Name { get; }
	
			// Constructors
			public IsoCode(string iso, string name);
		}
	
		// Constructors
		static IsoCodes();
	
		// Methods
		public static IsoCode LookupLanguageCode(string code);
		public static IsoCode LookupCountryCode(string code);
		public static bool IsKnownLanguageCode(string code);
		public static bool IsKnownCountryCode(string code);
	}
}
