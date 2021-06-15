/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class CheatHandling
{
	// Fields
	[CompilerGenerated]
	private static UnityAction __f__mg_cache0;
	[CompilerGenerated]
	private static UnityAction __f__mg_cache1;

	// Methods
	public static void Init();
	[Conditional]
	public static void MachineBanDetected();
	public static void CheatSoftwareRunningDetected();
	public static void TextureHackDetected();
	private static void SpeedHackDetected();
	private static void ObscuredCheatingDetected();
	private static void ExecuteBan(CheatType cheatType);
}

