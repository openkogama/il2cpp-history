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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public ConfirmationPopup();

	// Methods
	public void Initialize(string text, UnityAction<bool, ConfirmationPopup> resultCallback, string header);
	public void Pop();
	private void Ok();
	private void Cancel();
	[CompilerGenerated]
	private static void _Pop_m__0(IUIStack x, BaseEventData y);
}

