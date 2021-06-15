/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ChatConsoleModes : MonoBehaviour
{
	// Fields
	private ChatConsoleMode chatConsoleMode;
	[SerializeField]
	private List<ChatConsoleModeDef> chatConsoleModeDefs;

	// Properties
	public ChatConsoleMode ChatConsoleMode { get; }

	// Constructors
	public ChatConsoleModes();

	// Methods
	public void Set(ChatConsoleMode chatConsoleMode, ref RectTransform rectTransform);
}

