/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Borodar.FarlandSkies.CloudyCrownPro.DotParams
{
	[Serializable]
	public abstract class SortedParamsList<T>
		where T : DotParam
	{
		// Fields
		public T[] Params;
		protected DotParamsList<T> SortedParams;
	
		// Constructors
		protected SortedParamsList();
	
		// Methods
		public void Init();
		public void Update();
	}
}
