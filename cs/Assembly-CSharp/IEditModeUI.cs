/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Desktop.Scripts.EditMode.Inventories;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IEditModeUI
{
	// Properties
	bool IsInPlayInEditMode { get; }
	Action<EditModeChangeArgs> EditModeChange { get; set; }
	PlayerShopInventoryRepository PlayerShopInventoryRepository { get; set; }

	// Methods
	bool IsGridSnap();
}

