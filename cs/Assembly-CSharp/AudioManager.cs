/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AudioManager : MonoBehaviour
{
	// Fields
	private GameObject poolTransform;
	private List<Sound> activeSounds;
	private List<Sound> pooledSounds;
	private List<int> soundsToRemove;
	private const int MaxPooledSoundObjects = 128;

	// Nested types
	public class Sound
	{
		// Fields
		public GameObject go;
		public AudioSource audio;

		// Constructors
		public Sound();
	}

	// Constructors
	public AudioManager();

	// Methods
	private void Awake();
	private void Update();
	public Sound Play(string name, AudioClip clip, Vector3 position, float volume, SoundRangeDistance range, float pitch = 1f);
	public Sound Play(string name, AudioSource audioSource);
	public Sound Play(string name, AudioSource audioSource, Vector3 position);
	private static float GetMinDistanceFromRange(SoundRangeDistance range);
	private static float GetMaxDistanceFromRange(SoundRangeDistance range);
}

