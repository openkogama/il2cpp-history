/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class AudioEventHandler
{
	// Fields
	private static AudioBuild audioBuild;
	private static List<TranslateSoundData> translateSoundDatas;

	// Constructors
	static AudioEventHandler();

	// Methods
	public static void PlaySound(AudioActions audioAction, IntVector localPos, GameObject gameObject);
	public static void Init(AudioBuild audioBuild);
	public static void Destroy();
	public static void AddTranslateSoundData(float moveValue, bool moveToGridPos, Vector3 worldPos);
	public static void Update();
	private static void HandleTranslateData();
}

