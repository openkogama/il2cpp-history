/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GoldRewardCountdownMeter : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject goldRewardCountdownUI;
	[SerializeField]
	private ProgressBar countdownProgressBar;
	[SerializeField]
	private UnityEngine.UI.Text countdownText;
	[SerializeField]
	private GameObject goldRewardClaimableUI;
	[SerializeField]
	private GamePassesTextBubble tipBubble;
	[SerializeField]
	private GameObject claimGoldRewardPopupPrefab;
	private bool isDone;

	// Nested types
	[CompilerGenerated]
	private sealed class _TryShowClaimGoldRewardPopup_c__AnonStorey0
	{
		// Fields
		internal GameObject claimGoldRewardPopup;

		// Constructors
		public _TryShowClaimGoldRewardPopup_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GoldRewardCountdownMeter();

	// Methods
	private void Start();
	private void OnEnable();
	private void Update();
	private void UpdateCountdownVisibility();
	private bool IsGoldRewardCountdownActive();
	private void UpdateCountDownProgress();
	private string GetClaimText();
	public void TryShowClaimGoldRewardPopup();
}

