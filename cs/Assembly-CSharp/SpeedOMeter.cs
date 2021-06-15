/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpeedOMeter : MonoBehaviour
{
	// Fields
	public float fadeTime;
	[SerializeField]
	private CanvasGroup speedGroup;
	[SerializeField]
	private UnityEngine.UI.Text speedText;
	private float curSpeed;
	private float currFade;
	private bool prevFading;
	private bool fading;

	// Constructors
	public SpeedOMeter();

	// Methods
	private void Awake();
	private void Update();
	private void Fade();
	private void Show();
}

