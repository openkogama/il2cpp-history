/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class NicklasHotkeys
{
	// Fields
	private static Dictionary<KeyCode, Func<KeyCode, bool>> keyBindings;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal bool _.cctor_b__3_0(KeyCode _);
	}

	// Constructors
	static NicklasHotkeys();

	// Methods
	public static void Handle();
	private static bool PushNotification(NotificationType type, Dictionary<object, object> data = null);
}

