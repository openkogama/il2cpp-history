/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class OculusKillLimitWinningCondition : WinningConditionBase
{
	// Fields
	[SerializeField]
	private Image killImage;
	[SerializeField]
	private UnityEngine.UI.Text progress;
	[SerializeField]
	private ProgressBar progressBar;
	private int oculusKillLimit;

	// Properties
	protected override GameStatCounterType StatType { get; }

	// Constructors
	public OculusKillLimitWinningCondition();

	// Methods
	public override void InitializeGameUI(RectTransform lobbyState);
	public override void UpdateValue(int newValue);
	public override void RoundEndReset();
}

