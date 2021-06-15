/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent]
public class BoneAnimation : MonoBehaviour
{
	// Fields
	public Action<string> OnAnimationChange;
	private const int REMOTE_ANIM_SPEEDUP = 20;
	private const float walkAnimationMinSpeed = 0.5f;
	private const float walkAnimationMaxSpeed = 1.1f;
	private const float animationWalkSpeed = 8f;
	private float fallbackWalkSpeed;
	private MVAvatar mvAvatar;
	private bool isLocal;
	private AudioSource audioSource;
	private Queue<AnimationData> animationQueue;
	private AnimationData prevAnim;
	private AnimationData currentAnim;
	private AnimationData nextAnim;
	private HashSet<string> playingAnimations;
	private bool pauseNextFrame;
	private int playStartFrame;
	[SerializeField]
	private Animation avatarAnimation;
	private Camera mainCamera;

	// Properties
	public AudioSource AudioSource { get; }
	public float FallBackWalkSpeed { set; }

	// Constructors
	public BoneAnimation();

	// Methods
	private void Start();
	public void PlayFootstepAudio();
	private float GetFootstepPitch();
	public void Attach(MVAvatar mvAvatar, bool isLocal);
	public void Detach();
	public void AnimationChangeHandler(object animData);
	public void StartAnimation(string newAnimation, int timeStamp);
	public void ComputeBlendAnimation(Dictionary<object, object> animData);
	private void OnEnable();
	private void ComputeAnimation();
	private void ComputeRemoteAnimation();
	public void Play(string animationName);
	public void PlayAndPauseAt(string animationName, float time);
	public float GetAnimationTime(string animation);
	public void Stop();
	public bool IsPlaying(string animationName);
	private void Update();
}

