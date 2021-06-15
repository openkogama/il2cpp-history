/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent]
public class ChatBubble : MonoBehaviour
{
	// Fields
	[Tooltip]
	public UnityEngine.UI.Text MessageComponent;
	[Multiline]
	public string MessageValue;
	[Tooltip]
	public bool AutoSize;
	[Tooltip]
	public Vector2 MessageMinimumSize;
	[Tooltip]
	public float MessageWrapWidth;
	[Tooltip]
	public Image ExtenderComponent;
	[Tooltip]
	public ExtenderBorderInfo[] ExtenderBorderInfo;
	[Tooltip]
	public ExtenderBorderEnum ExtenderDock;
	[Tooltip]
	public CanvasGroup CanvasGroup;
	[Tooltip]
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

