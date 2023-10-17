/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.Common;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.GamePassSystem.GamePassProgressionDataObject
{
	public class GamePassProgressionDataObjectShared
	{
		// Fields
		public XPTierRewards xpTierRewards;
	
		// Nested types
		public class XPTierRewards
		{
			// Fields
			public Dictionary<GamePassTier, int> xpTierRewards;
	
			// Constructors
			public XPTierRewards();
	
			// Methods
			public override string ToString();
		}
	
		// Constructors
		public GamePassProgressionDataObjectShared();
		public GamePassProgressionDataObjectShared(XPTierRewards xpTierRewards);
	
		// Methods
		public override string ToString();
	}
}
