/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameMeterVisuals;
using MV.Common;
using MV.WorldObject.GamePassSystem;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameTierProgressBar : MonoBehaviour, HoverInputReceiver
{
	// Fields
	[SerializeField]
	private AvatarPreviewer previewer;
	[SerializeField]
	private GamePassesTextBubble highScoreTipTextBubble;
	[SerializeField]
	private GameObject betaModeInformationPopup;
	[SerializeField]
	private GameObject buildModeInformationPopup;
	[SerializeField]
	private GameObject touristInformationPopup;
	[SerializeField]
	private float unlockedTierLerpDuration;
	[SerializeField]
	protected List<GameMeterVisualEffect> gameMeterVisualEffects;
	[SerializeField]
	private List<TierProgressData> tierProgressDataList;
	private bool isInitialized;
	private float interpolateTowardsProgressValue;
	private float previousProgressValue;
	private float interpolationStartTime;
	private bool shouldInterpolate;
	private const float interpolationDuration = 2f;
	private AvatarPreviewer headPreviewer;
	private const int avatarHeadImageWidth = 128;
	private const int avatarHeadImageHeight = 128;
	private static bool haveShownTips;
	private bool hasShownRankTip;
	private Transform previewHeadRoot;

	// Nested types
	[Serializable]
	private struct TierProgressData
	{
		// Fields
		public ProgressBar progressBar;
		public UnityEngine.UI.Text progressText;
		public GameObject progressDivider;
		public GamePassesTextBubble progressBarTextBubble;
		public GamePassesTextBubble avatarHead;
		public RawImage avatarHeadImage;
		public GameObject avatarHeadUI;
		public ProgressBar disabledProgressBar;
		public GameObject disabledProgressDivider;
		public GamePassesTextBubble disabledBarTextBubble;
		public GameObject tierIconTempUnlock;
		public GameObject tierIconNumber;
		public ProgressBar endResultProgressBar;
		public GameObject tempProgress;
		public GameObject disabledTempProgress;
		public GamePassesTextBubble freeTryTextBubble;
		public HoverInputHandler hoverInputHandler;
		public CanvasGroup LockedTierIcon;
	}

	[CompilerGenerated]
	private sealed class _OnActiveProgressBarClicked_c__AnonStorey1
	{
		// Fields
		internal GameObject informationPopup;

		// Constructors
		public _OnActiveProgressBarClicked_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ScaleAndFadeLockForTier_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _progress___0;
		internal float _alpha___0;
		internal int tier;
		internal GameTierProgressBar _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ScaleAndFadeLockForTier_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public GameTierProgressBar();
	static GameTierProgressBar();

	// Methods
	public void OnHeadClick();
	public void OnInactiveProgressBarClicked(int progressBarNumberPressed);
	public void OnActiveProgressBarClicked(int progressBarNumberPressed);
	public void OnHoverEnter();
	public void OnHoverExit();
	public GamePassTier GetCurrentTier();
	public void DeactivateFreeTryBubble();
	public void Initialize();
	public void ReplayGainEffect(int previousGamePointAmount, int newGamePointAmount);
	private void Start();
	private void OnDestroy();
	private void DestroyHeadPreview();
	private void OnEnable();
	private void OnDisable();
	private void Update();
	private void OnPlayerPlanetDataUpdated();
	private void OnHaveShownGainEffect(int newGamePointAmountShown);
	private void OnHaveShownTierProgressBarGainEffect(int newGamePointAmountShown);
	private void UpdateProgressBars(int playerGamePoints);
	private void HandleUnlockedTiersProgressBars();
	private void UpdateEditModeDisabledProgressBars();
	private void UpdateProgressBar(GamePassTier progressBarToUpdate, int playerGamePoints);
	[DebuggerHidden]
	private IEnumerator ScaleAndFadeLockForTier(int tier);
	private void SetLockedStateForTier(int tier, bool tierUnlocked);
	private void ActivateBar(int barIndex);
	private void DeactivateBar(int barIndex);
	private float GetProgressBarPercentage(GamePassTier tierToShowProgressFor);
	private int ReduceGamePointsWithPreviousTierRequirements(GamePassTier gamePassTierToDisplay, int gamePoints, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
	private void UpdateDividerVisibility(int playerGamePoints);
	private void UpdateTempProgressVisibility();
	private bool HasTempTier(GamePassTier tier);
	private bool HasAnyTempTier();
	private void UpdateTierIconHoverInput();
	private bool ShowFreeTryTextBubble();
	private bool CanShowFreeTryBubble();
	private float CalculateTotalProgressValue(int gamePoints);
	private int CalculateGamePointsFromTotalProgress(float totalProgressValue);
	private int CalculateGamePointsFromTierProgress(float totalProgressValue, GamePassTier tierToCalculateTo);
	private void UpdateProgressText(float totalProgress, GamePassTier currentTier);
	private void HandleDisabledProgressBarVisibility();
	private void HandleFreeTryVisibility();
	private void HandleShowTips();
	private bool IsProgressBarEnabled();
	private bool IsTierUnlocked(GamePassTier tierToCheck);
	private void CreateAvatarHeadImages();
}

