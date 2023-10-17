/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesDetailHoldTrigger : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	[SerializeField]
	private GamePassesShopDetails gamePassesShopDetails;
	[SerializeField]
	private GamePassTier tierToShowDetailsFor;

	// Constructors
	public GamePassesDetailHoldTrigger();

	// Methods
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
}

