/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GoldRewardUnlockedPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text titleText;
	[SerializeField]
	private RectTransform imageContentTransform;
	[SerializeField]
	private float bounceEffectDuration;
	[SerializeField]
	private AnimationCurve bounceEffect;
	private float bounceEffectStartTime;
	private string titleString;

	// Constructors
	public GoldRewardUnlockedPopup();

	// Methods
	private void Start();
	private void StartEffect();
	private void Update();
}

