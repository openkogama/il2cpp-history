/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class BackButtonManager
{
	// Fields
	private static List<BackButtonSubscriber> subscribers;

	// Nested types
	private class BackButtonSubscriber
	{
		// Fields
		public BackButtonHandler handler;
		public KogamaControls button;
		public KeyState state;
		public UnityAction callback;

		// Constructors
		public BackButtonSubscriber(BackButtonHandler handler, KogamaControls button, KeyState state, UnityAction callback);
	}

	// Constructors
	static BackButtonManager();

	// Methods
	public static void Update();
	public static void Subscribe(BackButtonHandler handler, KogamaControls button, KeyState state, UnityAction callback);
	public static void Unsubscribe(BackButtonHandler handler);
	public static void PostDestroyCleanup();
	private static bool ContainsHandler(BackButtonHandler handler);
}

