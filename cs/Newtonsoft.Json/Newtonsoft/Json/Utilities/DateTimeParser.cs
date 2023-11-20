/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal struct DateTimeParser
	{
		// Fields
		public int Year;
		public int Month;
		public int Day;
		public int Hour;
		public int Minute;
		public int Second;
		public int Fraction;
		public int ZoneHour;
		public int ZoneMinute;
		public ParserTimeZone Zone;
		private char[] _text;
		private int _end;
		private static readonly int[] Power10;
		private static readonly int Lzyyyy;
		private static readonly int Lzyyyy_;
		private static readonly int Lzyyyy_MM;
		private static readonly int Lzyyyy_MM_;
		private static readonly int Lzyyyy_MM_dd;
		private static readonly int Lzyyyy_MM_ddT;
		private static readonly int LzHH;
		private static readonly int LzHH_;
		private static readonly int LzHH_mm;
		private static readonly int LzHH_mm_;
		private static readonly int LzHH_mm_ss;
		private static readonly int Lz_;
		private static readonly int Lz_zz;
	
		// Constructors
		static DateTimeParser();
	
		// Methods
		public bool Parse(char[] text, int startIndex, int length);
		private bool ParseDate(int start);
		private bool ParseTimeAndZoneAndWhitespace(int start);
		private bool ParseTime(ref int start);
		private bool ParseZone(int start);
		private bool Parse4Digit(int start, out int num);
		private bool Parse2Digit(int start, out int num);
		private bool ParseChar(int start, char ch);
	}
}
