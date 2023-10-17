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

public class LevelProgressAccessoryShop : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text progressText;
	[SerializeField]
	private ProgressBar progressBar;
	[SerializeField]
	private RawImage badgeTexture;
	private Texture2D badgeTextureAsset;
	private int badgeLevel;

	// Constructors
	public LevelProgressAccessoryShop();

	// Methods
	public void Start();
	private void Initialize();
	private void OnXPUpdate(XPProgressData xpProgressData);
	private void OnDestroy();
	private void OnLevelingBadgeLoaded(UnityWebRequest www);
}

