/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVBuildModeAvatarRemote : MVBuildModeAvatar, ISpawnRoleRemote
{
	// Fields
	private LaserPointer laserPointer;
	private readonly AvatarRemoteBuildMode avatarRemoteBuildMode;
	private readonly DynamicCullingHandler cullingHandler;

	// Properties
	int ISpawnRoleRemote.Id { get; }

	// Constructors
	public MVBuildModeAvatarRemote(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void InitializeLaserPointerAndEditCube();
	private void ReceivedPlanetPermissionsDataCallback(Dictionary<int, List<int>> planetPermissionsEntries);
	private void HandleLaserActive(bool isLocal, bool isActive);
	public override void Destroy();
	public void Activate(int idFrom, Vector3 position, Quaternion rotation);
	public void DeActivate(int idTo);
	private void SetLaserPointerVisibility(bool isVisible);
	protected override Vector3 GetLookDirection();
}

