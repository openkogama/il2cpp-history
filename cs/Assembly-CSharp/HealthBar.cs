/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HealthBar : MonoBehaviour
{
	// Fields
	public Transform healthPivot;
	public Transform oxygenPivot;
	[CompilerGenerated]
	private float _MaxHealth_k__BackingField;

	// Properties
	public float MaxHealth { [CompilerGenerated] get; [CompilerGenerated] set; }
	public float Health { get; set; }
	public float Oxygen { set; }

	// Constructors
	public HealthBar();

	// Methods
	private void SetScaleFromHealth(float value);
}

