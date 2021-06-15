/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SkipConfirmation : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PopElement popElement;
	[SerializeField]
	private ConfirmationPopup popup;

	// Nested types
	[CompilerGenerated]
	private sealed class _CreateConfirmationPopup_c__AnonStorey0
	{
		// Fields
		internal ConfirmationPopup confirm;

		// Constructors
		public _CreateConfirmationPopup_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SkipConfirmation();

	// Methods
	public void CreateConfirmationPopup();
	private void HandleResult(bool confirmed, ConfirmationPopup popup);
}

