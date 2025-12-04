/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ChatBubbleController : MonoBehaviour
{
	// Fields
	private Dictionary<int, ChatBubble> chatBubbleList;

	// Constructors
	public ChatBubbleController();

	// Methods
	private void Start();
	private void ShowChatBubble(string text, string senderName, int anchorId, ChatAnchor chatBubbleAnchor);
}

