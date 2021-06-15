/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostIconActivationEffectController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private NotificationFade fader;
	[SerializeField]
	private List<BoosterIcons> boosterIcons;
	[SerializeField]
	private float showingDuration;
	[SerializeField]
	private float fadingDuration;
	[SerializeField]
	private float startNewEffectDelay;
	[SerializeField]
	private float fadingSlideAmount;
	private EffectState currentState;
	private float stateStartTime;
	private float originalYPosition;
	private bool haveStartedNewEffect;
	private BoostType boostType;
	private UnityAction startNewEffect;

	// Nested types
	private enum EffectState
	{
		Inactive = 0,
		Showing = 1,
		Fading = 2
	}

	[Serializable]
	private struct BoosterIcons
	{
		// Fields
		public BoostType type;
		public GameObject icon;
	}

	// Constructors
	public BoostIconActivationEffectController();

	// Methods
	public void Initialize(BoostType type, UnityAction startNewEffect);
	public void Activate();
	private void Update();
	private void SetState(EffectState newState);
}

