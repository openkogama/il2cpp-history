/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class ErrorContext
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Exception _Error_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private object _OriginalObject_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private object _Member_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _Handled_k__BackingField;
	
		// Properties
		public Exception Error { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public object OriginalObject { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public object Member { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public bool Handled { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		internal ErrorContext(object originalObject, object member, Exception error);
	}
}
