/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleAvatarSelectionDataController : MonoBehaviour, IHandleSpawnRoleAvatarSelectionData
{
	// Fields
	private List<SpawnRoleAvatarSelectionData> avatarSelectionDataList;
	private UnityAction<List<SpawnRoleAvatarSelectionData>> onDataRecieved;

	// Constructors
	public SpawnRoleAvatarSelectionDataController();

	// Methods
	public void TryGetSpawnRoleAvatarSelectionData(UnityAction<List<SpawnRoleAvatarSelectionData>> onDataReady);
	private void OnDestroy();
	private void GameOnReceivedAvatarBodiesFromQuery(object sender, ReceivedItemFromQueryEventArgs e);
}

