/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Sentry
{
	[Serializable]
	public class StackTraceSpec
	{
		// Fields
		public string filename;
		public string function;
		public string module;
		public int lineno;
		public bool in_app;
	
		// Constructors
		public StackTraceSpec(string filename, string function, int lineNo, bool inApp);
	
		// Methods
		public override string ToString();
	}
}
