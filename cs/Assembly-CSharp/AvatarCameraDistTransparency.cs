/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarCameraDistTransparency
{
	// Fields
	private Vector3 camMoveTowardsOffset;
	private float fadeStartDistance;
	private float fadeEndDistance;
	public float fadeStartBase;
	public float fadeEndBase;
	private float prevDist;
	private const float mininumDistanceRequired = 0.01f;

	// Constructors
	public AvatarCameraDistTransparency(Vector3 camMoveTowardsOffset, float fadeStartDistance, float fadeEndDistance);

	// Methods
	public void SetScaleFadeDistance(float scale);
	public void Update(MVAvatarLocal avatarLocal);
}

