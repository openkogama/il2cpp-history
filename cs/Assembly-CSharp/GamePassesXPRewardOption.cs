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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__8_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnOkayPressed_b__8_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesXPRewardOption();

	// Methods
	public void Initialize(GamePassesXpRewardInfo rewardInfo, GamePassTier gpt);
	public void OnSliderChange();
	public void OnInputFieldChange();
	public void UpdateXPData(int xpAmount);
	public void OnOkayPressed();
	private void UpdateBonusXpAmountText(int xpRewardAmount);
}

