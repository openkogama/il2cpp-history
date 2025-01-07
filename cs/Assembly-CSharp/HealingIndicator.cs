/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HealingIndicator : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image healthOverlay;
	[SerializeField]
	private AnimationCurve curve;
	private float timer;
	private float animationDuration;
	private float targetTime;

	// Constructors
	public HealingIndicator();

	// Methods
	private void Awake();
	public void ShowHealing(float healingAmount, MVPlayer healer);
	private void Update();
}

