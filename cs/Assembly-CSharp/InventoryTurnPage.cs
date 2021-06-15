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

public class InventoryTurnPage : MonoBehaviour, IPointerEnterHandler
{
	// Fields
	[SerializeField]
	private bool pageForward;
	[SerializeField]
	private Button button;

	// Constructors
	public InventoryTurnPage();

	// Methods
	private void Start();
	public void OnPointerEnter(PointerEventData eventData);
	private void TurnPage(IPagedTurned pagedTurned);
	[CompilerGenerated]
	private void _Start_m__0();
	[CompilerGenerated]
	private void _OnPointerEnter_m__1(IPagedTurned x, BaseEventData y);
	[CompilerGenerated]
	private void _Start_m__2(IPagedTurned x, BaseEventData y);
}

