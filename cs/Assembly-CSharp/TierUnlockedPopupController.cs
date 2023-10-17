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
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockedPopupController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image Background;
	[SerializeField]
	private TierUnlockedPopupContentTierUnlocked PopupContentTierUnlockedPrefab;
	[SerializeField]
	private TierUnlockedPopupContentXP PopupContentXPPrefab;
	[SerializeField]
	private TierUnlockedPopupContentSpawnRole popupContentSpawnRolePrefab;
	[SerializeField]
	private GamePassesSpawnRoleRewardInfo spawnRoleInfoPrefab;
	[SerializeField]
	private TierUnlockedPopupContentBase PopupContentCreatorSupportPrefab;
	[SerializeField]
	private TierTempUnlockedInformationPopupContent popupContentTempUnlockInformationPrefab;
	[SerializeField]
	private TierUnlockedPopupContentTierTempUnlocked popupContentTierTempUnlockPrefab;
	[SerializeField]
	private float fadeDuration;
	[SerializeField]
	private float bounceEffectDuration;
	[SerializeField]
	private float colorInterpolationDuration;
	[SerializeField]
	private AnimationCurve bounceEffect;
	[SerializeField]
	private AnimationCurve fadeEffect;
	private List<TierUnlockedPopupContentBase> popupContentList;
	private int currentContentBeingShowed;
	private GamePassTier unlockedTier;
	private bool isPoppingCountdownStarted;
	private float popTime;
	private Color interpolateToColor;
	private float interpolateColorStartTime;
	private float bounceEffectStartTime;
	private float fadeEffectStartTime;
	public static GamePassTier HighestTierRewardShown;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__24_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierUnlockedPopupController();

	// Methods
	public void Initialize(GamePassTier unlockedTier, bool wasPurchased, bool wasTempUnlocked);
	private void Update();
	private void OnStartingToDissappear();
	private void StartNewPopupContent(int index);
}

