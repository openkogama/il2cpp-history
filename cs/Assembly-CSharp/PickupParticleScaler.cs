/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupParticleScaler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PickupItem itemAttachedTo;
	[SerializeField]
	private ParticleSystem particleSysToScale;

	// Constructors
	public PickupParticleScaler();

	// Methods
	private void Start();
	private void OnDestroy();
	private void OnScaleChange(MVWorldObjectClient obj, ScaleChangedEventArgs args);
}

