/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVNetworkGameStateListener
{
	// Fields
	private int startTime;
	private int duration;
	private MVGameStateType currentGameState;
	private int timeLeft;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<GameStateChangeEventArgs> OnGameStateChanged;

	// Properties
	public int TimeLeftMS { get; }
	public int CountdownInSeconds { get; }
	public float CountdownInPercentage { get; }
	public MVGameStateType CurrentGameState { get; }
	public int StartTime { get; }

	// Events
	public event EventHandler<GameStateChangeEventArgs> OnGameStateChanged {
		add;
		remove;
	}

	// Constructors
	public MVNetworkGameStateListener();

	// Methods
	public void ChangeState(MVGameStateType gameStateType, int startTime, int duration, bool fromGameSnapshot);
	public void Update(MVNetworkGame game);
}

