/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public static class ObjectCloning
	{
		// Fields
		private static Config _defaultConfig;
	
		// Properties
		public static Config DefaultConfig { get; }
	
		// Nested types
		[Flags]
		public enum TransformFlags
		{
			None = 0,
			Position = 1,
			Rotation = 2,
			Scale = 4,
			All = 7
		}
	
		public struct Config
		{
			// Fields
			public Transform Parent;
			public TransformFlags TransformFlags;
			public int Layer;
		}
	
		// Constructors
		static ObjectCloning();
	
		// Methods
		public static List<GameObject> CloneHierarchies(List<GameObject> roots, Config cloneConfig);
		public static GameObject CloneHierarchy(GameObject root, Config cloneConfig);
	}
}
