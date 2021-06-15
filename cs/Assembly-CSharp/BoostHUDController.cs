/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameMeterVisuals;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostHUDController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private HorizontalLayoutGroup content;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private SlideOnClick slideOnClick;
	[SerializeField]
	private BoostImageController boostImageController;
	[SerializeField]
	private int boosterWidth;
	private List<GameObject> currentBoosts;
	private Vector2 startPos;
	private RectTransform rectTransform;

	// Constructors
	public BoostHUDController();

	// Methods
	private void Start();
	private void SetupHUD();
	private void SetupTransform();
	private void CreateActiveBoosts();
	private void OnDestroy();
}

