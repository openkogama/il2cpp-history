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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierPurchaseNotEnoughGoldErrorPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierText;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__2_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _GetGold_b__2_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierPurchaseNotEnoughGoldErrorPopup();

	// Methods
	public void Initialize(GamePassTier tierToPurchase);
	public void GetGold();
}

