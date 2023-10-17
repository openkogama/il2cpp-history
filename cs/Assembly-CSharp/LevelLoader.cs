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

public class LevelLoader : MonoBehaviour
{
	// Fields
	private const string SceneDesktopPlayMode = "DesktopPlayModeGUI";
	private const string SceneTouchPlayMode = "AndroidPlayModeGUI";
	private const string SceneTouchEditMode = "AndroidEditModeGUI";
	private const string SceneDesktopEditMode = "DesktopEditModeGUI";
	private const string SceneDesktopAvatarEditMode = "DesktopAvatarEditModeGUI";
	private static Dictionary<ScenesForMode, string[]> scenesForModeMap;
	private readonly List<AsyncOperation> pendingScenes;
	private Action callback;

	// Constructors
	public LevelLoader();
	static LevelLoader();

	// Methods
	public void LoadScenes(MVGameMode gameMode, bool tourist, bool useTouch, Action callback);
	private void LoadScenes(ScenesForMode mode, Action callbackAction);
	private void Update();
}

