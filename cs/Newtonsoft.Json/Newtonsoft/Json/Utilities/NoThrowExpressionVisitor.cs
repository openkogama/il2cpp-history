/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Linq.Expressions;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class NoThrowExpressionVisitor : ExpressionVisitor
	{
		// Fields
		internal static readonly object ErrorResult;
	
		// Constructors
		public NoThrowExpressionVisitor();
		static NoThrowExpressionVisitor();
	
		// Methods
		protected override System.Linq.Expressions.Expression VisitConditional(ConditionalExpression node);
	}
}
