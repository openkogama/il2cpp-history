/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristPromotionCrey : TouristPromotion
{
	// Fields
	[SerializeField]
	private GameObject adContinueButton;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<ITouristAdController> __9__2_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Continue_b__2_0(ITouristAdController x, BaseEventData y);
	}

	// Constructors
	public TouristPromotionCrey();

	// Methods
	protected override void Start();
	public void Continue();
	public void Signup();
	public void CreyRedirect();
}

