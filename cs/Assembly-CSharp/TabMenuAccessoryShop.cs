/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TabMenuAccessoryShop : TabMenuBase
{
	// Fields
	private Dictionary<int, TabMenuButtonBase> buttons;
	[SerializeField]
	private UnityEngine.UI.Text pages;
	[SerializeField]
	private TabMenuButtonBase tabMenuButtonPrefab;
	[SerializeField]
	private List<GameObject> pageButtons;
	[SerializeField]
	private List<TabMenuButtonNonLayoutDef> nonLayoutTabButtons;

	// Nested types
	[Serializable]
	private class TabMenuButtonNonLayoutDef
	{
		// Fields
		public AccessoryCategoryClient category;
		public TabMenuButtonBase tabMenuButton;

		// Constructors
		public TabMenuButtonNonLayoutDef();
	}

	// Constructors
	public TabMenuAccessoryShop();

	// Methods
	public TabMenuButtonBase GetTabMenuButton(AccessoryCategoryClient category);
	public void DestroyTab(AccessoryCategoryClient category);
	public override void AddTabMenuButton(int categoryIndex, string categoryName);
	public override void SelectTab(int tab, int currentPage, int maxPages);
}

