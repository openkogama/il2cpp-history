/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BundleErrorPopUp : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text header;
	[SerializeField]
	private UnityEngine.UI.Text buttonText;
	private UnityAction<bool> resultCallback;

	// Constructors
	public BundleErrorPopUp();

	// Methods
	public void Initialize(UnityAction<bool> resultCallback, string header, string buttonText);
	public void OnButtonPressed();
	public void OnExit();
}

