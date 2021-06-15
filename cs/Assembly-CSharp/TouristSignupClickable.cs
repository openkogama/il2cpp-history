/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _OnClick_c__AnonStorey0
	{
		// Fields
		internal GameObject popup;

		// Constructors
		public _OnClick_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TouristSignupClickable();

	// Methods
	public void Start();
	public void OnClick();
}

