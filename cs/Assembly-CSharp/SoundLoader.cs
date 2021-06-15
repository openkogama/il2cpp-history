/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SoundLoader
{
	// Fields
	private string currentUrl;
	private string url;
	private AudioSource audioSource;
	public UpdateSoundCallback callback;

	// Properties
	public AudioSource AudioSource { get; set; }
	public string Url { set; }

	// Nested types
	public delegate void UpdateSoundCallback();

	// Constructors
	public SoundLoader();

	// Methods
	public void LoadSound();
	public void Download(string soundUrl);
	private void OnDownloadFinished(UnityWebRequest www);
	public void Destroy();
	private void UpdateSound(AudioClip clip);
	public void StopAndDestroySound();
}

