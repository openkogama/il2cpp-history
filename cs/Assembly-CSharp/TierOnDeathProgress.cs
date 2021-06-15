/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.GamePassSystem;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierOnDeathProgress : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text crystalsGainedSinceDeath;
	[SerializeField]
	private UnityEngine.UI.Text nextTierText;
	[SerializeField]
	private ProgressBar tierProgressBar;
	[SerializeField]
	private UnityEngine.UI.Text progressText;
	[SerializeField]
	private GameObject progressBarDivider;
	[SerializeField]
	private float progressLerpDuration;
	[SerializeField]
	private float lockFadeLerpDuration;
	[SerializeField]
	private AnimationCurve lockShakeCurve;
	[SerializeField]
	private RectTransform lockImage;
	[SerializeField]
	private CanvasGroup unlockImage;
	private GamePassTier currentTier;
	private int crystalValue;
	private float currentCrystalValue;
	private float timer;
	private float crystalTimer;
	private float timeBeforeStartLerp;
	private float fromProgress;
	private float toProgress;
	private int currentGamePoints;
	private int gamePointsRequired;
	private Vector3 lockStartRot;
	private float intensity;
	private float tierToInterpolateFrom;
	private float tierToInterpolateTo;
	private bool unlockingTier;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsShowingTierProgress_k__BackingField;

	// Properties
	public bool IsShowingTierProgress { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoTierProgress_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal Dictionary<GamePassTier, PlayerTierState> _gameTierShopStatus___0;
		internal int _previousShownGamePointAmount___0;
		internal int _newGamePointAmountToShow___0;
		internal int _from___0;
		internal int _to___0;
		internal int _current___0;
		internal bool _stopped___0;
		internal float _totalProgress___1;
		internal float _crystalProgress___1;
		internal float _tierProgress___1;
		internal int _displayedProgress___1;
		internal float _lockLerpTimer___2;
		internal TierOnDeathProgress _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoTierProgress_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public TierOnDeathProgress();

	// Methods
	public void Initialize();
	private void OnEnable();
	private void OnDisable();
	[DebuggerHidden]
	private IEnumerator DoTierProgress();
	private void Update();
	private float CalculateTotalProgressValue(int gamePoints);
	private int ReduceGamePointsWithPreviousTierRequirements(GamePassTier gamePassTierToDisplay, int gamePoints, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
}

