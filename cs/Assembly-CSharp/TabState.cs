/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TabState
{
	// Fields
	private int slotsPrPage;
	public readonly string name;
	public int highestSlotIndex;
	public int currentPage;

	// Properties
	public int MaxPages { get; }
	public int[] SlotRange { get; }

	// Constructors
	public TabState(string name, int slotsPrPage);

	// Methods
	public bool UpdatePage(int pageDir);
	public bool SetPage(int page);
	public bool SlotIndexIsInRange(int slotIndex);
}

