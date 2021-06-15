/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FPSDistributionManager : MonoBehaviour
{
	// Fields
	private bool calculatingFPS;
	private float startTime;
	private Queue<int> intervals;

	// Constructors
	public FPSDistributionManager();

	// Methods
	private void Start();
	private void OnPlayerReady();
	private void Update();
}

