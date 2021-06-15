/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarLimbManagerRemote : AvatarLimbManager
{
	// Fields
	private AvatarHeadRotationHandlerRemote headRotationHandler;
	private AvatarPointingHandlerRemote pointingHandler;
	private AvatarLimbDataManagerRemote dataManager;

	// Nested types
	private class AvatarHeadRotationHandlerRemote : AvatarLimbManager.AvatarHeadRotationHandler
	{
		// Fields
		private Quaternion remoteYawRotation;
		private Quaternion remotePitchRotation;

		// Constructors
		public AvatarHeadRotationHandlerRemote();

		// Methods
		public override void Initialize(AvatarLimbManager limbManager, AvatarLimbManager.LimbRotator limbRotator, AvatarLimbManager.AvatarLookDirectionHandler lookDirectionHandler);
		public override void UpdateRotation();
		public void SetRotationRemotely(float yaw, float pitch);
	}

	private class AvatarLimbDataManagerRemote
	{
		// Fields
		private float newHeadYawValue;
		private float newHeadPitchValue;
		private float newPointYawValue;
		private float newPointPitchValue;
		private AvatarLimbManagerRemote limbManager;

		// Constructors
		public AvatarLimbDataManagerRemote();

		// Methods
		public void Initialize(LimbRotationRuntimeData limbRotationRuntimeData, AvatarLimbManagerRemote limbManager);
		private void OnHeadYawChange(object headYaw);
		private void OnHeadPitchChange(object headPitch);
		private void UpdateHeadRotation();
		private void OnPointYawChange(object pointYaw);
		private void OnPointPitchChange(object pointPitch);
		private void UpdatePointRotation();
		private void OnEmoteDataChange(object newEmoteData);
	}

	private class AvatarPointingHandlerRemote : AvatarLimbManager.AvatarPointingHandler
	{
		// Fields
		private Quaternion remoteYawRotation;
		private Quaternion remotePitchRotation;

		// Constructors
		public AvatarPointingHandlerRemote();

		// Methods
		public override void Initialize(AvatarLimbManager limbManager, AvatarLimbManager.LimbRotator limbRotator, AvatarEnabledChangeHandler enableChangeHandler);
		public override void UpdatePointing(Vector3 localLookDirection);
		public void SetRotationRemotely(float yaw, float pitch);
	}

	// Constructors
	public AvatarLimbManagerRemote();

	// Methods
	public override void Initialize(MVWorldObjectClient avatarWO, MVBody body, AvatarEnabledChangeHandler enabledChangeHandler, LimbRotationRuntimeData limbRotationRuntimeData);
	public override void UpdateLimbRotations(Vector3 lookDirection);
	public void UpdateHeadRotationRemotely(float yaw, float pitch);
	public void UpdatePointingRemotely(float yaw, float pitch);
	public override void StartEmote(EmoteTypes emoteType);
	private void OnHeadRotationDataChange(object newHeadRotationData);
	private void OnPointRotationDataChange(object newPointRotationData);
}

