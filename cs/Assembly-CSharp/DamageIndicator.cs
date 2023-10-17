/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DamageIndicator : MonoBehaviour
{
	// Fields
	[Header("Configuration")]
	[SerializeField]
	[Tooltip("Distance from center, for indicator arrow to appear.")]
	private float indicationRadius;
	[SerializeField]
	[Tooltip("Transparency [0..1] by time [0..1] remaining")]
	private AnimationCurve fade;
	[SerializeField]
	private float durationPerPointOfDamage;
	[SerializeField]
	private int maxNumberOfArrows;
	[Header("Dependencies")]
	[SerializeField]
	private Image damageOverlay;
	[SerializeField]
	private StreamedSpriteToCallback arrowSpriteStream;
	[SerializeField]
	private DamageArrow directionArrowBase;
	private IndicatorArrow directionArrow;
	private float damageOverlayTimer;
	private float timeNormalizationFactor;
	private float initialAlpha;

	// Nested types
	private class IndicatorArrow
	{
		// Fields
		private static IndicatorArrow _nextArrow;
		private static float indicationRadius;
		private IndicatorArrow nextArrow;
		private DamageArrow arrow;
		private Transform damageOrigin;
		private float timer;
		private bool idle;

		// Properties
		public static IndicatorArrow NextArrow { get; }

		// Constructors
		public IndicatorArrow(int numberOfArrows, DamageArrow arrowBase, float indicationRadius);
		private IndicatorArrow(int numberOfArrows, DamageArrow arrowBase, IndicatorArrow firstArrow);

		// Methods
		public void Show(Transform origin, float time, float indicationRadius);
		public void Update();
		public void Reset();
		public void SetSprite(Sprite sprite);
		private void UpdateArrowPosition();
		private void InternalUpdate();
		private void InternalReset();
	}

	// Constructors
	public DamageIndicator();

	// Methods
	private void Awake();
	private void SetArrowSprites(Sprite sprite);
	public void ResetIndicators();
	public void ShowDamage(float damageAmount, MVPlayer damageDealer, PlayerKilledByType damageType);
	private void Update();
	private void SetTransparency(Image i, float alpha);
}

