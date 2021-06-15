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
	public class SentryExceptionEvent : SentryEvent
	{
		// Fields
		public ExceptionContainer exception;
	
		// Constructors
		public SentryExceptionEvent(string exceptionType, string exceptionValue, List<Breadcrumb> breadcrumbs, List<StackTraceSpec> stackTrace, Dictionary<string, string> tags, Dictionary<string, object> extra);
	}
}
