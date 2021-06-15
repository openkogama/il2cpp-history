/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVNetworkSelector
{
	// Fields
	private readonly EditorStateMachine esm;
	private Queue<int> pendingRequestedOwnershipIds;

	// Properties
	private static MVWorldObjectClientManager WOCM { get; }

	// Constructors
	public MVNetworkSelector(EditorStateMachine esm);

	// Methods
	public bool RequestOwnership(HashSet<int> selectionSet);
	public bool CanRequestOwnerShip(int id);
	public void RequestReleaseOwnership(HashSet<int> selectionSet);
	private static bool CanRequestOwnership(HashSet<int> selectionSet);
	private static bool OwnershipTest(int id);
	private void RequestOwnership(int id);
	private static void RequestReleaseOwnership(int id);
	private void Instance_OnWorldObjectTransferOwnershipResponse(object sender, OnTransferOwnershipResponseEventArgs e);
}

