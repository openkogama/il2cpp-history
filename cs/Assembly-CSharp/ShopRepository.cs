/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShopRepository : ARepository
{
	// Fields
	private Dictionary<int, MVItem> shopInventory;
	public List<int> ItemCategoriesInShop;

	// Properties
	public IDictionary<int, MVItem> ShopInventory { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<KeyValuePair<int, MVItem>, int> __9__8_1;
		public static Func<KeyValuePair<int, MVItem>, MVItem> __9__8_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _GetItemsByItemCategories_b__8_1(KeyValuePair<int, MVItem> pair);
		internal MVItem _GetItemsByItemCategories_b__8_2(KeyValuePair<int, MVItem> pair);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public int[] itemCategories;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal bool _GetItemsByItemCategories_b__0(KeyValuePair<int, MVItem> p);
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
	private int _ReorganizeItemsByItemType_b__3_0(int a, int b);
}

