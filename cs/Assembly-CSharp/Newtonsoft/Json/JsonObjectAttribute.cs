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
	public sealed class JsonObjectAttribute : JsonContainerAttribute
	{
		// Fields
		private MemberSerialization _memberSerialization;
	
		// Properties
		public MemberSerialization MemberSerialization { get; set; }
	
		// Constructors
		public JsonObjectAttribute();
		public JsonObjectAttribute(MemberSerialization memberSerialization);
		public JsonObjectAttribute(string id);
	}
}
