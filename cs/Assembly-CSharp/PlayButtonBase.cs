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

public class PlayButtonBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image countdownFill;
	[SerializeField]
	protected bool shouldPop;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public PlayButtonBase();

	// Methods
	protected void UpdateButton();
	protected virtual void StartPlaying();
	protected virtual void OnCountDownEnd();
	[CompilerGenerated]
	private static void _StartPlaying_m__0(IUIStack handler, BaseEventData data);
}

