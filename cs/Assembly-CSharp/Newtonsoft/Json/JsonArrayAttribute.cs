/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = false)]
	public sealed class JsonArrayAttribute : JsonContainerAttribute
	{
		// Fields
		private bool _allowNullItems;
	
		// Properties
		public bool AllowNullItems { get; set; }
	
		// Constructors
		public JsonArrayAttribute();
		public JsonArrayAttribute(bool allowNullItems);
		public JsonArrayAttribute(string id);
	}
}
