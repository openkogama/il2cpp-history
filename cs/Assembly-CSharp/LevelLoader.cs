/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelLoader : MonoBehaviour
{
	// Fields
	private static Dictionary<ScenesForMode, string[]> scenesForModeMap;
	private List<AsyncOperation> pendingScenes;
	private Action callback;
	[CompilerGenerated]
	private static UnityAction __f__am_cache0;

	// Constructors
	public LevelLoader();
	static LevelLoader();

	// Methods
	public void LoadScenes(MVGameMode gameMode, bool tourist, Action callback);
	private void LoadScenes(ScenesForMode mode, Action callback);
	private void Update();
	[CompilerGenerated]
	private static void _Update_m__0();
}

