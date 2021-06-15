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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TextBubble : MonoBehaviour
{
	// Fields
	[Header]
	[SerializeField]
	private LayoutGroup bubble;
	[SerializeField]
	private RectTransform tail;
	[SerializeField]
	private CanvasGroup fadeGroup;
	[NonSerialized]
	public Transform transform;
	private List<UnityEngine.Object> content;
	[SerializeField]
	private Vector2 centerPoint;
	private int bubbleId;

	// Properties
	public Vector2 Position { private get; set; }
	private RectTransform BubbleTransform { get; }
	private float HorizontalPadding { get; }
	private float VerticalPadding { get; }

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
	private void _OnDestroy_m__0(TextBubbleController x, BaseEventData y);
}

