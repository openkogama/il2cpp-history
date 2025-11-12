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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private UnityEngine.UI.Button ownerKickButton;
	private static readonly Dictionary<string, int> durationMultiplier;
	private static readonly Dictionary<string, DefaultBan> defaultBanLookup;

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

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnBanClicked_b__9_0(IUIStack x, BaseEventData y);
		internal void _OnBanClicked_b__9_1(IUIStack x, BaseEventData y);
		internal void _OnKickClicked_b__10_0(IUIStack x, BaseEventData y);
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
}

