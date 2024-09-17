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
[assembly: AssemblyCompany("Newtonsoft")]
[assembly: AssemblyConfiguration("UnityAOT")]
[assembly: AssemblyCopyright("Copyright \u00A9 James Newton-King 2008")]
[assembly: AssemblyDelaySign(true)]
[assembly: AssemblyDescription("Json.NET is a popular high-performance JSON framework for .NET")]
[assembly: AssemblyFileVersion("13.0.2")]
[assembly: AssemblyInformationalVersion("13.0.2+cf0a246981c33ae00121dfe58b850aefeac1aac0")]
[assembly: AssemblyKeyFile("../IdentityPublicKey.snk")]
[assembly: AssemblyMetadata("RepositoryUrl", "https://github.com/sousapedro/Newtonsoft.Json-for-Unity.git")]
[assembly: AssemblyProduct("Json.NET")]
[assembly: AssemblyTitle("Json.NET .NET Standard 2.0")]
[assembly: AssemblyTrademark("")]
[assembly: CLSCompliant(true)]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: Guid("9ca358aa-317b-4925-8ada-4a29e943a363")]
[assembly: InternalsVisibleTo("Newtonsoft.Json.Schema, PublicKey=0024000004800000940000000602000000240000525341310004000001000100f561df277c6c0b497d629032b410cdcf286e537c054724f7ffa0164345f62b3e642029d7a80cc351918955328c4adc8a048823ef90b0cf38ea7db0d729caf2b633c3babe08b0310198c1081995c19029bc675193744eab9d7345b8a67258ec17d112cebdbbb2a281487dceeafb9d83aa930f32103fbe1d2911425bc5744002c7")]
[assembly: InternalsVisibleTo("Newtonsoft.Json.Tests, PublicKey=0024000004800000940000000602000000240000525341310004000001000100f561df277c6c0b497d629032b410cdcf286e537c054724f7ffa0164345f62b3e642029d7a80cc351918955328c4adc8a048823ef90b0cf38ea7db0d729caf2b633c3babe08b0310198c1081995c19029bc675193744eab9d7345b8a67258ec17d112cebdbbb2a281487dceeafb9d83aa930f32103fbe1d2911425bc5744002c7")]
[assembly: InternalsVisibleTo("Newtonsoft.Json.Dynamic, PublicKey=0024000004800000940000000602000000240000525341310004000001000100cbd8d53b9d7de30f1f1278f636ec462cf9c254991291e66ebb157a885638a517887633b898ccbcf0d5c5ff7be85a6abe9e765d0ac7cd33c68dac67e7e64530e8222101109f154ab14a941c490ac155cd1d4fcba0fabb49016b4ef28593b015cab5937da31172f03f67d09edda404b88a60023f062ae71d0b2e4438b74cc11dc9")]
[assembly: NeutralResourcesLanguage("en-US")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: TargetFramework(".NETStandard,Version=v2.0", FrameworkDisplayName = "")]

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(1)]
	public static class JsonConvert
	{
		// Fields
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private static Func<JsonSerializerSettings> _DefaultSettings_k__BackingField;
		public static readonly string True;
		public static readonly string False;
		public static readonly string Null;
		public static readonly string Undefined;
		public static readonly string PositiveInfinity;
		public static readonly string NegativeInfinity;
		public static readonly string NaN;
	
		// Properties
		[Nullable(new byte[2] {2, 1 })]
		public static Func<JsonSerializerSettings> DefaultSettings { [CompilerGenerated] get; }
	
		// Constructors
		static JsonConvert();
	
		// Methods
		public static string ToString(bool value);
		public static string ToString(char value);
		internal static string ToString(float value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable);
		private static string EnsureFloatFormat(double value, string text, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable);
		internal static string ToString(double value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable);
		private static string EnsureDecimalPlace(double value, string text);
		private static string EnsureDecimalPlace(string text);
		public static string ToString(decimal value);
		public static string ToString([Nullable(2)] string value);
		public static string ToString([Nullable(2)] string value, char delimiter);
		public static string ToString([Nullable(2)] string value, char delimiter, StringEscapeHandling stringEscapeHandling);
		[DebuggerStepThrough]
		public static string SerializeObject([Nullable(2)] object value);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public static string SerializeObject(object value, System.Type type, JsonSerializerSettings settings);
		private static string SerializeObjectInternal([Nullable(2)] object value, [Nullable(2)] System.Type type, JsonSerializer jsonSerializer);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public static T DeserializeObject<T>([Nullable(1)] string value);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public static T DeserializeObject<T>([Nullable(1)] string value, JsonSerializerSettings settings);
		[NullableContext(2)]
		public static object DeserializeObject([Nullable(1)] string value, System.Type type, JsonSerializerSettings settings);
	}
}
