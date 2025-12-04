/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent(typeof(RectTransform))]
public class ChatBubble : MonoBehaviour
{
	// Fields
	[Tooltip("Name container of the chat bubble")]
	public RoundedRectangle NameContainer;
	[Tooltip("Name text of the chat bubble")]
	public TextMeshProUGUI NameValue;
	[Tooltip("Text component in the tree used to display the bubble\'s message.")]
	public TextMeshProUGUI MessageComponent;
	[Tooltip("Background graphic of the chat bubble")]
	public RoundedRectangle Background;
	[Tooltip("Animation Container of the chat bubble")]
	public RectTransform AnimationContainer;
	[Multiline]
	public string MessageValue;
	[Tooltip("True if the bubble should be autosized according to the message content.")]
	public bool AutoSize;
	[Tooltip("Minimum size required.")]
	public Vector2 MessageMinimumSize;
	[Tooltip("Maximum width before wrapping.")]
	public float MessageWrapWidth;
	[Tooltip("The image should be aligned to the top without any empty pixel rows/columns around it.")]
	public Image ExtenderComponent;
	[Tooltip("Configurable borders that define where the extender can travel.")]
	public ExtenderBorderInfo[] ExtenderBorderInfo;
	[Tooltip("Border to dock the extender to.")]
	public ExtenderBorderEnum ExtenderDock;
	[Tooltip("Canvas group")]
	public CanvasGroup CanvasGroup;
	[Tooltip("Sound which plays on PopUp")]
	public AudioSource PopUpSound;
	private bool isActive;
	private RectTransform _rectTransform;
	private ChatAnchor anchor;
	private IEnumerator animationCoroutine;
	private bool targetActivation;

	// Properties
	public bool IsActive { get; }
	public ChatAnchor Anchor { set; }
	public RectTransform RectTransform { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _UpdateAnimationCoroutine_d__37 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public ChatBubble __4__this;
		private float _startYPosition_5__2;
		private float _targetYPosition_5__3;
		private float _animationTime_5__4;
		private float _currentTime_5__5;
		private float _showingTime_5__6;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _UpdateAnimationCoroutine_d__37(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public ChatBubble();

	// Methods
	private void Awake();
	private void OnEnable();
	private void OnDisable();
	private void Update();
	public void SetSenderName(string name);
	public bool BindMessageValue(string value);
	private void SetupMessageComponent(string value);
	private void SetupActivationAnimation(bool activationValue);
	public bool BindExtenderDock(ExtenderBorderEnum value);
	public void HideBubble();
	private void SetAlpha(float alpha);
	private float GetDistanceAlpha();
	[IteratorStateMachine(typeof(_UpdateAnimationCoroutine_d__37))]
	private IEnumerator UpdateAnimationCoroutine();
	private void UpdateAnimationState(float currentTime, float animationTime, float startYPosition, float targetYPosition);
	public Vector2 PerformManualSize(string value);
	public void PerformAutoSize();
	private bool PerformAutoHeight();
	private bool PerformAutoWidth();
	public void PerformExtenderSnap();
	public void UpdateExtenderPosition();
	private void BindExtenderToClosestBorder(Camera camera);
	private void SetExtenderAnchorPosToBorder(ExtenderBorderInfo info);
	public void CalculateExtenderBorderVertices(ExtenderBorderInfo info, ref Vector3 v1, ref Vector3 v2);
}

