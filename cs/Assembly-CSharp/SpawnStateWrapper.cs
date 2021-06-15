/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnStateWrapper : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private SpawnState prevSpawnState;
	private int takenTime;
	private int respawnInterval;
	private SpawnState spawnState;
	private Action<SpawnState> stateChangeCallback;

	// Properties
	public SpawnState SpawnState { get; }
	public int TakenTime { set; }

	// Constructors
	public SpawnStateWrapper(int respawnInterval, int takenTime, Action<SpawnState> stateChangeCallback);

	// Methods
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
	public void Destroy();
}

