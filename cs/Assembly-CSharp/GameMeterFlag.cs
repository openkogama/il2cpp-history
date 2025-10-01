/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameMeterFlag : GameMeterBase
{
	// Fields
	[SerializeField]
	private GameObject flagBar;

	// Properties
	public override GameMeterType GameMeterType { get; }

	// Constructors
	public GameMeterFlag();

	// Methods
	public override void Initialize();
	public override bool SetGameMeterVisibility();
	public override void UpdateValue();
	public override void SetShowGameMeter(bool show);
}

