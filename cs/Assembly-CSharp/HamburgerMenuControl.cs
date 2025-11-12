/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HamburgerMenuControl : MonoBehaviour
{
	// Fields
	[Header("References")]
	[SerializeField]
	private GameObject sideMenu;
	[SerializeField]
	private GameObject overlay;
	[Header("Settings")]
	[SerializeField]
	private float animationTime;
	private bool isHamburgerMenuOpen;

	// Nested types
	[CompilerGenerated]
	private sealed class _CloseHamburgerMenuFunction_d__5 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public HamburgerMenuControl __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CloseHamburgerMenuFunction_d__5(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public HamburgerMenuControl();

	// Methods
	public void OpenHamburgerMenu();
	[IteratorStateMachine(typeof(_CloseHamburgerMenuFunction_d__5))]
	private IEnumerator CloseHamburgerMenuFunction();
	public void CloseHamburgerMenu();
	public void ExitApplication();
	[CompilerGenerated]
	private Color _OpenHamburgerMenu_b__4_0();
	[CompilerGenerated]
	private void _OpenHamburgerMenu_b__4_1(Color x);
	[CompilerGenerated]
	private Vector3 _OpenHamburgerMenu_b__4_2();
	[CompilerGenerated]
	private void _OpenHamburgerMenu_b__4_3(Vector3 x);
	[CompilerGenerated]
	private Vector3 _OpenHamburgerMenu_b__4_4();
	[CompilerGenerated]
	private void _OpenHamburgerMenu_b__4_5(Vector3 x);
	[CompilerGenerated]
	private Color _CloseHamburgerMenuFunction_b__5_0();
	[CompilerGenerated]
	private void _CloseHamburgerMenuFunction_b__5_1(Color x);
	[CompilerGenerated]
	private Vector3 _CloseHamburgerMenuFunction_b__5_2();
	[CompilerGenerated]
	private void _CloseHamburgerMenuFunction_b__5_3(Vector3 x);
	[CompilerGenerated]
	private Vector3 _CloseHamburgerMenuFunction_b__5_4();
	[CompilerGenerated]
	private void _CloseHamburgerMenuFunction_b__5_5(Vector3 x);
}

