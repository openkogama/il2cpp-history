/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVBuildModeAvatar : MVGroup, IUpdatecontrollerSubscriberLateUpdate
{
	// Fields
	protected MVBody body;
	protected AvatarLimbManager limbManager;
	protected MVRuntimeDataVariable CurrentItem;
	protected LimbRotationRuntimeData limbRotationRuntimeData;

	// Properties
	public AvatarLimbManager LimbManager { get; }

	// Constructors
	public MVBuildModeAvatar(Dictionary<object, object> data, GameObject prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void Destroy();
	public override void AddChild(MVWorldObjectClient child);
	public void UpdateControllerLateUpdate();
	protected LaserPointer InitLaser(bool isLocal);
	protected abstract Vector3 GetLookDirection();
}

