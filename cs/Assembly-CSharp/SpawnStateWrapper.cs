/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnStateWrapper : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private SpawnState prevSpawnState;
	[CompilerGenerated]
	private SpawnState _SpawnState_k__BackingField;
	private int takenTime;
	private int respawnInterval;
	private int respawnCount;
	private int takenCounter;
	private readonly Action<SpawnState> stateChangeCallback;

	// Properties
	public SpawnState SpawnState { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int TakenTime { set; }

	// Nested types
	public struct SpawnStateConfiguration
	{
		// Fields
		public int respawnInterval;
		public int respawnCount;
	}

	// Constructors
	public SpawnStateWrapper(int respawnInterval, int respawnCount, int takenTime, Action<SpawnState> stateChangeCallback);

	// Methods
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
	public void Destroy();
	public void UpdateConfiguration(SpawnStateConfiguration spawnStateConfiguration);
}

