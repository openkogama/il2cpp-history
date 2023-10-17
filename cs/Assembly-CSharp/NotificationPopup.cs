/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text text;
	[SerializeField]
	private UnityEngine.UI.Text header;
	[SerializeField]
	public bool hideAll;

	// Constructors
	public NotificationPopup();

	// Methods
	public void Initialize(string text, string header);
}

