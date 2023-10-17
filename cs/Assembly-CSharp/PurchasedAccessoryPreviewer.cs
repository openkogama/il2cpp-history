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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__17_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _DisplayAndFadeImages_b__17_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _DisplayAndFadeImages_d__17 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public PurchasedAccessoryPreviewer __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadeImages_d__17(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public PurchasedAccessoryPreviewer();

	// Methods
	public void Initialize(AccessoryDataClient[] previewAccessories);
	private void OnShow();
	private string GetImageUrl(AccessoryDataClient accessoryDataClient);
	[IteratorStateMachine(typeof(_DisplayAndFadeImages_d__17))]
	private IEnumerator DisplayAndFadeImages();
	private void EvaluateImageAtTime(float bounceTime, float colorTime);
}

