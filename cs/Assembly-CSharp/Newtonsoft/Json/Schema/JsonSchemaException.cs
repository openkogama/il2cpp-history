/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	[Serializable]
	public class JsonSchemaException : Exception
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int _LineNumber_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int _LinePosition_k__BackingField;
	
		// Properties
		public int LineNumber { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int LinePosition { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public JsonSchemaException();
		public JsonSchemaException(string message);
		public JsonSchemaException(string message, Exception innerException);
		public JsonSchemaException(SerializationInfo info, StreamingContext context);
		internal JsonSchemaException(string message, Exception innerException, int lineNumber, int linePosition);
	}
}
