/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleTierEditorMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text currentTierNumberText;
	[SerializeField]
	private UnityEngine.UI.Text progressBarText;
	[SerializeField]
	private ProgressBar progressBar;
	[SerializeField]
	private SpawnRoleTierSettings tierSettingsPrefab;
	private int spawnRoleCost;
	private GamePassTier currentTier;
	private bool canSelectTier0;
	private UnityAction<GamePassTier> ChangeTierRequirement;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public SpawnRoleTierSettings tierSettings;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _SelectTier_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleTierEditorMenu();

	// Methods
	public void Initialize(GamePassTier newTier, int newspawnRoleCost, UnityAction<GamePassTier> ChangeTierRequirement);
	public void UpdateSpawnRoleCost(int newspawnRoleCost);
	public void UpdateTier(GamePassTier newTier);
	public void SelectTier();
	private void OnTierSelected(GamePassTier newTier);
}

