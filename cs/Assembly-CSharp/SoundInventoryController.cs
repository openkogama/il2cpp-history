/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SoundInventoryController : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	private InventoryController inventoryController;
	private readonly Dictionary<int, TabState> tabs;
	private int selectedTab;
	private readonly Dictionary<int, List<SoundTabInfo>> soundTabInfos;
	[SerializeField]
	private InventoryController inventoryControllerPrefab;
	[SerializeField]
	private int numberOfSlotsPrPage;
	[SerializeField]
	private SoundViewItem soundViewItemPrefab;
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private StreamedAudioClipList audioUrls;
	private List<StreamedAudioClipInfo> urls;
	private readonly Dictionary<int, int> categorysAmount;
	private string originalURL;
	private readonly Dictionary<string, int> categoryToNameCombinations;

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey0
	{
		// Fields
		internal string soundName;

		// Constructors
		public _Initialize_c__AnonStorey0();

		// Methods
		internal bool __m__0(SoundTabInfo soundTabInfo);
	}

	// Constructors
	public SoundInventoryController();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void UpdateContent();
	private void SetNewOriginalUrl(string url);
	private void PageTurned(int dir);
	private void TabSelected(int tab);
	public void OnSettingChanged(string key, object value);
}

