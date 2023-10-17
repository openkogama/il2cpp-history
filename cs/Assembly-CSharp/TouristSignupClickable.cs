/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristSignupClickable : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject redirectNotAllowedPopup;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	[SerializeField]
	private GameObject signupBtn;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public GameObject popup;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _OnClick_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TouristSignupClickable();

	// Methods
	public void Start();
	public void OnClick();
}

