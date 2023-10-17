/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleBlinker : BlinkerBase
{
	// Fields
	[SerializeField]
	private Color blinkDamageColor;
	[SerializeField]
	private Color blinkHealingColor;
	[SerializeField]
	private Color blinkAboutToExpireColor;

	// Constructors
	public VehicleBlinker();

	// Methods
	private new void Awake();
	public void Init(MeshFilter[] meshFilters);
}

