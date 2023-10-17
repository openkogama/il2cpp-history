/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.AntiCheat;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class GamePassProgressionController
{
	// Fields
	private static MVGamePassProgressionDataObject progressionDataObject;
	private static bool isInitialized;
	public static Action OnGamePassesProgressionUpdate;

	// Properties
	public static bool IsProgressionEnabled { get; }

	// Methods
	public static void Initialize();
	public static int GetXPReward(GamePassTier tier);
	public static void SetXPReward(GamePassTier tier, int xpReward);
	public static RangeValidator<int> GetXPRewardRangeValidator(GamePassTier tier);
}

