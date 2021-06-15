/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdvancedGhostVisualizaton : MonoBehaviour
{
	// Fields
	private EffectBase currentEffect;
	private Vector3 baseScale;
	public GhostEye ghostEye;
	public GhostBody ghostBody;
	public AdvancedGhostBlinker blinker;
	public AudioSource moving;
	public AudioSource receiveDamage;
	public AudioSource weaponHitSound;

	// Nested types
	public enum Effect
	{
		Attack = 0,
		Die = 1,
		Respawn = 2,
		None = 3
	}

	private abstract class EffectBase
	{
		// Fields
		protected float duration;
		protected float timeLeft;

		// Constructors
		protected EffectBase(float duration);

		// Methods
		protected abstract void UpdateEffect(AdvancedGhostVisualizaton ghostVisualizaton);
		public abstract void Exit(AdvancedGhostVisualizaton ghost);
		public bool Update(AdvancedGhostVisualizaton ghostVisualizaton);
	}

	private class Die : EffectBase
	{
		// Constructors
		public Die(float duration, AdvancedGhostVisualizaton ghostVisualizaton);

		// Methods
		protected override void UpdateEffect(AdvancedGhostVisualizaton ghostVisualizaton);
		private Vector3 UpdateScale(AdvancedGhostVisualizaton ghostVisualizaton);
		public override void Exit(AdvancedGhostVisualizaton ghost);
	}

	private class Respawn : EffectBase
	{
		// Constructors
		public Respawn(float duration, AdvancedGhostVisualizaton ghostVisualizaton);

		// Methods
		protected override void UpdateEffect(AdvancedGhostVisualizaton ghostVisualizaton);
		private Vector3 UpdateScale(AdvancedGhostVisualizaton ghostVisualizaton);
		public override void Exit(AdvancedGhostVisualizaton ghost);
	}

	// Constructors
	public AdvancedGhostVisualizaton();

	// Methods
	private void Awake();
	public void SetRotationSpeed(float rotationSpeed);
	public void ReceivedDamage();
	public void ReceivedHealing();
	public void PlayEffect(Effect effect, float duration);
	private void Update();
	private void Start();
	private void OnEnable();
	private void OnDisable();
}

