/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PerformanceTest : MonoBehaviour
{
	// Fields
	private int serverStartTime;
	private int debuglogInterval;
	private float clientTime;
	private static PerformanceTest _instance;

	// Properties
	public static PerformanceTest Instance { get; }

	// Constructors
	public PerformanceTest();

	// Methods
	public void Init();
	private void Start();
	private void FixedUpdate();
}

