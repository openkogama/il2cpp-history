/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeathPromotionController : MonoBehaviour, IDeathPromotionSelector
{
	// Fields
	[SerializeField]
	private TouristAdController touristAdController;
	[SerializeField]
	private RegisteredPromotionController registeredAdController;
	private IPromotionController adController;

	// Properties
	public bool ReadyForAd { get; }

	// Constructors
	public DeathPromotionController();

	// Methods
	public void Initialize();
	public void TryShowPromotion(UnityAction<bool, bool> onPromotionPopped);
}

