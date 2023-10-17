/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HelpController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject helpScreen;
	private bool pressed;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass2_0
	{
		// Fields
		public GameObject popup;
		public HelpController __4__this;

		// Constructors
		public __c__DisplayClass2_0();

		// Methods
		internal void _OnClick_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public HelpController();

	// Methods
	public void OnClick();
	private void Update();
	private void OnClosed();
}

