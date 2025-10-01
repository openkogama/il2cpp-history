/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePointGainEffectCountController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text gamePointAmount;
	[SerializeField]
	private Transform transformToSlide;
	[SerializeField]
	private float slideMoveAmount;
	[SerializeField]
	private float slideDuration;
	[SerializeField]
	private float slideOutDelay;
	[SerializeField]
	private AnimationCurve textEffectCurve;
	private int startValue;
	private int endValue;
	private int gainEffectAmountReached;
	private int gainEffectTotalAmount;
	private float textEffectStartTime;
	private int currentGamePointAmountDisplayed;
	private float originalXPosition;
	private float slideStartTime;
	private float startSlideOutTime;
	private SlideState currentSlideState;

	// Nested types
	private enum SlideState
	{
		Active = 0,
		InActive = 1,
		Showing = 2,
		Hiding = 3
	}

	// Constructors
	public GamePointGainEffectCountController();

	// Methods
	public void SetupAmountCatchingUp(int endValueParam, int gainEffectTotalAmountParam);
	public void OnGamePointGainEffectStarted();
	public void OnGamePointGainEffectReached();
	public void UpdateGamePointAmountTextToValue(int updateToValue);
	public void HideCount();
	private void Start();
	private void Update();
	private void UpdateGamePointAmountTextEffect();
}

