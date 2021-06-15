/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CloseApp : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ConfirmationPopup closeAppPopupPrefab;
	[CompilerGenerated]
	private static UnityAction<bool, ConfirmationPopup> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _Close_c__AnonStorey0
	{
		// Fields
		internal UnityAction<bool, ConfirmationPopup> quit;

		// Constructors
		public _Close_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public CloseApp();

	// Methods
	public void Close();
	[CompilerGenerated]
	private static void _Close_m__0(bool confirmation, ConfirmationPopup popup);
}

