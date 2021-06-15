/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent]
public class ChatAnchor : MonoBehaviour
{
	// Fields
	[Tooltip]
	public ChatBubble AttachedBubble;
	[Tooltip]
	public float AttachedRadius;
	[Range]
	[Tooltip]
	public float AttachedAngle;
	[Tooltip]
	public float TrackingSpeed;
	[Tooltip]
	public bool KeepInView;
	private bool snapTracking;
	private bool inViewport;
	private bool isLocal;
	private Avatar avatar;
	private float currentInterpolationProgress;
	private Vector3 previousAdjustedPosition;
	private const float screenEdgeOffset = 40f;

	// Constructors
	public ChatAnchor();

	// Methods
	public bool BindAttachedBubble(ChatBubble value);
	public void Initialize(bool isLocal, Avatar avatar);
	private void OnEnable();
	private void OnValidate();
	private void OnDestroy();
	private void Update();
	public void UpdateAttachedBubblePosition();
	private Vector3 HandleOfScreenChatBubble(Camera camera, Vector3 adjustedPosition);
	private void InterpolateToNewBubblePosition(Vector3 adjustedPosition);
	public void SkipInterpolation();
	public void HideChatBubble();
}

