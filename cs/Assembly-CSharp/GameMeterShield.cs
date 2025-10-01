/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterShield : GameMeterBase
{
	// Fields
	[SerializeField]
	private Image ShieldMeter;
	[SerializeField]
	private ProgressBar progressBar;
	private const float maxShieldValue = 100f;
	private float interpolateTowardsShieldProgress;
	private float previousShieldProgress;
	private float elapsedInterpolationTime;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterShield();

	// Methods
	public override void Initialize();
	public override bool SetGameMeterVisibility();
	public override void UpdateValue();
	private void Update();
	private void OnProgressUpdate(float newValue);
	public override void SetShowGameMeter(bool show);
}

