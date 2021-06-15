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
	public class SentryEvent
	{
		// Fields
		public string event_id;
		public string message;
		public string timestamp;
		public string logger;
		public string level;
		public string platform;
		public string release;
		public Context contexts;
		public SdkVersion sdk;
		public List<Breadcrumb> breadcrumbs;
		public Dictionary<string, string> tags;
		public Dictionary<string, object> extra;
	
		// Constructors
		public SentryEvent(string message, Dictionary<string, string> tags, Dictionary<string, object> extra, List<Breadcrumb> breadcrumbs = null);
	}
}
