/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesHighlightArrowManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject highlightArrowPrefab;
	[SerializeField]
	private List<Transform> progressBarTransfromsList;
	private GameObject highLightArrow;
	private GamePassTier currentGamePassTierHighlighted;
	private static bool isHighlightingTierUnlocked;
	private static bool shouldDestroyHighlighArrow;

	// Constructors
	public GamePassesHighlightArrowManager();

	// Methods
	public void OnTierBeingShown(GamePassTier tierBeingShown);
	private void Start();
	private void OnEnable();
	private void OnPlayerPlanetDataUpdated();
	private void HandleUnseenTierUnlockReward();
	private void DestroyHighlighArrow();
	private void CreateHighlightArrow(GamePassTier gamePassTierToHighlight);
}

