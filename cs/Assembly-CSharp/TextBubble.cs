/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TextBubble : MonoBehaviour
{
	// Fields
	[Header("Dependencies")]
	[SerializeField]
	private LayoutGroup bubble;
	[SerializeField]
	private RectTransform tail;
	[SerializeField]
	private CanvasGroup fadeGroup;
	[SerializeField]
	private Vector2 centerPoint;
	private List<UnityEngine.Object> content;
	private int bubbleId;
	[NonSerialized]
	public Transform transform;

	// Properties
	private RectTransform BubbleTransform { get; }
	private float HorizontalPadding { get; }
	private float VerticalPadding { get; }
	public Vector2 Position { private get; set; }

	// Constructors
	public TextBubble();

	// Methods
	private void Start();
	private void OnDestroy();
	public void Initialize(Vector2 center, int bubbleId);
	public void OnRemoved();
	public void Add(RectTransform transformContent);
	public void ClearContent();
	private void RecalcPositionWithScreenCollision();
	public void RecalcPositionAndSize(int inside);
	public void SetTransparancy(float a);
	protected void OnValidate();
	private float CalculatePivotNearEdgeOffset(float pivot);
	[CompilerGenerated]
	private void _OnDestroy_b__17_0(TextBubbleController x, BaseEventData y);
}

