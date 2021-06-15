/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarSelectionAnimator : MonoBehaviour
{
	// Fields
	public List<MVBody> Bodies;
	public MVSpawnPointRed bodySpawnPoint;
	public Vector3 displayPos;
	public Vector3 hidePos;
	public Quaternion displayRotation;
	private int currentIndex;
	private int targetIndex;
	private float time;
	private float baseTimeMultiplier;
	private Vector3 distance;
	private bool forward;
	private float timeSlowThreshold;
	private float endmultiplier;
	private float addition;
	private float SuperspeedFactor;

	// Constructors
	public AvatarSelectionAnimator();

	// Methods
	private void Start();
	private void Update();
	public void SetTargetIndex(int currentIndexInp, int TargetIndexInp);
	public void SetTargetIndexNoAnim(int oldindex, int TargetIndexInp);
	private int GetNextIndex();
}

