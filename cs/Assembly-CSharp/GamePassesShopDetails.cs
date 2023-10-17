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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public GamePassesShop gamePassesShop;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _InstantiateGamePassesShop_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Exit_b__10_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass16_0
	{
		// Fields
		public GamePassesHighScoreList highScoreList;

		// Constructors
		public __c__DisplayClass16_0();

		// Methods
		internal void _ShowHighScore_b__0(IUIStack x, BaseEventData y);
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
}

