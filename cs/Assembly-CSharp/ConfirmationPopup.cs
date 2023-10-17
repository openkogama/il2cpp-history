/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ConfirmationPopup : MonoBehaviour
{
	// Fields
	private UnityAction<bool, ConfirmationPopup> resultCallback;
	[SerializeField]
	private UnityEngine.UI.Text text;
	[SerializeField]
	private UnityEngine.UI.Text header;
	[SerializeField]
	private Button okButton;
	[SerializeField]
	private Button cancelButton;
	[SerializeField]
	public bool hideAll;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Pop_b__7_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ConfirmationPopup();

	// Methods
	public void Initialize(string text, UnityAction<bool, ConfirmationPopup> resultCallback, string header);
	public void Pop();
	private void Ok();
	private void Cancel();
}

