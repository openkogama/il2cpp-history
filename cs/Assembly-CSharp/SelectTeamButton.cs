/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SelectTeamButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject button;
	[SerializeField]
	private TeamMenu teamMenuPrefab;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowTeamMenu_c__AnonStorey0
	{
		// Fields
		internal TeamMenu newTeamMenu;

		// Constructors
		public _ShowTeamMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SelectTeamButton();

	// Methods
	private void Start();
	public void ShowTeamMenu();
}

