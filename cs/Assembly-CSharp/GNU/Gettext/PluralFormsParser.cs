/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	internal class PluralFormsParser
	{
		// Fields
		private PluralFormsScanner scanner;
	
		// Properties
		private PluralFormsToken Token { get; }
	
		// Constructors
		public PluralFormsParser(PluralFormsScanner scanner);
	
		// Methods
		public bool Parse(PluralFormsCalculator calculator);
		private PluralFormsNode ParsePlural();
		private bool NextToken();
		private PluralFormsNode Expression();
		private PluralFormsNode LogicalOrExpression();
		private PluralFormsNode LogicalAndExpression();
		private PluralFormsNode EqualityExpression();
		private PluralFormsNode MultiplicativeExpression();
		private PluralFormsNode RelationalExpression();
		private PluralFormsNode PmExpression();
	}
}
