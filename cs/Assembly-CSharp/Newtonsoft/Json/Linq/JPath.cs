/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	internal class JPath
	{
		// Fields
		private readonly string _expression;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private List<object> _Parts_k__BackingField;
		private int _currentIndex;
	
		// Properties
		public List<object> Parts { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public JPath(string expression);
	
		// Methods
		private void ParseMain();
		private void ParseIndexer(char indexerOpenChar);
		internal JToken Evaluate(JToken root, bool errorWhenNoMatch);
	}
}
