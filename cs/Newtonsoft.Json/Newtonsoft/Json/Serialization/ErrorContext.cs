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

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	public class ErrorContext
	{
		// Fields
		[CompilerGenerated]
		private bool _Traced_k__BackingField;
		[CompilerGenerated]
		private readonly Exception _Error_k__BackingField;
		[CompilerGenerated]
		[Nullable(2)]
		private readonly object _OriginalObject_k__BackingField;
		[CompilerGenerated]
		[Nullable(2)]
		private readonly object _Member_k__BackingField;
		[CompilerGenerated]
		private readonly string _Path_k__BackingField;
		[CompilerGenerated]
		private bool _Handled_k__BackingField;
	
		// Properties
		internal bool Traced { [CompilerGenerated] get; [CompilerGenerated] set; }
		public Exception Error { [CompilerGenerated] get; }
		public bool Handled { [CompilerGenerated] get; }
	
		// Constructors
		internal ErrorContext([Nullable(2)] object originalObject, [Nullable(2)] object member, string path, Exception error);
	}
}
