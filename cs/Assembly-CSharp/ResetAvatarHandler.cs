/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ResetAvatarHandler : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
	// Fields
	[SerializeField]
	private AvatarScreenShooter screenShooter;
	[SerializeField]
	private PleaseWaitPopup pleaseWaitPopupPrefab;
	[SerializeField]
	private GameObject invisibleBlocker;
	[SerializeField]
	private AvatarPreviewer previewer;
	[SerializeField]
	private RawImage fromImage;
	[SerializeField]
	private RawImage toImage;
	[SerializeField]
	private int previewDimensions;
	[SerializeField]
	private float defaultRotationSpeed;
	[SerializeField]
	private float rotationSensitivity;
	private float currentRotationSpeed;
	private Action OnReset;
	private MVBody avatarBody;
	private Transform avatarResetToTransform;
	private AvatarPreviewer fromPreviewer;
	private AvatarPreviewer toPreviewer;
	private const string mouseX = "Mouse X";
	private bool imagesReady;
	private bool isDown;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnAcceptReset_c__AnonStorey0
	{
		// Fields
		internal PleaseWaitPopup popup;

		// Constructors
		public _OnAcceptReset_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ResetAvatarHandler();

	// Methods
	public void ResetAvatar(MVBody currentBody, Action onReset);
	private void GetResetAvatarData(int id);
	private void GameOnReceivedItemFromQuery(object sender, ReceivedItemFromQueryEventArgs receivedItemFromQueryEventArgs);
	public void OnDrag(PointerEventData data);
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerUp(PointerEventData eventData);
	private void Update();
	private void OnDestroy();
	public void OnAcceptReset();
}

