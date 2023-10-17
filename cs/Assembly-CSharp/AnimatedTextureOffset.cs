/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AnimatedTextureOffset : ActivateOnAnimationBase
{
	// Fields
	[SerializeField]
	private Renderer skinnedRenderer;
	[SerializeField]
	private Renderer meshRenderer;
	[SerializeField]
	private float animationFrameAmount;
	[SerializeField]
	private string triggerAnimationName;
	[SerializeField]
	private List<TextureOffsetAnimationData> textureOffsetAnimationDataList;
	[SerializeField]
	private Animation animations;
	private bool isActive;
	private float animationStartTime;
	private float previousAnimationTime;
	private float offsetRatio;
	private float currentOffset;
	private float previousOffset;
	private float timer;
	private const float updateCooldown = 0.1f;
	private const float animationsFramePerSeconds = 24f;

	// Nested types
	[Serializable]
	private struct TextureOffsetAnimationData
	{
		// Fields
		public float textureOffset;
		public float frameToChangeTextureAt;
		public bool hasAlreadyTransitioned;
	}

	// Constructors
	public AnimatedTextureOffset();

	// Methods
	protected override void Start();
	private void Update();
	public override void OnAvatarAnimationChange(string newAnimation);
	private bool FindAnimatedTexture();
	private void UpdateAnimatedTextureOffset();
	private void SetTextureOffset(float offset);
	private void ResetTextureOffsets();
}

