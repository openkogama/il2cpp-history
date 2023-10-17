/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BodyData : MonoBehaviour
{
	// Fields
	public string[] PartNames;
	public Transform[] PartBones;
	[SerializeField]
	private Vector3[] PartBoneSpacePosition;
	private ObscuredFloat[][] PartConstraintsBoxMin;
	private ObscuredFloat[][] PartConstraintsBoxMax;
	private ObscuredInt[] PartConstraintsMinCubes;
	private Dictionary<string, int> partMap;

	// Nested types
	public enum PartIndex
	{
		Head = 0,
		Torso = 1,
		RArm = 2,
		LArm = 3,
		RUpLeg = 4,
		RLowLeg = 5,
		LUpLeg = 6,
		LLowLeg = 7,
		Holster = 8,
		Size = 9
	}

	// Constructors
	public BodyData();

	// Methods
	private void InitVariables();
	private void Awake();
	public int GetPartIndex(string part);
	public Transform GetPartBone(PartIndex part);
	public Transform GetPartBone(string part);
	public Vector3 GetPartBoneSpacePosition(string part);
	public Vector3 GetPartConstraintMin(string part);
	public Vector3 GetPartConstraintMax(string part);
	public Vector3 GetPartConstraintCenter(string part);
	public int GetPartConstraintMinCount(string part);
	private static Vector3 GetVectorFromObscuredFloatArray(ObscuredFloat[] values);
}

