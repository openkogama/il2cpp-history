/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesXpRewardInfo : MonoBehaviour, IGamePassShopContent
{
	// Fields
	[SerializeField]
	private Image TeamRequirementImage;
	[SerializeField]
	private GameObject optionsButton;
	[SerializeField]
	private GameObject backgroundTier1;
	[SerializeField]
	private GameObject backgroundTier2;
	[SerializeField]
	private GameObject backgroundTier3;
	[SerializeField]
	private GamePassesXPRewardOption xPRewardOption;
	[SerializeField]
	private UnityEngine.UI.Text xPAmountText;
	[SerializeField]
	private UnityEngine.UI.Text bonusXPAmountText;
	[SerializeField]
	private GameObject subscriberUI;
	[SerializeField]
	private GameObject claimedText;
	private GamePassTier tier;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public GamePassesXPRewardOption popUp;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _OnOptionsButtonPress_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesXpRewardInfo();

	// Methods
	public void Initialize(GamePassTier tier);
	public void OnOptionsButtonPress();
	public void OnGameProgressionDataUpdate();
	public void Activate();
	public void Deactivate();
	private void ChangeBackground(GamePassTier tier);
	private void UpdateXPText();
	private void UpdateXPTextVisibility();
	private void OnDestroy();
}

