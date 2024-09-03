/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class Singleton<T>
		where T : class, new()
	{
		// Fields
		private static T _instance;
	
		// Properties
		public static T Get { get; }
	
		// Constructors
		protected Singleton();
		static Singleton();
	}
}
