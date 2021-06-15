/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterCollectible : GameMeterBase
{
	// Fields
	[SerializeField]
	private Image collectibleBar;
	[SerializeField]
	private UnityEngine.UI.Text collectibleText;
	private int prevValue;
	private AllCollectiblesCollectedClient collectedClient;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterCollectible();

	// Methods
	public override void Initialize();
	private void OnVictoryConditionMet(object sender, EventArgs args);
	private void OnDestroy();
	public override void SetGameMeterVisibility();
	public override void UpdateValue();
	private void Hide();
	private void Show();
	public override void SetShowGameMeter(bool show);
}

