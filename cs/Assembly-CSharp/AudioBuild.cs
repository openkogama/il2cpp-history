/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AudioBuild : MonoBehaviour
{
	// Fields
	[SerializeField]
	private StreamedAudioClipManual cubeAddedClipStream;
	[SerializeField]
	private StreamedAudioClipManual cubeRemovedClipStream;
	[SerializeField]
	private StreamedAudioClipManual faceMovedClipStream;
	[SerializeField]
	private StreamedAudioClipManual edgeMovedClipStream;
	[SerializeField]
	private StreamedAudioClipManual vertexMovedClipStream;
	[SerializeField]
	private StreamedAudioClipManual cubePaintedClipStream;
	[SerializeField]
	private StreamedAudioClipManual translateNotGridClipStream;
	[SerializeField]
	private StreamedAudioClipManual translateGridClipStream;
	private AudioSource buildSource;
	private float currentTranslateMoveValue;

	// Constructors
	public AudioBuild();

	// Methods
	private void Awake();
	public void CubeAdded(Vector3 worldPos);
	public void CubeRemoved(Vector3 worldPos);
	public void FaceMoved(Vector3 worldPos);
	public void EdgeMoved(Vector3 worldPos);
	public void VertexMoved(Vector3 worldPos);
	public void CubePainted(Vector3 worldPos);
	public void Translate(float moveValue, bool moveToGridPos, Vector3 worldPos);
	private void PlayClip(Vector3 worldPos, AudioClip audioClip, float pitchMin = 1f, float pitchMax = 1f, float volumeMin = 0.7f, float volumeMax = 1f, bool checkSourceTime = true);
}

