/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.GamePassSystem
{
	public class PlayerTierState
	{
		// Fields
		public readonly TierLockState tierLockState;
		public readonly int remainingGamePointRequired;
		public readonly int remainingGoldPriceRequired;
		public readonly int goldPriceRequirementBase;
		public readonly int gamePointRequirementBase;
	
		// Constructors
		public PlayerTierState(TierLockState tierLockState, int remainingGamePointRequired, int gamePointRequirementBase, int remainingGoldPriceRequired, int goldPriceRequirementBase);
	
		// Methods
		public override string ToString();
	}
}
