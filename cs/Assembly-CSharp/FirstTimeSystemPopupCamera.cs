/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeSystemPopupCamera : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float mouseMoveDistance;
	[SerializeField]
	private float fadeDuration;
	[SerializeField]
	private CanvasGroup group;
	[SerializeField]
	private GameObject activeImage;
	[SerializeField]
	private GameObject inActiveImage;
	private float mouseMoved;
	private Vector3 mousePos;
	private float currentFade;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public FirstTimeSystemPopupCamera();

	// Methods
	private void Update();
	[CompilerGenerated]
	private static void _Update_m__0(IUIStack x, BaseEventData y);
}

