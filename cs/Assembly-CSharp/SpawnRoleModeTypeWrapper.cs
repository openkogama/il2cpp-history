/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.SpawnRoleVariableTypes;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleModeTypeWrapper
{
	// Fields
	private readonly SpawnRoleVariable<SpawnRoleModeType> spawnRoleType;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Action<SpawnRoleModeType> OnChange;

	// Events
	public event Action<SpawnRoleModeType> OnChange {
		add;
		remove;
	}

	// Constructors
	public SpawnRoleModeTypeWrapper(SpawnRoleVariable<SpawnRoleModeType> spawnRoleType);

	// Methods
	public bool IsInMode(SpawnRoleModeType t);
	private void OnChangeInternal(SpawnRoleModeType obj);
}

