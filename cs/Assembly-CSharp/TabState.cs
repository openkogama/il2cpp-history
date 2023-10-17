/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TabState
{
	// Fields
	private readonly int slotsPrPage;
	public readonly string name;
	public int highestSlotIndex;
	public int currentPage;
	[CompilerGenerated]
	private int _TabID_k__BackingField;

	// Properties
	public int MaxPages { get; }
	public int[] SlotRange { get; }
	public int TabID { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public TabState(int tabId, string name, int slotsPrPage);

	// Methods
	public bool UpdatePage(int pageDir);
	public bool SetPage(int page);
	public bool SlotIndexIsInRange(int slotIndex);
}

