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

public class TextBubbleController : MonoBehaviour, IEventSystemHandler
{
	// Fields
	[Header]
	[SerializeField]
	private float bubbleLifeTime;
	[SerializeField]
	private float bubbleFadeIn;
	[Header]
	[SerializeField]
	private TextBubble textBubblePrefab;
	[SerializeField]
	private UnityEngine.UI.Text textPrefab;
	private Dictionary<int, BubbleTracker> textBubbles;
	private const int maxNumOfBubbles = 40;
	private int currentBubbleId;
	private Camera mainCamera;
	private List<int> removeList;

	// Nested types
	private class BubbleTracker
	{
		// Fields
		public float timeToLive;
		public float currentLifeTime;
		private TextBubble bubble;

		// Properties
		public TextBubble Bubble { get; set; }

		// Constructors
		public BubbleTracker();

		// Methods
		public void Clear();
	}

	// Constructors
	public TextBubbleController();

	// Methods
	private void Start();
	public int ShowBubble3D(Vector3 worldPosition, string text, float lifeTime, Transform parentTransform, int bubbleId, bool positionUpdate = true, bool contentUpdate = false);
	public int ShowBubble3D(Vector3 worldPosition, float lifeTime, List<RectTransform> content, Transform parentTransform, Vector2 offset);
	public void UpdatePosition3D(int bubbleId, Vector3 worldPosition, Vector2 offset);
	private Vector3 CalculateOffSet(Vector2 offset, Vector3 screenSpacePos);
	public int ShowBubble2D(Vector2 anchoredPosition, Vector2 targetCenterPoint, float lifeTime, List<RectTransform> content, Transform parentTransform);
	public void UpdateContent(int bubbleId, List<RectTransform> content);
	public void UpdatePosition(int bubbleId, Vector2 anchoredPosition, Vector2 targetCenterPoint);
	public void AddFirstElement(int bubbleId, RectTransform element);
	public void AddElement(int bubbleId, RectTransform element);
	public void ClearBubblesWithId(int bubbleId);
	public void ClearBubblesOfTypeImmediately(int bubbleId);
	protected void Update();
	private bool UpdateBubble(BubbleTracker bubble);
}

