/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostIconActivationEffectManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private BoostIconActivationEffectController boostIconEffectPrefab;
	private List<BoostIconActivationEffectController> boostIconEffects;
	private int nextActiveBoostEffect;
	private SpawnRoleModeType previousMode;

	// Constructors
	public BoostIconActivationEffectManager();

	// Methods
	private void Start();
	private void OnDestroy();
	private void OnAvatarModeChange(SpawnRoleModeType newMode);
	private void OnAvatarSpawn();
	private void StartBoostIconEffect();
}

