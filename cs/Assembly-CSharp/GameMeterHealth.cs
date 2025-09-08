/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterHealth : GameMeterBase
{
	// Fields
	[SerializeField]
	private GameObject healthMeter;
	[SerializeField]
	private ProgressBar progressBar;
	[SerializeField]
	private UnityEngine.UI.Text healthText;
	[SerializeField]
	private GameMeterShake shaker;
	private int maxValue;
	private float storedHealthValue;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterHealth();

	// Methods
	public override void SetGameMeterVisibility();
	public override void UpdateValue();
	public override void SetShowGameMeter(bool show);
	public override void Initialize();
	private void OnMaxValueUpdate(int maxValue);
	private void OnProgressUpdate(float newValue);
}

