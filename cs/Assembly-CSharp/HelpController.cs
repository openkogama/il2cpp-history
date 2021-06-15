/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HelpController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject helpScreen;
	private bool pressed;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnClick_c__AnonStorey0
	{
		// Fields
		internal GameObject popup;
		internal HelpController _this;

		// Constructors
		public _OnClick_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public HelpController();

	// Methods
	public void OnClick();
	private void Update();
	private void OnClosed();
}

