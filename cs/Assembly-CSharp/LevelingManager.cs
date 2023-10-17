/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class LevelingManager
{
	// Fields
	public static UnityAction OnLevelingInitialized;
	[CompilerGenerated]
	private static bool _IsInitialized_k__BackingField;
	public static readonly Dictionary<int, XPLevelLimits> TestLevelToLimits;

	// Properties
	public static bool IsInitialized { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	static LevelingManager();

	// Methods
	public static void Destroy();
	public static void Initialize(int profileID);
	public static void OnInitialData(UnityWebRequest result);
	private static void Notify(InitialLevelData initialLevelData);
	private static InitialLevelData CreateInitialLevelData();
	private static List<BadgeUrlData> TestBadgeUrlData();
}

