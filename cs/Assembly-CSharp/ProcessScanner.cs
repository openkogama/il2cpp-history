/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.AntiCheat;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class ProcessScanner
{
	// Methods
	private static extern void AddToBanList(string certificateSerialNumber, bool strictComparison);
	private static extern int ScanForForbiddenProcesses();
	private static extern void Cleanup();
	public static extern string GetLastExactFind();
	public static void Initialize(ApplicationDesc[] banList);
	public static void Destroy();
	public static void StartScan(ApplicationDesc[] banList);
}

