/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.GamePassSystem.GamePassEarnings;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class SubscriberRewardDataManager
{
	// Fields
	private static SubscriberRewardData subscriberRewardData;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static KogamaVatValues _VatValues_k__BackingField;

	// Properties
	public static KogamaVatValues VatValues { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	private struct SubscriberRewardData
	{
		// Fields
		public int baseXPBonus;
	}

	// Constructors
	static SubscriberRewardDataManager();

	// Methods
	public static void SetBaseXPBonus(int baseXpBonus);
	public static int GetBaseXpAmount();
}

