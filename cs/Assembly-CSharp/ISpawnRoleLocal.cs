/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface ISpawnRoleLocal
{
	// Properties
	int Id { get; }

	// Methods
	void Activate(int idFrom, SpawnRoleDataReceiver spawnRoleDataReceiver, Vector3 position, Quaternion rotation);
	void DeActivate(int idTo, SpawnRoleDataReceiver spawnRoleDataReceiver);
	void Suspend();
	void UnSuspend();
}

