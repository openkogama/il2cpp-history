/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostParticlesActivationEffect : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ParticleSystem rayParticles;
	[SerializeField]
	private ParticleSystem bubbleParticles;
	[SerializeField]
	private List<BoosterColors> boostColors;
	[SerializeField]
	private float activationCooldown;
	private SpawnRoleModeType previousMode;
	private float activationStartTime;
	private List<BoostType> boostsToActivate;

	// Nested types
	[Serializable]
	private struct BoosterColors
	{
		// Fields
		public BoostType type;
		public Color rayColor;
		public Color bubbleColor;
	}

	// Constructors
	public BoostParticlesActivationEffect();

	// Methods
	private void Start();
	private void OnDestroy();
	private void Update();
	private void OnAvatarModeChange(SpawnRoleModeType newMode);
	private void OnAvatarSpawn();
	private void ActivateParticles(BoostType typeToActivate);
}

