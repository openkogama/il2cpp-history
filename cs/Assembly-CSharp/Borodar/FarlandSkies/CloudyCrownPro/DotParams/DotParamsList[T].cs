/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Borodar.FarlandSkies.CloudyCrownPro.DotParams
{
	public class DotParamsList<T> : SortedList<float, T>
	{
		// Constructors
		public DotParamsList(int capacity);
	
		// Methods
		public int FindIndexPerTime(float time);
		private static int BinarySearch<T>(IList<T> list, T value);
	}
}
