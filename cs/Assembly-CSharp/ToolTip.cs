/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent]
public class ToolTip : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	private bool hasEntered;
	[SerializeField]
	private RectTransform rectTransform;
	[SerializeField]
	private string toolTipText;
	private float pointerEnterTime;
	private Vector2 mousePosOnToolTip;
	private bool mousePosOnToolTipSet;
	private const float timeBeforeToolTip = 0.1f;

	// Constructors
	public ToolTip();

	// Methods
	private void Awake();
	private void Reset();
	public void SetText(string textToBeChanged);
	private void LanguageLoadedCallback();
	private void Update();
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	[CompilerGenerated]
	private void _Update_m__0(IHandleToolTip x, BaseEventData y);
}

