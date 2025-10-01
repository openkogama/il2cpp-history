/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameMeterVisuals;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class GameMeterBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected List<GameMeterVisualEffect> gameMeterVisualEffects;
	protected float inActiveAlpha;
	protected bool meterActive;

	// Properties
	public abstract GameMeterType GameMeterType { get; }
	public bool MeterActive { get; set; }

	// Constructors
	protected GameMeterBase();

	// Methods
	public abstract void Initialize();
	public abstract void SetShowGameMeter(bool show);
	public abstract void UpdateValue();
	public abstract bool SetGameMeterVisibility();
}

