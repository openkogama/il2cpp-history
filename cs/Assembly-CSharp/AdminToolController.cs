/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdminToolController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Dropdown presetBansDropdown;
	[SerializeField]
	private Dropdown banDurationMultiplier;
	[SerializeField]
	private UnityEngine.UI.Text playerName;
	[SerializeField]
	private InputField duration;
	[SerializeField]
	private InputField reason;
	[SerializeField]
	private Button ownerKickButton;
	private static readonly Dictionary<string, int> durationMultiplier;
	private static readonly Dictionary<string, DefaultBan> defaultBanLookup;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	private struct DefaultBan
	{
		// Fields
		public string BanReason;
		public string BanDuration;
		public string BanDurationFormat;

		// Constructors
		public DefaultBan(string reason, string duration, string format);
	}

	// Constructors
	public AdminToolController();
	static AdminToolController();

	// Methods
	public void Initialize(string playerNameString);
	public void OnBanClicked();
	public void OnKickClicked();
	public void OnRevokeEditRightsClicked();
	private void OnDefaultBanDropdownChanged(int option);
	private bool IsBanFieldsValid();
	private static MVPlayer GetPlayer(string userName);
	[CompilerGenerated]
	private static void _OnBanClicked_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnBanClicked_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnKickClicked_m__2(IUIStack x, BaseEventData y);
}

