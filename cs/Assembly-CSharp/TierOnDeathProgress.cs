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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private bool _IsShowingTierProgress_k__BackingField;

	// Properties
	public bool IsShowingTierProgress { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoTierProgress_d__32 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public TierOnDeathProgress __4__this;
		private Dictionary<GamePassTier, PlayerTierState> _gameTierShopStatus_5__2;
		private int _to_5__3;
		private int _current_5__4;
		private bool _stopped_5__5;
		private float _totalProgress_5__6;
		private float _lockLerpTimer_5__7;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoTierProgress_d__32(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public TierOnDeathProgress();

	// Methods
	public void Initialize();
	private void OnEnable();
	private void OnDisable();
	[IteratorStateMachine(typeof(_DoTierProgress_d__32))]
	private IEnumerator DoTierProgress();
	private void Update();
	private float CalculateTotalProgressValue(int gamePoints);
	private int ReduceGamePointsWithPreviousTierRequirements(GamePassTier gamePassTierToDisplay, int gamePoints, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
}

