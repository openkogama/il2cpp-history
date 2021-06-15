/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CustomTouristPromotion : TouristPromotion
{
	// Fields
	[SerializeField]
	private GameObject adContinueButton;
	[SerializeField]
	private Image graphics;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<ITouristAdController> __f__am_cache0;

	// Constructors
	public CustomTouristPromotion();

	// Methods
	protected override void Start();
	private void StreamingAssetCallback(UnityWebRequest www);
	public void Continue();
	public void Signup();
	public void CustomRedirect();
	[CompilerGenerated]
	private static void _Continue_m__0(ITouristAdController x, BaseEventData y);
}

