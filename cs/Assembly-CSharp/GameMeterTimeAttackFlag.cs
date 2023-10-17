/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterTimeAttackFlag : GameMeterBase
{
	// Fields
	[SerializeField]
	private Image timeAttackFlagBar;
	[SerializeField]
	private UnityEngine.UI.Text timeAttackFlagText;
	private bool shouldUpdate;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterTimeAttackFlag();

	// Methods
	public override void Initialize();
	private void Update();
	public override void SetGameMeterVisibility();
	public override void UpdateValue();
	private void Hide();
	private void Show();
	public override void SetShowGameMeter(bool show);
	private void OnStartFlagCountdown();
	private void OnStartFlagCountdown(int captureTime);
	private void OnEndFlagCountdown();
}

