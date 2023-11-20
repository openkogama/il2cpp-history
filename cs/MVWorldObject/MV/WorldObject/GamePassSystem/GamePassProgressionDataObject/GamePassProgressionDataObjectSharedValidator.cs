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
using MV.WorldObject.AntiCheat;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.GamePassSystem.GamePassProgressionDataObject
{
	public class GamePassProgressionDataObjectSharedValidator
	{
		// Fields
		public XPTiersRewardsValidator XpTiersRewardsValidator;
	
		// Nested types
		public class XPTiersRewardsValidator
		{
			// Fields
			public Dictionary<GamePassTier, XPTierRewardValidator> xpTierRewardsValidators;
	
			// Nested types
			public class XPTierRewardValidator
			{
				// Fields
				public bool isRemovalAllowed;
				public RangeValidator<int> rangeValidator;
	
				// Constructors
				public XPTierRewardValidator(bool isRemovalAllowed, RangeValidator<int> rangeValidator);
	
				// Methods
				public int Validate(int xpTierReward, bool fixIfInValid);
				public override string ToString();
			}
	
			// Constructors
			public XPTiersRewardsValidator();
			public XPTiersRewardsValidator(Dictionary<GamePassTier, RangeValidator<int>> xpRangeValidators, Dictionary<GamePassTier, bool> xpRewardRemovalAllowed);
	
			// Methods
			public void Validate(Dictionary<GamePassTier, int> xpTierRewards, bool fixIfInValid);
			public override string ToString();
		}
	
		// Constructors
		public GamePassProgressionDataObjectSharedValidator();
		public GamePassProgressionDataObjectSharedValidator(XPTiersRewardsValidator xpTiersRewardsValidator);
		public GamePassProgressionDataObjectSharedValidator(Dictionary<GamePassTier, RangeValidator<int>> xpRangeValidators, Dictionary<GamePassTier, bool> xpRewardRemovalAllowed);
	
		// Methods
		public GamePassProgressionDataObjectShared Validate(GamePassProgressionDataObjectShared gamePassProgressionDataObjectShared, bool fixIfInValid);
		public override string ToString();
	}
}
