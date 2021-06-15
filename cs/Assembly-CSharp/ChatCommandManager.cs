/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class ChatCommandManager
{
	// Fields
	private static Dictionary<ChatCommand, Action> chatCommandCallBackDictionary;

	// Constructors
	static ChatCommandManager();

	// Methods
	public static Action GetChatCommandCallback(ChatCommand chatCommand);
	public static void UpdateChatCommandCallback(ChatCommand chatCommand, Action callback);
	public static void ChatCommandActivated(ChatCommand chatCommand);
}

