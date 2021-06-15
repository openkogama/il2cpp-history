/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	[AttributeUsage]
	public sealed class JsonConverterAttribute : Attribute
	{
		// Fields
		private readonly Type _converterType;
	
		// Properties
		public Type ConverterType { get; }
	
		// Constructors
		public JsonConverterAttribute(Type converterType);
	
		// Methods
		internal static JsonConverter CreateJsonConverterInstance(Type converterType);
	}
}
