/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarInputControllerAndroid : IAvatarInputController
{
	// Fields
	private Vector3 direction;
	private Quaternion rotation;
	private bool jump;
	private AvatarInputControllerAndroidSettings settings;
	private static Camera mainCamera;

	// Properties
	public Vector3 Direction { get; set; }
	public Quaternion Rotation { get; set; }
	public bool Jump { get; }

	// Constructors
	public AvatarInputControllerAndroid();

	// Methods
	public void HandleDead();
	public void HandleInput(Vector3 moveDirection, bool jump, bool didShoot, Vector3 velocity, bool inGunMode, bool forceRotateToCamDirection);
	private Vector3 GetDirectionBias(Vector3 absolutDirection);
	private Vector3 GetBiasedDirection(Vector3 absoluteDirection, Vector3 testDirection);
	private static Vector3 ToCameraDirection(Vector3 moveDirection);
	private static Quaternion GetCameraYRotation();
	private static Quaternion GetRotationMoveDirection(Vector3 moveDirection);
}

