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

public class PlayButtonTouch : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image countdownFill;
	[SerializeField]
	private TimedPlayReward timedPlayReward;
	[SerializeField]
	protected bool shouldPop;
	[SerializeField]
	protected UnityEngine.UI.Button button;
	public Action OnPlayButtonPressed;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _StartPlaying_b__10_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public PlayButtonTouch();

	// Methods
	public void Play();
	private void OnDisable();
	private void OnPromotionShown(bool promotionShown, bool withAd);
	public virtual void OnConfirmPlay();
	private void Update();
	protected virtual void StartPlaying();
	protected virtual void OnCountdownEnd();
	[CompilerGenerated]
	private void _Play_b__5_0(IDeathPromotionSelector x, BaseEventData y);
	[CompilerGenerated]
	private void _Play_b__5_1(IDeathPromotionSelector x, BaseEventData y);
}

