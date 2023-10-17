/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESAddToMarketPlaceState : ESStateBase
{
	// Fields
	private AddToMarketPlaceInternalState internalState;
	private BytePacker inventoryItemData;
	private BytePacker marketPlaceItemData;

	// Nested types
	private enum AddToMarketPlaceInternalState
	{
		None = 0,
		WaitingForMarketPlaceItem = 1,
		CompareMarketPlaceItemWithInventoryItem = 2,
		WaitingForMarketPlaceInfo = 3
	}

	// Constructors
	public ESAddToMarketPlaceState();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	private void WOCM_ReceivedItemFromQuery(object sender, ReceivedItemFromQueryEventArgs e);
	public override void Exit(EditorStateMachine e);
}

