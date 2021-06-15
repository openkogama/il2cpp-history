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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesXPRewardOption : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Slider slider;
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private UnityEngine.UI.Text bonusXPAmountText;
	private GamePassTier gamePassTier;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public GamePassesXPRewardOption();

	// Methods
	public void Initialize(GamePassesXpRewardInfo rewardInfo, GamePassTier gamePassTier);
	public void OnSliderChange();
	public void OnInputFieldChange();
	public void UpdateXPData(int xpAmount);
	public void OnOkayPressed();
	private void UpdateBonusXpAmountText(int xpRewardAmount);
	[CompilerGenerated]
	private static void _OnOkayPressed_m__0(IUIStack x, BaseEventData y);
}

