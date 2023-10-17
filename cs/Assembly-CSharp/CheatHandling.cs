/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class CheatHandling
{
	// Methods
	public static void Init();
	[Conditional("UNITY_STANDALONE_WIN")]
	public static void MachineBanDetected();
	public static void CheatSoftwareRunningDetected();
	public static void TextureHackDetected();
	private static void SpeedHackDetected();
	private static void ObscuredCheatingDetected();
	private static void ExecuteBan(CheatType cheatType);
}

