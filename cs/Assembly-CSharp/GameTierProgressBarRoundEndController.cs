/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameTierProgressBarRoundEndController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameTierProgressBar tierProgressBar;
	[SerializeField]
	private GameTierProgressBarGainEffectController gainEffectController;
	[SerializeField]
	private GameObject inGameUIContent;
	private bool hasRoundEnded;

	// Constructors
	public GameTierProgressBarRoundEndController();

	// Methods
	private void Start();
	private void OnDestroy();
	private void Update();
	private void OnRoundEnd(IWinningCondition winningCondition);
}

