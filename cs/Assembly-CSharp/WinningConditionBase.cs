/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class WinningConditionBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RoundTimer roundTimerPrefab;
	private RoundTimer roundTimer;

	// Properties
	protected abstract GameStatCounterType StatType { get; }
	public virtual bool WinningConditionAbleToBeFulfilled { get; }

	// Constructors
	protected WinningConditionBase();

	// Methods
	public abstract void UpdateValue(int newValue);
	public void UpdateStats(int actorNumber, GameStatCounterType counterType, int scoreCount);
	protected void UpdateProgressNotification(int actorNumber, GameStatCounterType counterType, int scoreCount);
	public virtual bool CanWinningConditionBeFullfilledForTeam(MVTeam team);
	public virtual void Clear();
	public virtual void RoundEndReset();
	public virtual void InitializeGameUI(RectTransform lobbyState);
	private void CreateRoundTimer(WorldObjectClientRef<MVRoundCube> roundCube);
}

