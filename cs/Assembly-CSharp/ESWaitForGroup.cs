/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESWaitForGroup : ESStateBase
{
	// Fields
	private bool abort;
	private bool responseReceived;
	private List<int> lockList;
	private int lockCount;
	private WaitForGroupsState state;
	private int createGroupId;

	// Nested types
	private enum WaitForGroupsState
	{
		WaitingForLock = 0,
		WaitingForGroup = 1,
		WaitingForTransferWos = 2
	}

	// Constructors
	public ESWaitForGroup();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	private void WOCM_OnTransferWosResponse(object sender, OnTransferWosResponseEventArgs e);
	public void CreateGroup(EditorStateMachine e);
	private void WOCM_InitializedGameQueryData(object sender, InitializedGameQueryDataEventArgs e);
	private void WOCM_OnHierarchyLockedResponse(object sender, OnHierarchyLockedEventArgs e);
	public override void Exit(EditorStateMachine e);
}

