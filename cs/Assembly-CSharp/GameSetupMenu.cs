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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public GamePassesShopDetails gameShopDetails;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _ShowGamePassesShopDetails_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public BoostEditMenu boostEditMenu;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _ShowBoostEditMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public GameObject popup;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _OnInactiveTierButtonPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass16_0
	{
		// Fields
		public GameEarningsMenu earningsMenu;

		// Constructors
		public __c__DisplayClass16_0();

		// Methods
		internal void _ShowGameEarnings_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public GameSetupOptions optionsMenu;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal void _ShowMiscOptions_b__0(IUIStack x, BaseEventData y);
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

