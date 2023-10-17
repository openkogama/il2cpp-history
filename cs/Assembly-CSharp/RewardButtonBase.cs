/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RewardButtonBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image RadialFill;

	// Constructors
	public RewardButtonBase();

	// Methods
	protected virtual void EnableEffects();
	protected virtual void DisableEffects();
	protected virtual void UpdateOutline(float progress);
}

