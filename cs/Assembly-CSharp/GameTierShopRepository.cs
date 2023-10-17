/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameTierShopRepository
{
	// Fields
	private Dictionary<GamePassTier, Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>>> tierShopData;

	// Constructors
	public GameTierShopRepository();

	// Methods
	public Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> GetTierItemData(GamePassTier tier);
	public void AddItemToTierShop(GamePassTier tier, MVWorldObjectDocumentationType documentationType, MVWorldObjectClient worldObject);
	public void RemoveItemToTierShop(GamePassTier tier, MVWorldObjectDocumentationType documentationType, int woid);
}

