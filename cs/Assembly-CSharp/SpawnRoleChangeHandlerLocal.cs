/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleChangeHandlerLocal : ISpawnRoleChangeHandler
{
	// Fields
	private readonly SpawnRoleDataMediator SpawnRoleDataMediator;

	// Constructors
	public SpawnRoleChangeHandlerLocal(SpawnRoleDataMediator spawnRoleDataMediator);

	// Methods
	public void ActivateSpawnRole(int prevSpawnRoleId, int newSpawnRoleId, Vector3 position, Quaternion rotation);
}

