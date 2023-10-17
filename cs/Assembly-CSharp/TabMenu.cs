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

public class TabMenu : TabMenuBase
{
	// Fields
	private readonly Dictionary<int, TabMenuButtonBase> buttons;
	[SerializeField]
	private UnityEngine.UI.Text pages;
	[SerializeField]
	private TabMenuButtonBase tabMenuButtonPrefab;

	// Constructors
	public TabMenu();

	// Methods
	public override void AddTabMenuButton(int categoryIndex, string categoryName);
	public override void SelectTab(int tab, int currentPage, int maxPages);
}

