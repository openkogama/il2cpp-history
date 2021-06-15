/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class FirstPersonCamera : MVCameraBase
{
	// Fields
	[Header]
	[SerializeField]
	private float cameraHeight;
	[SerializeField]
	protected float maxLookAngleDownward;
	[SerializeField]
	protected float maxLookAngleUpward;
	[HideInInspector]
	[SerializeField]
	private Vector3 cameraOffset;
	[SerializeField]
	protected float pitchSensitivity;
	[SerializeField]
	protected float yawSensitivity;
	[SerializeField]
	private FirstPersonWeaponBob weaponBob;
	[Header]
	[SerializeField]
	private DamageIndicator damageIndicator;
	[SerializeField]
	private ModifierIndicator modifierIndicator;
	[SerializeField]
	private HealingIndicator healingIndicator;
	[SerializeField]
	protected TargetRotation smoothRotation;
	protected Vector2 targetRotation;
	private MVAvatarLocal localAvatar;
	private List<MeshRenderer> vehiclesHiddenMeshRenderers;
	private bool haveHiddenVehicle;

	// Properties
	public override CameraType CameraType { get; }
	public override float FieldOfView { get; }

	// Constructors
	protected FirstPersonCamera();

	// Methods
	protected abstract void UpdateCameraRotation();
	public override void Reset();
	public void Initialize(MVAvatarLocal avatarLocal);
	private void Initialize();
	public override void Enter(MVCameraController cameraController);
	public override void Resume(MVCameraController cameraController);
	public override void Exit(MVCameraController camController);
	public override void Suspend(MVCameraController camController);
	private void ActivateFirstPerson();
	private void OnDestroy();
	private void DeactivateFirstPerson();
	private void MoveItemToFirstpersonView(PickupItem item);
	private void HideBody(bool shouldHideBody);
	private void HideBlinking(bool shouldHideBlinking);
	private void HideVehicle();
	private void ShowVehicle();
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private void UpdateCameraPosition();
	private void UpdateAvatar();
}

