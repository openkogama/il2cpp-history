/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterXP : GameMeterBase
{
	// Fields
	[SerializeField]
	private GameObject XPMeter;
	private float interpolateTowardsXPProgress;
	private float previousXPProgress;
	private float elapsedInterpolationTime;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterXP();

	// Methods
	public override void Initialize();
	private void Init();
	public override void SetGameMeterVisibility();
	public override void UpdateValue();
	private void Update();
	private void OnProgressUpdate(XPProgressData xpProgress);
	public override void SetShowGameMeter(bool show);
}

