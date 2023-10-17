/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SessionTimeDistributionManager : MonoBehaviour
{
	// Fields
	private bool countingSessionTime;
	private float startTime;
	private Queue<int> intervals;

	// Constructors
	public SessionTimeDistributionManager();

	// Methods
	private void Start();
	private void OnPlayerReady();
	private void Update();
}

