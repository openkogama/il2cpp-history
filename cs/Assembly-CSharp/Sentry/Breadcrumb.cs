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
	public class Breadcrumb
	{
		// Fields
		public const int MaxBreadcrumbs = 100;
		public string timestamp;
		public string message;
	
		// Constructors
		public Breadcrumb(string timestamp, string message);
	
		// Methods
		public static List<Breadcrumb> CombineBreadcrumbs(Breadcrumb[] breadcrumbs, int index, int number);
	}
}
