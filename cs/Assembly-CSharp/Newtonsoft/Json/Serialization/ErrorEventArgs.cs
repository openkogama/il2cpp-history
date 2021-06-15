/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class ErrorEventArgs : EventArgs
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private object _CurrentObject_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private ErrorContext _ErrorContext_k__BackingField;
	
		// Properties
		public object CurrentObject { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public ErrorContext ErrorContext { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public ErrorEventArgs(object currentObject, ErrorContext errorContext);
	}
}
