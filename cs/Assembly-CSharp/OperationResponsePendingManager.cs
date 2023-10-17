/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class OperationResponsePendingManager
{
	// Fields
	private HashSet<MVOperationCodes> pendingOperations;
	private PhotonPeer peer;

	// Constructors
	public OperationResponsePendingManager(PhotonPeer peer);

	// Methods
	public bool AddOperationCodeToPending(MVOperationCodes operationCode, Dictionary<byte, object> data);
	public void TryRemovePendingOperation(MVOperationCodes operationCode);
	public bool IsOperationPending(MVOperationCodes operationCode);
}

