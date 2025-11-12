/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(AudioSource))]
public class CustomItemAudioPlayer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CustomItemAudioClip[] audioClips;
	private AudioSource audioSource;
	private float baseVolume;
	private string[] clipNames;
	private int index;

	// Properties
	public bool IsPlaying { get; }
	public float ClipLength { get; }

	// Nested types
	[Serializable]
	private struct CustomItemAudioClip
	{
		// Fields
		public string clipURL;
		[HideInInspector]
		public StreamedAudioClipManual audioStream;
		public float pitchVariation;
		public bool isLooped;
	}

	// Constructors
	public CustomItemAudioPlayer();

	// Methods
	public void Initialize(string[] clipNames);
	private void SetAudioSourceSettings(int index);
	public void PlayClip(int index, bool useAudioManager = true, Vector3 position = default);
	public void PlayClipFraction(int index, float length);
	public void Stop();
	public void SetVolume(float volume);
	public void SetPitch(float pitch);
	public bool IsClipLooped(int index);
}

