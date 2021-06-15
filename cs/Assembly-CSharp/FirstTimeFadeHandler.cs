/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeFadeHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private float fadeOutTime;
	private float currentFadeOutTime;
	[SerializeField]
	private float fadeInTime;
	private float currentFadeInTime;
	private bool fadingIn;
	private bool fadingOut;
	private Action<GameObject> finishedAction;
	private GameObject targetGameObject;

	// Constructors
	public FirstTimeFadeHandler();

	// Methods
	public void StartFadeIn();
	public void StartFadeOut(Action<GameObject> finishedAction, GameObject targetGameObject);
	private void Update();
	private void DoAction();
}

