/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeEventMessage : MonoBehaviour
{
	// Fields
	[SerializeField]
	private FirstTimeFadeHandler fader;
	[SerializeField]
	private UnityEngine.UI.Text message;

	// Constructors
	public FirstTimeEventMessage();

	// Methods
	public void FadeIn();
	public void FadeOut(Action<GameObject> onFinished);
	public void SetText(string messageText);
}

