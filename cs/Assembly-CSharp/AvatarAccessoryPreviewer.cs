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
	private sealed class _OnPointerClick_c__AnonStorey1
	{
		// Fields
		internal AccessoryDataClient accessoryData;

		// Constructors
		public _OnPointerClick_c__AnonStorey1();

		// Methods
		internal void __m__0(IAccessoryClicked x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _AnimationEndTrack_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _startTime___0;
		internal float resetDelay;
		internal AvatarAccessoryPreviewer _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _AnimationEndTrack_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public AvatarAccessoryPreviewer();

	// Methods
	public void SetupPreviewer(MVBody avatarBody);
	public void ResetPreviewTransform();
	private bool PickAccessory(Ray ray, out GameObject gameObject, out RaycastHit raycastHit);
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
	[DebuggerHidden]
	private IEnumerator AnimationEndTrack(float resetDelay);
	private void RemoveSkinnedMeshOptimizers();
	[CompilerGenerated]
	private void _Start_m__0(IGetCurrentBody x, BaseEventData y);
}

