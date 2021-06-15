/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class AccessoryDataManager
{
	// Fields
	public static UnityAction readyCallback;
	private static bool accessoriesRequested;
	private static bool accessoriesReady;
	private static AccessoryShopDataClient accessoryShopData;
	[CompilerGenerated]
	private static Action<string> __f__mg_cache0;

	// Properties
	public static int AccessoryBundleId { get; }
	public static AccessoryBundleClient AccessoryBundleClient { get; }

	// Constructors
	static AccessoryDataManager();

	// Methods
	public static void SetReady();
	public static void Reset();
	public static void SetAccessoryData(string accessoryData);
	public static void SetToOwns(int streamingAssetId);
	public static AccessoryDataClient GetAccessoryDataByStreamingAssetId(int id);
	public static AccessoryDataClient GetAccessoryDataByMetaDataId(int id);
	public static Dictionary<AccessoryCategory, List<AccessoryDataClient>> GetAccessoriesCategoryMap();
	public static List<AccessoryDataClient> GetAccessoriesByCategoryId(AccessoryCategory category);
}

