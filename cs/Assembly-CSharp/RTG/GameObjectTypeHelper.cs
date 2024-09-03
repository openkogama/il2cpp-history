/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public static class GameObjectTypeHelper
	{
		// Fields
		private static int _numTypes;
		private static List<GameObjectType> _allObjectTypes;
		private static GameObjectType _allCombined;
	
		// Properties
		public static int NumTypes { get; }
		public static GameObjectType[] AllObjectTypes { get; }
		public static GameObjectType AllCombined { get; }
	
		// Constructors
		static GameObjectTypeHelper();
	
		// Methods
		public static bool Is3DObjectType(GameObjectType objectType);
		public static bool Is2DObjectType(GameObjectType objectType);
		public static bool HasVolume(GameObjectType objectType);
		public static bool IsTypeBitSet(int objectTypeMask, GameObjectType typeBit);
		public static int SetTypeBit(int objectTypeMask, GameObjectType typeBit);
		public static int ClearTypeBit(int objectTypeMask, GameObjectType typeBit);
	}
}
