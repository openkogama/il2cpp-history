/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTeleporter : MVLogicObject
{
	// Fields
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private List<int> avatarIgnoreList;
	private MVTeleporterObject teleportObject;
	private TeleportAvatar teleportAvatarPrefab;
	private MVTeleporter target;
	private UseInteractor useInteractor;
	private bool isDestroyed;

	// Properties
	public override Vector3 InputConnectorOffset { get; }
	public override Vector3 ObjectConnectorOffset { get; }
	public override Quaternion ObjectConnectorRotation { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	public override bool HasObjectConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public MVTeleporter Target { set; }

	// Constructors
	public MVTeleporter(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	private void SetupUseInteractor();
	public override void OnDataUpdate();
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
	public override bool ValidateObjectLinkTarget(MVWorldObjectClient wo);
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private bool DoTeleport(int instigatorWOID);
	private void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	public override void Destroy();
}

