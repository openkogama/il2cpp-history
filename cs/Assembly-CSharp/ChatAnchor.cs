/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent(typeof(Transform))]
public class ChatAnchor : MonoBehaviour
{
	// Fields
	[Tooltip("Chat Bubble that should be anchored at this transform.")]
	public ChatBubble AttachedBubble;
	[Tooltip("Radius in world units from the anchor transform to the bubble\'s pivot.")]
	public float AttachedRadius;
	[Range(-180f, 180f)]
	[Tooltip("Angle in degrees around the transform to the bubble\'s pivot.")]
	public float AttachedAngle;
	[Tooltip("Smoothing speed as the bubble follows the anchor transform.")]
	public float TrackingSpeed;
	[Tooltip("True if the bubble should stay within the screen bounds until the anchor position is no longer visible.")]
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

