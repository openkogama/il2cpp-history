/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeEventPopupWithProgress : FirstTimeEventPopup
{
	// Fields
	[SerializeField]
	private Scrollbar ProgressBar;
	[SerializeField]
	private UnityEngine.UI.Text progressText;
	private float progress;
	private float interpolationSpeed;
	private float interpolateToSize;

	// Properties
	private float Progress { get; set; }

	// Constructors
	public FirstTimeEventPopupWithProgress();

	// Methods
	public void SetProgress(float current, float max);
	private void Update();
}

