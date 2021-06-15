/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockedPopupContentBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected Color backgroundColor;
	[SerializeField]
	protected float displayTime;
	[SerializeField]
	protected UnityEngine.UI.Text titleText;
	[SerializeField]
	protected NotificationFade titleTextFader;
	[SerializeField]
	protected RectTransform mainContent;
	[SerializeField]
	protected CanvasGroup mainContentCanvasGroup;
	private const float titleSlideAmount = 300f;
	private const float slideDuration = 0.2f;
	private float titleOriginalYPosition;
	private float slideInStartTime;
	private float slideOutStartTime;
	protected PopupState currentState;
	protected float stateStartTime;
	protected UnityAction onDisplayDoneCallback;

	// Properties
	public Color BackgroundColor { get; }
	public float DisplayTime { get; }

	// Nested types
	protected enum PopupState
	{
		notStarted = 0,
		displaying = 1,
		done = 2
	}

	// Constructors
	public TierUnlockedPopupContentBase();

	// Methods
	public virtual void Initialize(GamePassTier unlockedGamePassTier, UnityAction onDisplayDoneCallback);
	public void UpdateScale(float newScale);
	public void UpdateAlpha(float newAlpha);
	protected virtual void Update();
	protected virtual void HandleDisplaying();
	protected void SetState(PopupState newState);
	protected void HandleSlideTitleText();
}

