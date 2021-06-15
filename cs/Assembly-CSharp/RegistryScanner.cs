/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Microsoft.Win32;
using MV.WorldObject.AntiCheat;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class RegistryScanner
{
	// Fields
	private static readonly Dictionary<string, RegistryKey> registerRoots;

	// Constructors
	static RegistryScanner();

	// Methods
	private static RegistryKey GetRoot(string root);
	public static void StartScan(ApplicationDesc[] banList);
	private static void RegistrySearch(ApplicationDesc appDesc);
	private static string GetRegPath(ApplicationDesc.RegistryKey key);
}

