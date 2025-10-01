/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopInGameGUIController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform levelBadgeParentTransform;
	[SerializeField]
	private ShowUse3D use3DPrefab;
	[SerializeField]
	private CrossHair crossHair;
	[SerializeField]
	private Image logo;
	[SerializeField]
	private LevelBadge levelBadge;
	[SerializeField]
	private GameObject leaveEditPlayModeButton;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private ShowUse use;
	private Dictionary<EmbeddedSite, string> logoToPathMap;

	// Constructors
	public DesktopInGameGUIController();

	// Methods
	public void Initialize();
	private void StreamingAssetCallback(UnityWebRequest www);
	public void ShowEUseIcon(ShowUseOption option, int woID = 0);
	public void HideEUseIcon();
	public IGUICrossHair GetCrossHair();
	private void OnDestroy();
}

