/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterGameCoin : GameMeterBase
{
	// Fields
	[SerializeField]
	private Image gameCoinBar;
	[SerializeField]
	private GameObject coinAmount;
	[SerializeField]
	private RollingNumberCounterAndroid counter;
	[SerializeField]
	private bool useText;
	[SerializeField]
	private UnityEngine.UI.Text counterText;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterGameCoin();

	// Methods
	public override void Initialize();
	public override bool SetGameMeterVisibility();
	private void OnGameCoinAmountChanged(int amount);
	private void OnDestroy();
	public void OnActivationChange(bool wantToShow);
	public override void UpdateValue();
	public override void SetShowGameMeter(bool show);
}

