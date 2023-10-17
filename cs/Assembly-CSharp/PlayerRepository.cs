/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerRepository : ARepository
{
	// Fields
	private Dictionary<int, MVItem> playerInventory;

	// Properties
	public IDictionary<int, MVItem> PlayerInventory { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public int[] itemCategories;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal bool _GetItemsByItemCategory_b__0(KeyValuePair<int, MVItem> p);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<KeyValuePair<int, MVItem>, int> __9__5_1;
		public static Func<KeyValuePair<int, MVItem>, MVItem> __9__5_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _GetItemsByItemCategory_b__5_1(KeyValuePair<int, MVItem> pair);
		internal MVItem _GetItemsByItemCategory_b__5_2(KeyValuePair<int, MVItem> pair);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public int originalId;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal bool _CountItemsWithOriginalID_b__0(KeyValuePair<int, MVItem> p);
	}

	// Constructors
	public PlayerRepository();

	// Methods
	public override void RemoveItem(int itemId);
	public Dictionary<int, MVItem> GetItemsByItemCategory(int[] itemCategories);
	public int CountItemsWithOriginalID(int originalId);
	public void CreateWorldObjectHierarchies();
}

