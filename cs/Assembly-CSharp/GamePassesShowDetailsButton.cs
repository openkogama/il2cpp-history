/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public GamePassesShopDetails shopDetail;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal void _OnButtonPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public GameObject popup;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _OnDisabledButtonPressed_b__0(IUIStack x, BaseEventData y);
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

