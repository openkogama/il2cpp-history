/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public GameObject claimGoldRewardPopup;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _TryShowClaimGoldRewardPopup_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GoldRewardCountdownMeter();

	// Methods
	private void Start();
	private void OnEnable();
	private void Update();
	private void UpdateCountdownVisibility();
	private static bool IsGoldRewardCountdownActive();
	private void UpdateCountDownProgress();
	private static string GetClaimText();
	public void TryShowClaimGoldRewardPopup();
}

