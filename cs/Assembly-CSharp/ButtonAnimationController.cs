/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ButtonAnimationController : MonoBehaviour, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler
{
	// Fields
	private const float pressedSquareMoveAmount = -15f;
	private const float hoverSquareMoveAmount = 0f;
	private const float disableSquareMoveAmount = -10f;
	private const float pressedSmallMoveAmount = -3f;
	private const float hoverSmallMoveAmount = 0f;
	private const float disableSmallMoveAmount = -1f;
	[SerializeField]
	private RectTransform transformToMove;
	[SerializeField]
	private UnityEngine.UI.Button button;
	[SerializeField]
	private ButtonType buttonType;
	private float pressedMoveAmount;
	private float hoverMoveAmount;
	private float disableMoveAmount;
	private float originalValue;
	private short buttonPressedState;
	private short buttonHighlightedState;

	// Nested types
	private enum ButtonType : byte
	{
		Square = 0,
		Small = 1
	}

	// Constructors
	public ButtonAnimationController();

	// Methods
	private void Start();
	private void Update();
	public void OnPointerUp(PointerEventData eventData);
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void OnPointerDown(PointerEventData eventData);
	private void OnDisable();
	private void HandleButtonDisabled();
	private void SetMoveAmount();
}

