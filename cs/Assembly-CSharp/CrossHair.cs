/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CrossHair : MonoBehaviour, IGUICrossHair
{
	// Fields
	[SerializeField]
	private Image crossHair;
	[SerializeField]
	private UnityEngine.UI.Text ammoCount;
	[SerializeField]
	private Image chargeFill;
	[SerializeField]
	private float toggleInterval;
	[SerializeField]
	private Image crossHairHitEnemyIndicator;
	[SerializeField]
	private AnimationCurve fadeCurve;
	private float timeSinceLastToggle;
	private bool isFillOn;
	private float timer;
	private bool hitEffectActive;

	// Properties
	public bool Visible { get; set; }

	// Constructors
	public CrossHair();

	// Methods
	public void ShowHasHitEffect();
	public void UpdateCrossHair(PickupItem pickupItem);
	private void Update();
}

