/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class TabMenuBase : MonoBehaviour
{
	// Constructors
	protected TabMenuBase();

	// Methods
	public abstract void AddTabMenuButton(int categoryIndex, string categoryName);
	public abstract void SelectTab(int tab, int currentPage, int maxPages);
}

