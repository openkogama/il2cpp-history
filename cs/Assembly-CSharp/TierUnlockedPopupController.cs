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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public TierUnlockedPopupController();
	static TierUnlockedPopupController();

	// Methods
	public void Initialize(GamePassTier unlockedTier, bool wasPurchased, bool wasTempUnlocked);
	private void Update();
	private void OnStartingToDissappear();
	private void StartNewPopupContent(int index);
	[CompilerGenerated]
	private static void _Update_m__0(IUIStack x, BaseEventData y);
}

