/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Portal.Scripts;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PortalControl : MonoBehaviour
{
	// Fields
	[Header("References")]
	[SerializeField]
	private GameObject screenList;
	[SerializeField]
	private PortalPrefabPool portalPrefabPoolPrefab;
	[SerializeField]
	private Styles styles;
	[SerializeField]
	private PopupHandler gameInfoPopup;
	[CompilerGenerated]
	[SerializeField]
	private RegionConfigManager _RegionConfigManager_k__BackingField;
	[Header("Pages")]
	[SerializeField]
	private PageMapClass[] pageMap;
	[Header("Settings")]
	[SerializeField]
	private float pageSlideTime;
	[SerializeField]
	private string sessionLocatorUrl;
	public Action<PortalPageType> OnPageChanged;
	private int index;
	private SessionLocator sessionLocator;
	[CompilerGenerated]
	private static PortalControl _Instance_k__BackingField;
	[CompilerGenerated]
	private bool _Clicked_k__BackingField;
	[CompilerGenerated]
	private int _ActiveIndex_k__BackingField;
	private const bool RunTowardsLocalServer = false;

	// Properties
	public RegionConfigManager RegionConfigManager { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static PortalControl Instance { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool Clicked { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int ActiveIndex { [CompilerGenerated] get; [CompilerGenerated] set; }
	public PortalPageType ActivePortalPageType { get; }

	// Nested types
	[Serializable]
	public class PageMapClass
	{
		// Fields
		[CompilerGenerated]
		[SerializeField]
		private PortalPageType _PageType_k__BackingField;
		[CompilerGenerated]
		[SerializeField]
		private int _Index_k__BackingField;
		[SerializeField]
		private GameObject page;

		// Properties
		public PortalPageType PageType { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int Index { [CompilerGenerated] get; [CompilerGenerated] private set; }

		// Constructors
		public PageMapClass();
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Action<string> __9__34_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _HandlePlayGame_b__34_0(string error);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass32_0
	{
		// Fields
		public ScrollRect scrollRect;

		// Constructors
		public __c__DisplayClass32_0();

		// Methods
		internal float _DoChangePage_b__0();
		internal void _DoChangePage_b__1(float x);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass33_0
	{
		// Fields
		public PortalControl __4__this;
		public GameDto gameDto;

		// Constructors
		public __c__DisplayClass33_0();

		// Methods
		internal void _OpenGameInfo_b__0();
	}

	// Constructors
	public PortalControl();

	// Methods
	private void Awake();
	public void ChangePage(PortalPageType portalPageType);
	private void DoChangePage(PageMapClass pageMapClass);
	public void OpenGameInfo(GameDto gameDto);
	private void HandlePlayGame(GameDto gameDto);
	private void StartGame(SessionLocatorResponse response);
	private static void DebugPrintGameSessionData(Dictionary<string, object> gameSessionData);
}

