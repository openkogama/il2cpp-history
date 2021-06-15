/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerRepository : ARepository
{
	// Fields
	private Dictionary<int, MVItem> playerInventory;
	[CompilerGenerated]
	private static Func<KeyValuePair<int, MVItem>, int> __f__am_cache0;
	[CompilerGenerated]
	private static Func<KeyValuePair<int, MVItem>, MVItem> __f__am_cache1;

	// Properties
	public IDictionary<int, MVItem> PlayerInventory { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _GetItemsByItemCategory_c__AnonStorey0
	{
		// Fields
		internal int[] itemCategories;

		// Constructors
		public _GetItemsByItemCategory_c__AnonStorey0();

		// Methods
		internal bool __m__0(KeyValuePair<int, MVItem> p);
	}

	[CompilerGenerated]
	private sealed class _CountItemsWithOriginalID_c__AnonStorey1
	{
		// Fields
		internal int originalId;

		// Constructors
		public _CountItemsWithOriginalID_c__AnonStorey1();

		// Methods
		internal bool __m__0(KeyValuePair<int, MVItem> p);
	}

	// Constructors
	public PlayerRepository();

	// Methods
	public override void RemoveItem(int itemId);
	public Dictionary<int, MVItem> GetItemsByItemCategory(int[] itemCategories);
	public int CountItemsWithOriginalID(int originalId);
	public void CreateWorldObjectHierarchies();
	[CompilerGenerated]
	private static int _GetItemsByItemCategory_m__0(KeyValuePair<int, MVItem> pair);
	[CompilerGenerated]
	private static MVItem _GetItemsByItemCategory_m__1(KeyValuePair<int, MVItem> pair);
}

