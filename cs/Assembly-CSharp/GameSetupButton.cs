/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameSetupButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GamePassesTextBubble OnActivatedToolTip;
	[SerializeField]
	private GameSetupMenu gameSetupMenuPrefab;
	private bool isTiersActivated;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowGameSetupMenu_c__AnonStorey0
	{
		// Fields
		internal GameSetupMenu gameSetupMenu;

		// Constructors
		public _ShowGameSetupMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GameSetupButton();

	// Methods
	public void ShowGameSetupMenu();
	private void Start();
	private void OnDestroy();
	private void OnProgressionUpdate();
}

