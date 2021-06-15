/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterRoundTime : GameMeterBase
{
	// Fields
	[SerializeField]
	private Image roundTimeBar;
	[SerializeField]
	private UnityEngine.UI.Text roundTime;
	private MVRoundCube roundCube;
	private List<int> timeNotifications;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterRoundTime();

	// Methods
	public override void Initialize();
	private void OnDestroy();
	public override void SetGameMeterVisibility();
	public override void UpdateValue();
	private void Update();
	public override void SetShowGameMeter(bool show);
	private void Hide();
	private void Show();
	private int GetTimeLeft(MVRoundCube roundCube);
	private void HandleTimeNotifications(int timeLeft);
	private void ResetTimeNotifications();
	private void ResetOnRoundEnd(IWinningCondition winningCondition);
}

