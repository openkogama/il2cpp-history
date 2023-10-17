/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FlagWinningCondition : WinningConditionBase
{
	// Fields
	[SerializeField]
	private Image flagIcon;
	[SerializeField]
	private GameObject graphics;
	[SerializeField]
	private UnityEngine.UI.Text score;
	private const float updateFlagFrequency = 10f;

	// Properties
	protected override GameStatCounterType StatType { get; }
	public override bool WinningConditionAbleToBeFulfilled { get; }

	// Constructors
	public FlagWinningCondition();

	// Methods
	public override void InitializeGameUI(RectTransform lobbyState);
	public override void UpdateValue(int newValue);
	public override bool CanWinningConditionBeFullfilledForTeam(MVTeam team);
	private void Update();
	private List<MVWorldObjectClient> GetClosestFlags(MVTeam team);
	private void UpdateFlagGraphics();
	public override void RoundEndReset();
}

