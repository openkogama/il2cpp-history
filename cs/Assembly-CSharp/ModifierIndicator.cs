/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ModifierIndicator : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AnimatedImage poisonOverlay;
	[SerializeField]
	private AnimatedImage fireOverlay;
	[SerializeField]
	private AnimatedImage iceOverlay;
	[SerializeField]
	private AnimationCurve fadeOutCurve;
	private OverlayWrapper[] modifierIndicators;
	private MVInteractableBase localInteractable;

	// Nested types
	[Serializable]
	private struct AnimatedImage
	{
		// Fields
		public Image image;
		public ImageAnimator animator;
		public StreamingAsset streamComponent;
		public CanvasGroup alphaHandler;
	}

	private class OverlayWrapper
	{
		// Fields
		private AnimationCurve fadeOutCurve;
		private AnimatedImage image;
		private float fadeOutTimer;

		// Properties
		private Image Image { get; set; }
		private ImageAnimator Animator { get; set; }
		private float Alpha { get; set; }

		// Constructors
		public OverlayWrapper(AnimatedImage overlayImage, AnimationCurve fadeOutCurve);

		// Methods
		public void Update(bool active);
		public void Reset();
	}

	private enum EOverlay : byte
	{
		Poison = 0,
		Fire = 1,
		Ice = 2,
		Size = 3
	}

	// Constructors
	public ModifierIndicator();

	// Methods
	private void OnValidate();
	public void Awake();
	public void Initialize(MVAvatarLocal localAvatar);
	private void Update();
	public void ResetIndicators();
}

