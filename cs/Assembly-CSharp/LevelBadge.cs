/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelBadge : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage levelBadge;
	[SerializeField]
	private ProgressBarAndroid xpBar;
	[SerializeField]
	private ProgressBarAndroid subscriberXPBar;
	private Texture2D badgeTextureAsset;

	// Constructors
	public LevelBadge();

	// Methods
	private void Awake();
	private void OnLevelingInitialized();
	private void UpdateProgress(XPProgressData xpProgress);
	private void UpdateBadge(int level);
	private void OnDestroy();
	private void StreamingAssetCallback(UnityWebRequest www);
}

