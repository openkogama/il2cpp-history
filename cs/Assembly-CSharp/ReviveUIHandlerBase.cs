/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ReviveUIHandlerBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected Button continueButton;
	[SerializeField]
	private Image timerFill;
	[SerializeField]
	private UnityEngine.UI.Text timerText;
	[SerializeField]
	protected ContinueButtonLockCursor continuePopup;
	[SerializeField]
	protected RawImage targetTexture;
	[SerializeField]
	protected NotificationPopup errorNotification;
	[SerializeField]
	protected GameObject adIcon;
	private bool watchAdClicked;
	private float started;
	private float duration;

	// Properties
	protected abstract AdContext AdContext { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnWatchAdClicked_c__AnonStorey0
	{
		// Fields
		internal ContinueButtonLockCursor popup;
		internal ReviveUIHandlerBase _this;
		private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

		// Constructors
		public _OnWatchAdClicked_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		internal void __m__1();
		private static void __m__2(IUIStack z, BaseEventData c);
	}

	// Constructors
	protected ReviveUIHandlerBase();

	// Methods
	protected abstract void OnRewardedAdWatched(RewardedAdResult result);
	protected abstract void OnAdFinishedContinue();
	public virtual void Initialize(UnityAction onContinueClicked);
	private void ReviveTimeElapsed();
	protected virtual void Update();
	protected virtual void RoundEnded(IWinningCondition condition);
	protected virtual void OnDestroy();
	public virtual void OnWatchAdClicked();
}

