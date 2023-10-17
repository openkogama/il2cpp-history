/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent(typeof(RectTransform))]
public class ChatBubble : MonoBehaviour
{
	// Fields
	[Tooltip("Text component in the tree used to display the bubble\'s message.")]
	public UnityEngine.UI.Text MessageComponent;
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
	private float currentFade;
	private float timeUntilFade;
	private const float baseFadeWaitTime = 5f;
	private const float charactersPerSecond = 30f;
	private const int characerLimit = 130;
	private const float startFadeRadius = 17.5f;
	private const float completelyFadeRadius = 20f;

	// Properties
	public bool IsActive { get; }
	public RectTransform rectTransform { get; }
	public ChatAnchor Anchor { set; }

	// Constructors
	public ChatBubble();

	// Methods
	public bool BindMessageValue(string value);
	public bool BindExtenderDock(ExtenderBorderEnum value);
	private void Awake();
	private void OnEnable();
	private void OnDisable();
	private void Update();
	private void UpdateFading();
	private void UpdateDistanceFading();
	public void HideBubble();
	public void SetChatBubbleVisibility(bool shouldBeVisible);
	public Vector2 PerformManualSize(string value);
	public void PerformAutoSize();
	private bool PerformAutoHeight();
	private bool PerformAutoWidth();
	public void PerformExtenderSnap();
	public void PerformExtenderPosition();
	private void BindExtenderToClosestBorder(Camera camera);
	private void SetExtenderAnchorPosToBorder(ExtenderBorderInfo info);
	public void CalculateExtenderBorderVertices(ExtenderBorderInfo info, ref Vector3 v1, ref Vector3 v2);
}

