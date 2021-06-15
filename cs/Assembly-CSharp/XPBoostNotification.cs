/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class XPBoostNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text boostAmountText;
	[SerializeField]
	private UnityEngine.UI.Text UserNameText1;
	[SerializeField]
	private UnityEngine.UI.Text UserNameText2;
	[SerializeField]
	private RectTransform backGround;
	[SerializeField]
	private CanvasGroup backgroundCanvasGroup;
	[SerializeField]
	private GameObject content;
	[SerializeField]
	private AnimationCurve updateBoostTextEffectCurve;
	[SerializeField]
	private AnimationCurve fadeOutCurve;
	[SerializeField]
	private AnimationCurve closeShrinkYEffectCurve;
	[SerializeField]
	private AnimationCurve closeShrinkXEffectCurve;
	[SerializeField]
	private AnimationCurve slideUserNameOutCurve;
	[SerializeField]
	private AnimationCurve slideUserNameInCurve;
	private const float waitBeforeStartDuration = 1f;
	private const float startDuration = 1.5f;
	private const float memberHighlightDuration = 2f;
	private const float closeDuration = 0.5f;
	private const float boostEffectOnStartDelay = 0.208334f;
	private float stateStartTime;
	private List<MVPlayer> memberList;
	private int currentMemberBeingHighlighted;
	private XPBoostStateType currentState;
	private float backgroundOriginalWidth;
	private float backgroundOriginalHeigt;
	private Vector2 backgroundOriginalSizeDelta;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Nested types
	private enum XPBoostStateType : byte
	{
		NotInitializedState = 0,
		WaitBeforeStartState = 1,
		StartState = 2,
		HighlightState = 3,
		ClosingDownState = 4,
		EndState = 5
	}

	// Constructors
	public XPBoostNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	protected override void Update();
	private void CloseNotification();
	private void UpdateBoostAmount();
	private void ChangeState(XPBoostStateType newState);
	private void HandleState();
	private void HandleWaitBeforeStart(float currentStateTime);
	private void HandleStartState(float currentStateTime);
	private void StartNextState();
	private void StartNewMemberHighlight();
	private bool IsMemberHighlightingDone();
	private void HandleHighlightState(float currentStateTime);
	private void HandleClosingDownState(float currentStateTime);
	private void UpdateBoostTextEffect(float stateProgress);
	private void FadeOut(float stateProgress);
	private void CloseNotification(float stateProgress);
	private void SwapMemberName(float stateProgress);
	private void SlideOutName(float stateProgress);
	private void SlideInName(float stateProgress);
}

