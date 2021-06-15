/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PurchasedAccessoryPreviewer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image image;
	[SerializeField]
	private StreamedSpriteToImageManual imageLoader;
	[SerializeField]
	private Image background;
	[SerializeField]
	private Image backgroundGlow;
	[SerializeField]
	private float imageDisplayTime;
	[SerializeField]
	private float imageBounceEffectTime;
	[SerializeField]
	private AnimationCurve bounceEffect;
	[SerializeField]
	private AnimationCurve fadeEffect;
	private float currentTime;
	private AccessoryDataClient[] previewData;
	private int currentStreamingAssetIndex;
	private Color targetColorBackground;
	private Color targetColorGlow;
	private int targetHeight;

	// Nested types
	[CompilerGenerated]
	private sealed class _DisplayAndFadeImages_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal PurchasedAccessoryPreviewer _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;
		private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadeImages_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
		private static void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PurchasedAccessoryPreviewer();

	// Methods
	public void Initialize(AccessoryDataClient[] previewAccessories);
	private void OnShow();
	private string GetImageUrl(AccessoryDataClient accessoryDataClient);
	[DebuggerHidden]
	private IEnumerator DisplayAndFadeImages();
	private void EvaluateImageAtTime(float bounceTime, float colorTime);
}

