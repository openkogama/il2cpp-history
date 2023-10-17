/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public class JsonReaderException : Exception
	{
		// Fields
		[CompilerGenerated]
		private int _LineNumber_k__BackingField;
		[CompilerGenerated]
		private int _LinePosition_k__BackingField;
	
		// Properties
		public int LineNumber { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int LinePosition { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public JsonReaderException();
		public JsonReaderException(string message);
		public JsonReaderException(string message, Exception innerException);
		internal JsonReaderException(string message, Exception innerException, int lineNumber, int linePosition);
	}
}
