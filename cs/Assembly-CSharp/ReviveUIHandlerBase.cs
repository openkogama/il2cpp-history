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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ReviveUIHandlerBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected UnityEngine.UI.Button continueButton;
	[SerializeField]
	protected UnityEngine.UI.Button declineButton;
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
	protected GameObject icon;
	[SerializeField]
	protected GameObject countdown;
	[SerializeField]
	protected GameObject reviveButton;
	protected bool isSubscriber;
	private bool watchAdClicked;
	private float started;
	private float duration;

	// Properties
	protected abstract AdContext AdContext { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__23_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnWatchAdClicked_b__23_2(IUIStack z, BaseEventData c);
		internal void _OnSubscriberClicked_b__24_2(IUIStack z, BaseEventData c);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass23_0
	{
		// Fields
		public ContinueButtonLockCursor popup;
		public ReviveUIHandlerBase __4__this;
		public UnityAction __9__1;

		// Constructors
		public __c__DisplayClass23_0();

		// Methods
		internal void _OnWatchAdClicked_b__0(IUIStack x, BaseEventData y);
		internal void _OnWatchAdClicked_b__1();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass24_0
	{
		// Fields
		public ContinueButtonLockCursor popup;
		public ReviveUIHandlerBase __4__this;
		public UnityAction __9__1;

		// Constructors
		public __c__DisplayClass24_0();

		// Methods
		internal void _OnSubscriberClicked_b__0(IUIStack x, BaseEventData y);
		internal void _OnSubscriberClicked_b__1();
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
	public virtual void OnSubscriberClicked();
}

