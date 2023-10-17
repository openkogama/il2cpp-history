/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesTextBubble : MonoBehaviour
{
	// Fields
	[SerializeField]
	private NotificationFade fader;
	[SerializeField]
	private UnityEngine.UI.Text text;
	[SerializeField]
	private bool deactivateAfterFade;
	private bool isActive;

	// Properties
	public bool DeactivateAfterFade { set; }
	public bool IsActive { get; }

	// Constructors
	public GamePassesTextBubble();

	// Methods
	private void Start();
	private void OnDestroy();
	private void OnFaderDone();
	public void Activate(string textBubbleText);
}

