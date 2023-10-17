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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CustomTouristPromotion : TouristPromotion
{
	// Fields
	[SerializeField]
	private GameObject adContinueButton;
	[SerializeField]
	private Image graphics;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<ITouristAdController> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Continue_b__4_0(ITouristAdController x, BaseEventData y);
	}

	// Constructors
	public CustomTouristPromotion();

	// Methods
	protected override void Start();
	private void StreamingAssetCallback(UnityWebRequest www);
	public void Continue();
	public void Signup();
	public void CustomRedirect();
}

