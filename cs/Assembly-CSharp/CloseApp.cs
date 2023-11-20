/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CloseApp : MonoBehaviour
{
	// Fields
	[SerializeField]
	private ConfirmationPopup closeAppPopupPrefab;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static UnityAction<bool, ConfirmationPopup> __9__1_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Close_b__1_0(bool confirmation, ConfirmationPopup popup);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass1_0
	{
		// Fields
		public UnityAction<bool, ConfirmationPopup> quit;

		// Constructors
		public __c__DisplayClass1_0();

		// Methods
		internal void _Close_b__1(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public CloseApp();

	// Methods
	public void Close();
}

