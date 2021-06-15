/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShopRepository : ARepository
{
	// Fields
	private Dictionary<int, MVItem> shopInventory;
	public List<int> ItemCategoriesInShop;
	[CompilerGenerated]
	private static Func<KeyValuePair<int, MVItem>, int> __f__am_cache0;
	[CompilerGenerated]
	private static Func<KeyValuePair<int, MVItem>, MVItem> __f__am_cache1;

	// Properties
	public IDictionary<int, MVItem> ShopInventory { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _GetItemsByItemCategories_c__AnonStorey0
	{
		// Fields
		internal int[] itemCategories;

		// Constructors
		public _GetItemsByItemCategories_c__AnonStorey0();

		// Methods
		internal bool __m__0(KeyValuePair<int, MVItem> p);
	}

	// Constructors
	public ShopRepository();

	// Methods
	public void ReorganizeItemsByItemType(bool notifyOfChange = false);
	public override void RemoveItem(int itemId);
	public Dictionary<int, MVItem> GetItemsByCategory(int itemCategory);
	public Dictionary<int, MVItem> GetItemsByItemCategories(int[] itemCategories);
	public void CreateWorldObjectHierarchies();
	[CompilerGenerated]
	private int _ReorganizeItemsByItemType_m__0(int a, int b);
	[CompilerGenerated]
	private static int _GetItemsByItemCategories_m__1(KeyValuePair<int, MVItem> pair);
	[CompilerGenerated]
	private static MVItem _GetItemsByItemCategories_m__2(KeyValuePair<int, MVItem> pair);
}

