/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[Serializable]
public class SplashController : StreamedAudioClip.IReceiver
{
	// Fields
	[Header("Rings")]
	[SerializeField]
	private ParticleSystem waterRingParticles;
	[SerializeField]
	private float timeBeforeNewRingIsEmitted;
	[SerializeField]
	private float distanceBeforeNewRingIsEmitted;
	[Header("Splash")]
	[SerializeField]
	private ParticleSystem waterSplashParticles;
	[SerializeField]
	[Tooltip("Actual number is based off avatar speed.")]
	private float baseNumberOfSplashParticles;
	[Range(0f, 4f)]
	[SerializeField]
	[Tooltip("Actual number is based off avatar speed.")]
	private float baseSplashParticlesSpeed;
	[SerializeField]
	private Color splashTint;
	[Header("Pillar")]
	[SerializeField]
	private ParticleSystem waterPillarParticles;
	[Range(0f, 10f)]
	[SerializeField]
	private float waterPillarDensity;
	[SerializeField]
	private Color pillarTint;
	[Header("Sound")]
	[Range(0f, 1f)]
	[SerializeField]
	private float splashSoundVolume;
	[SerializeField]
	private StreamedAudioClip streamedSplashSound;
	private AudioClip splashSound;
	private static int currentObjectID;
	private static readonly Dictionary<int, ObjectData> objectIDToData;

	// Properties
	public int NewObjectID { get; }

	// Nested types
	private class ObjectData
	{
		// Fields
		[CompilerGenerated]
		private float _TimeSinceLastRingEmission_k__BackingField;
		[CompilerGenerated]
		private Vector3 _LastRingPosition_k__BackingField;
		[CompilerGenerated]
		private int _LastFrameInWater_k__BackingField;
		[CompilerGenerated]
		private bool _IsInWater_k__BackingField;

		// Properties
		public float TimeSinceLastRingEmission { [CompilerGenerated] get; [CompilerGenerated] set; }
		public Vector3 LastRingPosition { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int LastFrameInWater { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool IsInWater { [CompilerGenerated] get; [CompilerGenerated] set; }

		// Constructors
		public ObjectData();
	}

	// Constructors
	public SplashController();
	static SplashController();

	// Methods
	public void Initialize();
	public void Destroy();
	public void CleanUpInactiveObjectIDs();
	public void WaterSplash(Bounds bounds, Vector3 velocity, int objectID);
	private float CalcSplashSoundVolume(Vector3 velocity);
	private static ObjectData GetObjectData(int objectID);
	private static Vector3 BoundsToPosition(Bounds b);
	private void EmitWaterRing(Vector3 position);
	private void EmitWaterSplash(Vector3 position, Vector3 velocity);
	private void EmitWaterPillar(Vector3 position, Vector3 impactVelocity);
	public void OnAudioReceived(AudioClip a);
}

