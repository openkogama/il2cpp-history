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

public class PlayButton : PlayButtonBase, IPointerEnterHandler, IPointerExitHandler, IPointerUpHandler
{
	// Fields
	[SerializeField]
	private TimedPlayReward timedPlayReward;
	[SerializeField]
	private Button button;
	[SerializeField]
	private bool shouldConfirmPlay;
	[SerializeField]
	private ContinueButtonLockCursor continueButtonPrefab;
	[SerializeField]
	private Image adIcon;
	[SerializeField]
	private Image playIcon;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private bool isMouseOver;
	public Action OnPlayButtonPressed;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnPromotionShown_c__AnonStorey0
	{
		// Fields
		internal ContinueButtonLockCursor continueBtn;

		// Constructors
		public _OnPromotionShown_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnEnable_c__AnonStorey1
	{
		// Fields
		internal bool readyForAd;

		// Constructors
		public _OnEnable_c__AnonStorey1();

		// Methods
		internal void __m__0(IDeathPromotionSelector x, BaseEventData y);
	}

	// Constructors
	public PlayButton();

	// Methods
	public void OnPointerUp(PointerEventData eventData);
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void Play();
	private void OnPromotionShown(bool promotionShown, bool withAd);
	private void OnContinuePressed();
	private void HandlePlayPress();
	private void ConfirmPlay();
	private void Update();
	private void OnEnable();
	protected virtual bool HandlePlayAvailable();
	protected override void OnCountDownEnd();
	[CompilerGenerated]
	private void _Play_m__0(IDeathPromotionSelector x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnContinuePressed_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnCountDownEnd_m__2(IUIStack handler, BaseEventData data);
}

