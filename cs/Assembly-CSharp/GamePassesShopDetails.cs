/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesShopDetails : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GamePassesShop gamePassesShopPrefab;
	[SerializeField]
	private GamePassesHighScoreList highScoreListPrefab;
	[SerializeField]
	private List<CanvasGroup> tierOutlineList;
	private float interpolationStartTime;
	private GamePassTier currentFocusedTier;
	private const float outlineInterpolationSpeed = 2f;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _InstantiateGamePassesShop_c__AnonStorey0
	{
		// Fields
		internal GamePassesShop gamePassesShop;

		// Constructors
		public _InstantiateGamePassesShop_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowHighScore_c__AnonStorey1
	{
		// Fields
		internal GamePassesHighScoreList highScoreList;

		// Constructors
		public _ShowHighScore_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesShopDetails();

	// Methods
	private void OnDisable();
	private void Update();
	private void ResetHighlightEffects();
	private void InstantiateGamePassesShop(GamePassTier tierToShow);
	public void Exit();
	public void OnTierDetailEnter(GamePassTier tierEntered);
	public void OnTierDetailExit(GamePassTier tierExited);
	public void OnTier1ShopPressed();
	public void OnTier2ShopPressed();
	public void OnTier3ShopPressed();
	public void ShowHighScore();
	[CompilerGenerated]
	private static void _Exit_m__0(IUIStack x, BaseEventData y);
}

