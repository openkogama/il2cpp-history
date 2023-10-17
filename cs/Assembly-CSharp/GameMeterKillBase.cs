/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterKillBase : GameMeterBase
{
	// Fields
	[SerializeField]
	protected Image killsBar;
	[SerializeField]
	protected UnityEngine.UI.Text killsText;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterKillBase();

	// Methods
	public override void Initialize();
	public override void SetGameMeterVisibility();
	public override void UpdateValue();
	protected void SetCount(GameStatCounterType gameStatCounterType, int limit);
	private static int GetCount(GameStatCounterType gameStatCounterType);
	public override void SetShowGameMeter(bool show);
	protected void Hide();
	protected void Show();
}

