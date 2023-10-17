/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Button))]
public class BackButtonHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Button invokeButton;
	[SerializeField]
	private KogamaControls kogamaControl;
	[SerializeField]
	private KeyState onKeyState;

	// Constructors
	public BackButtonHandler();

	// Methods
	private void OnEnable();
	private void InvokeButton();
	private void OnDisable();
}

