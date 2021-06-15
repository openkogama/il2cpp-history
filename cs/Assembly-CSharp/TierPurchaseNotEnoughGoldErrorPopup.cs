/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierPurchaseNotEnoughGoldErrorPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierText;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public TierPurchaseNotEnoughGoldErrorPopup();

	// Methods
	public void Initialize(GamePassTier tierToPurchase);
	public void GetGold();
	[CompilerGenerated]
	private static void _GetGold_m__0(IUIStack x, BaseEventData y);
}

