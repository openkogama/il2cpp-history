/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	public class ValidationEventArgs : EventArgs
	{
		// Fields
		private readonly JsonSchemaException _ex;
	
		// Properties
		public JsonSchemaException Exception { get; }
		public string Message { get; }
	
		// Constructors
		internal ValidationEventArgs(JsonSchemaException ex);
	}
}
