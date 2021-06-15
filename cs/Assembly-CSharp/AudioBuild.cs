/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AudioBuild : MonoBehaviour
{
	// Fields
	public AudioClip cubeAdded;
	public AudioClip cubeRemoved;
	public AudioClip faceMoved;
	public AudioClip edgeMoved;
	public AudioClip vertexMoved;
	public AudioClip cubePainted;
	public AudioClip translateNotGrid;
	public AudioClip translateGrid;
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
	public void PlayClip(Vector3 worldPos, AudioClip audioClip, float randMin, float randMax);
}

