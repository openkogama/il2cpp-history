/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ItemCategories
{
	// Fields
	private Dictionary<string, int> itemCategoriesNameID;
	private Dictionary<int, string> itemCategoriesIDName;

	// Constructors
	public ItemCategories(Dictionary<string, int> itemCategories);

	// Methods
	public int NameToID(string name);
	public string IDToName(int id);
	public string[] GetNames();
}

