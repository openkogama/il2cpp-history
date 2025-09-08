/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
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
	private GameObject ammoRoot;
	[SerializeField]
	private UnityEngine.UI.Text ammoCount;
	[SerializeField]
	private Image chargeFill;
	[SerializeField]
	private float toggleInterval;
	[SerializeField]
	private Image hitIndicatorImage;
	[SerializeField]
	private AnimationCurve fadeCurve;
	private float timeSinceLastToggle;
	private bool isFillOn;

	// Properties
	public bool Visible { get; set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _HitIndicatorAnimation_d__13 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public CrossHair __4__this;
		private float _timer_5__2;
		private float _targetTime_5__3;
		private Color _hitIndicatorColor_5__4;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _HitIndicatorAnimation_d__13(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public CrossHair();

	// Methods
	public void ShowHasHitEffect();
	[IteratorStateMachine(typeof(_HitIndicatorAnimation_d__13))]
	private IEnumerator HitIndicatorAnimation();
	public void UpdateCrossHair(PickupItem pickupItem);
	private void UpdateAmmoCount(PickupItem pickupItem);
	private void UpdateChargeState(PickupItem pickupItem);
	private void UpdateCrosshairColor(PickupItem pickupItem);
}

