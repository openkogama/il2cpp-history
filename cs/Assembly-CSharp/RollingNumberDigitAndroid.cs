/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RollingNumberDigitAndroid : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform rollingDigitTransform;
	private int targetNumber;
	private float firstNumPosY;
	private float digitSize;
	private float currPos;
	private float targetPosY;
	private float currNumPos;
	private float rollingSpeed;
	private float rollTimer;

	// Properties
	public int Number { get; set; }

	// Constructors
	public RollingNumberDigitAndroid();

	// Methods
	private void Start();
	private void Update();
}

