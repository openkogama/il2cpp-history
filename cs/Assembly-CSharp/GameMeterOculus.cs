/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterOculus : GameMeterKillBase
{
	// Fields
	private OculusKillLimitClient oculusClient;
	private int prevValue;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterOculus();

	// Methods
	public override void Initialize();
	private void OnVictoryConditionMet(object sender, EventArgs args);
	private void OnDestroy();
	public override bool SetGameMeterVisibility();
	public override void UpdateValue();
}

