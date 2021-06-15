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

public class PlayButtonMobile : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image countdownFill;
	[SerializeField]
	private TimedPlayReward timedPlayReward;
	[SerializeField]
	protected bool shouldPop;
	[SerializeField]
	protected Button button;
	public Action OnPlayButtonPressed;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public PlayButtonMobile();

	// Methods
	public void Play();
	private void OnDisable();
	private void OnPromotionShown(bool promotionShown, bool withAd);
	public virtual void OnConfirmPlay();
	private void Update();
	protected virtual void StartPlaying();
	protected virtual void OnCountdownEnd();
	[CompilerGenerated]
	private void _Play_m__0(IDeathPromotionSelector x, BaseEventData y);
	[CompilerGenerated]
	private void _Play_m__1(IDeathPromotionSelector x, BaseEventData y);
	[CompilerGenerated]
	private static void _StartPlaying_m__2(IUIStack handler, BaseEventData data);
}

