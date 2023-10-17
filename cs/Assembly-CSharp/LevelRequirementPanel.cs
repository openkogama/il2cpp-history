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

public class LevelRequirementPanel : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage levelRequirementImage;
	private Texture2D levelRequirementTextureAsset;
	private int prevLevel;
	private int desiredLevel;

	// Constructors
	public LevelRequirementPanel();

	// Methods
	public void SetLevelSpriteFromCallback(int level);
	private void OnLevelingIsReady();
	private void SetLevelBadge();
	private void OnDestroy();
	private void StreamingAssetCallback(UnityWebRequest www);
}

