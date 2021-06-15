/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesHighlightArrow : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform transformToMove;
	[SerializeField]
	private AnimationCurve moveCurve;
	[SerializeField]
	private float moveAmount;
	[SerializeField]
	private float directionX;
	[SerializeField]
	private float directionY;
	private float moveStartTime;
	private Vector3 startPosition;

	// Constructors
	public GamePassesHighlightArrow();

	// Methods
	private void Start();
	private void OnEnable();
	private void Update();
}

