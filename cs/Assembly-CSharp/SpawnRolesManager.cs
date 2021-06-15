/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.SpawnRoles;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRolesManager
{
	// Fields
	private readonly SpawnRolesRuntimeData spawnRolesRuntimeData;
	private readonly ISpawnRoleChangeHandler spawnRoleChangeHandler;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Action<int> OnSpawnRoleActivated;

	// Properties
	public int SpawnRoleId { get; }

	// Events
	public event Action<int> OnSpawnRoleActivated {
		add;
		remove;
	}

	// Constructors
	public SpawnRolesManager(ISpawnRoleChangeHandler spawnRoleChangeHandler, SpawnRolesRuntimeData spawnRolesRuntimeData);

	// Methods
	public void ActivateSpawnRole(int newSpawnRoleId, Vector3 position, Quaternion rotation);
	public void OnAvatarCreated(int id);
	public void AddSpawnRole(int id);
}

