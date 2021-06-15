/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.GamePassSystem.GamePassEarnings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameSetupMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject activeGameTierButton;
	[SerializeField]
	private GameObject inActiveGameTierButton;
	[SerializeField]
	private UnityEngine.UI.Text earningsAmountText;
	[SerializeField]
	private GamePassesShopDetails gamePassesShopDetailsPrefab;
	[SerializeField]
	private BoostEditMenu boosterEditMenuPrefab;
	[SerializeField]
	private GameEarningsMenu earningsMenuPrefab;
	[SerializeField]
	private GameObject crystalPopupPrefab;
	[SerializeField]
	private GameSetupOptions optionsMenuPrefab;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowGamePassesShopDetails_c__AnonStorey0
	{
		// Fields
		internal GamePassesShopDetails gameShopDetails;

		// Constructors
		public _ShowGamePassesShopDetails_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowBoostEditMenu_c__AnonStorey1
	{
		// Fields
		internal BoostEditMenu boostEditMenu;

		// Constructors
		public _ShowBoostEditMenu_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnInactiveTierButtonPressed_c__AnonStorey2
	{
		// Fields
		internal GameObject popup;

		// Constructors
		public _OnInactiveTierButtonPressed_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowGameEarnings_c__AnonStorey3
	{
		// Fields
		internal GameEarningsMenu earningsMenu;

		// Constructors
		public _ShowGameEarnings_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowMiscOptions_c__AnonStorey4
	{
		// Fields
		internal GameSetupOptions optionsMenu;

		// Constructors
		public _ShowMiscOptions_c__AnonStorey4();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GameSetupMenu();

	// Methods
	private void Start();
	private void OnDestroy();
	private void UpdateTierButtonVisibility();
	private void OnRecieveEarningsReport(ProjectEarningsReport projectEarningsReport);
	private void UpdateEarningText(ProjectEarningsReport projectEarningsReport);
	public void ShowGamePassesShopDetails();
	public void ShowBoostEditMenu();
	public void OnInactiveTierButtonPressed();
	public void ShowGameEarnings();
	public void ShowMiscOptions();
}

