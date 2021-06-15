/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Sentry
{
	[Serializable]
	public class ExceptionSpec
	{
		// Fields
		public string type;
		public string value;
		public StackTraceContainer stacktrace;
	
		// Constructors
		public ExceptionSpec(string type, string value, List<StackTraceSpec> stacktrace);
	}
}
