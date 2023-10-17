/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	internal class PluralFormsToken
	{
		// Fields
		private Type type;
		private int number;
	
		// Properties
		public Type TokenType { get; set; }
		public int Number { get; set; }
	
		// Nested types
		public enum Type
		{
			Error = 0,
			Eof = 1,
			Number = 2,
			N = 3,
			Plural = 4,
			Nplurals = 5,
			Equal = 6,
			Assign = 7,
			Greater = 8,
			GreaterOrEqual = 9,
			Less = 10,
			LessOrEqual = 11,
			Reminder = 12,
			NotEqual = 13,
			LogicalAnd = 14,
			LogicalOr = 15,
			Question = 16,
			Colon = 17,
			Semicolon = 18,
			LeftBracket = 19,
			RightBracket = 20
		}
	
		// Constructors
		public PluralFormsToken();
		public PluralFormsToken(PluralFormsToken src);
	
		// Methods
		public override string ToString();
	}
}
