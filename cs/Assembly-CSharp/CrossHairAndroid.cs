/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CrossHairAndroid : MonoBehaviour, IGUICrossHair
{
	// Fields
	[SerializeField]
	protected Image crossHair;
	[SerializeField]
	private UnityEngine.UI.Text ammoCount;
	[SerializeField]
	private Image chargeFill;
	[SerializeField]
	private GameObject ammoRoot;
	[SerializeField]
	private Image crossHairHitEnemyIndicator;
	[SerializeField]
	private AnimationCurve fadeCurve;
	[SerializeField]
	private float toggleInterval;
	[SerializeField]
	protected Color alphaBase;
	private float timeSinceLastToggle;
	private bool isFillOn;
	private float timer;
	private bool hitEffectActive;

	// Properties
	public bool Visible { get; set; }

	// Constructors
	public CrossHairAndroid();

	// Methods
	public void ShowHasHitEffect();
	private void Update();
	public void HolsterStateChanged(bool isHolstered);
	public virtual void UpdateCrossHair(PickupItem pickupItem);
	private string GenerateAmmoText(PickupItem pickupItem);
	protected void SetAlphaBaseToColor(Color color);
}

