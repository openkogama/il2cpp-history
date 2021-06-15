/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesShowDetailsButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject disabledButton;
	[SerializeField]
	private GamePassesTextBubble OnActivatedToolTip;
	[SerializeField]
	private GamePassesShopDetails shopDetails;
	[SerializeField]
	private GameObject crystalPopup;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnButtonPressed_c__AnonStorey0
	{
		// Fields
		internal GamePassesShopDetails shopDetail;

		// Constructors
		public _OnButtonPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnDisabledButtonPressed_c__AnonStorey1
	{
		// Fields
		internal GameObject popup;

		// Constructors
		public _OnDisabledButtonPressed_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesShowDetailsButton();

	// Methods
	private void Start();
	private void OnDestroy();
	private void OnProgressionUpdate();
	private void UpdateButtonVisibility();
	public void OnButtonPressed();
	public void OnDisabledButtonPressed();
}

