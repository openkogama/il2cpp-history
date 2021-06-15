/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeCubeEditFadeButtons : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float fadeIn;
	[SerializeField]
	private CanvasGroup canvasGroup;
	private float currentTime;
	private bool doFading;

	// Constructors
	public FirstTimeCubeEditFadeButtons();

	// Methods
	private void Awake();
	public void ActivateImmediate();
	public bool IsEnabled();
	public void Activate();
	private void Update();
}

