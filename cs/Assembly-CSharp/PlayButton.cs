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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__15_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__21_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnContinuePressed_b__15_0(IUIStack x, BaseEventData y);
		internal void _OnCountDownEnd_b__21_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public ContinueButtonLockCursor continueBtn;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _OnPromotionShown_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public bool readyForAd;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _OnEnable_b__0(IDeathPromotionSelector x, BaseEventData y);
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
	private void _Play_b__13_0(IDeathPromotionSelector x, BaseEventData y);
}

