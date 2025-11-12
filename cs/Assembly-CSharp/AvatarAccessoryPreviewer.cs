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

public class AvatarAccessoryPreviewer : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerClickHandler
{
	// Fields
	[SerializeField]
	private AvatarPreviewer previewer;
	[SerializeField]
	private RawImage toImage;
	[SerializeField]
	private int previewDimensionsX;
	[SerializeField]
	private int previewDimensionsY;
	[SerializeField]
	private float rotationSensitivity;
	[SerializeField]
	private float zoomSpeed;
	[SerializeField]
	private GameObject dropShadowPlane;
	private float currentRotationSpeed;
	private Transform avatarResetToTransform;
	private AvatarPreviewer toPreviewer;
	private const string mouseX = "Mouse X";
	private const string mouseY = "Mouse Y";
	private bool imagesReady;
	private int currentAnimation;
	private List<string> animations;
	private MVBody avatarBody;
	private GameObject bodyClone;
	private Animation goAnimation;
	private ActivateOnAnimationBase[] OnAnimationActivators;
	private const float animationLoopTimes = 3f;
	private float startFov;
	private bool pickedAccessory;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass30_0
	{
		// Fields
		public AccessoryDataClient accessoryData;

		// Constructors
		public __c__DisplayClass30_0();

		// Methods
		internal void _OnPointerClick_b__0(IAccessoryClicked x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _AnimationEndTrack_d__35 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public float resetDelay;
		public AvatarAccessoryPreviewer __4__this;
		private float _startTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _AnimationEndTrack_d__35(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public AvatarAccessoryPreviewer();

	// Methods
	public void SetupPreviewer(MVBody avatarBody);
	public void ResetPreviewTransform();
	private bool PickAccessory(Ray ray, out GameObject gameObject, out UnityEngine.RaycastHit raycastHit);
	private void Start();
	private void Update();
	private void OnDestroy();
	public void OnDrag(PointerEventData data);
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerClick(PointerEventData eventData);
	public void ChangeAnimation();
	public void OnRestartAnimation();
	private void PlayAnimation();
	private void PlayAnimation(string animationName);
	[IteratorStateMachine(typeof(_AnimationEndTrack_d__35))]
	private IEnumerator AnimationEndTrack(float resetDelay);
	private void RemoveSkinnedMeshOptimizers();
	[CompilerGenerated]
	private void _Start_b__24_0(IGetCurrentBody x, BaseEventData y);
}

