/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerStatusPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text xpProgress;
	[SerializeField]
	private ProgressBarAndroid progressBar;
	[SerializeField]
	private float duration;
	private float currentTime;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public PlayerStatusPopup();

	// Methods
	public void Initialize();
	private void Update();
	private string FormatXP(float amount);
	[CompilerGenerated]
	private static void _Update_m__0(IUIStack x, BaseEventData y);
}

