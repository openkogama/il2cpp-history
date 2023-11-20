/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Xml;
using Newtonsoft.Json;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class DateTimeUtils
	{
		// Fields
		internal static readonly long InitialJavaScriptDateTicks;
		private static readonly int[] DaysToMonth365;
		private static readonly int[] DaysToMonth366;
	
		// Constructors
		static DateTimeUtils();
	
		// Methods
		public static XmlDateTimeSerializationMode ToSerializationMode(DateTimeKind kind);
		internal static DateTime EnsureDateTime(DateTime value, DateTimeZoneHandling timeZone);
		private static DateTime SwitchToLocalTime(DateTime value);
		private static DateTime SwitchToUtcTime(DateTime value);
		private static long ToUniversalTicks(DateTime dateTime);
		private static long ToUniversalTicks(DateTime dateTime, TimeSpan offset);
		internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, TimeSpan offset);
		internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime);
		internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, bool convertToUtc);
		private static long UniversalTicksToJavaScriptTicks(long universalTicks);
		internal static DateTime ConvertJavaScriptTicksToDateTime(long javaScriptTicks);
		internal static bool TryParseDateTimeIso(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt);
		internal static bool TryParseDateTimeOffsetIso(StringReference text, out DateTimeOffset dt);
		private static DateTime CreateDateTime(DateTimeParser dateTimeParser);
		internal static bool TryParseDateTime(StringReference s, DateTimeZoneHandling dateTimeZoneHandling, [Nullable(2)] string dateFormatString, CultureInfo culture, out DateTime dt);
		internal static bool TryParseDateTime(string s, DateTimeZoneHandling dateTimeZoneHandling, [Nullable(2)] string dateFormatString, CultureInfo culture, out DateTime dt);
		internal static bool TryParseDateTimeOffset(StringReference s, [Nullable(2)] string dateFormatString, CultureInfo culture, out DateTimeOffset dt);
		internal static bool TryParseDateTimeOffset(string s, [Nullable(2)] string dateFormatString, CultureInfo culture, out DateTimeOffset dt);
		private static bool TryParseMicrosoftDate(StringReference text, out long ticks, out TimeSpan offset, out DateTimeKind kind);
		private static bool TryParseDateTimeMicrosoft(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt);
		private static bool TryParseDateTimeExact(string text, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt);
		private static bool TryParseDateTimeOffsetMicrosoft(StringReference text, out DateTimeOffset dt);
		private static bool TryParseDateTimeOffsetExact(string text, string dateFormatString, CultureInfo culture, out DateTimeOffset dt);
		private static bool TryReadOffset(StringReference offsetText, int startIndex, out TimeSpan offset);
		internal static void WriteDateTimeString(TextWriter writer, DateTime value, DateFormatHandling format, [Nullable(2)] string formatString, CultureInfo culture);
		internal static int WriteDateTimeString(char[] chars, int start, DateTime value, TimeSpan? offset, DateTimeKind kind, DateFormatHandling format);
		internal static int WriteDefaultIsoDate(char[] chars, int start, DateTime dt);
		private static void CopyIntToCharArray(char[] chars, int start, int value, int digits);
		internal static int WriteDateTimeOffset(char[] chars, int start, TimeSpan offset, DateFormatHandling format);
		internal static void WriteDateTimeOffsetString(TextWriter writer, DateTimeOffset value, DateFormatHandling format, [Nullable(2)] string formatString, CultureInfo culture);
		private static void GetDateValues(DateTime td, out int year, out int month, out int day);
	
		// Extension methods
		public static TimeSpan GetUtcOffset(this DateTime d);
	}
}
