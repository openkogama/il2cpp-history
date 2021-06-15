/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RequirementNotification : Notification
{
	// Fields
	[SerializeField]
	private Sprite OnSprite;
	[SerializeField]
	private Sprite OffSprite;
	[SerializeField]
	private RectTransform Layout;
	[SerializeField]
	private NotificationRequirementPanel LevelPanel;
	[SerializeField]
	private NotificationRequirementPanel GamecoinPanel;
	[SerializeField]
	private NotificationRequirementPanel StarPanel;
	[SerializeField]
	private NotificationRequirementPanel TeamPanel;
	[SerializeField]
	private NotificationRequirementPanel GameTierPanel;
	private List<GameObject> PanelsToDestroy;
	[CompilerGenerated]
	private static Action<GameObject> __f__am_cache0;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowGameCoinRequirement_c__AnonStorey0
	{
		// Fields
		internal int gameCoins;
		internal Sprite checkMark;
		internal bool enabled;

		// Constructors
		public _ShowGameCoinRequirement_c__AnonStorey0();

		// Methods
		internal void __m__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowStarRequirement_c__AnonStorey1
	{
		// Fields
		internal int stars;
		internal Sprite checkMark;
		internal bool enabled;

		// Constructors
		public _ShowStarRequirement_c__AnonStorey1();

		// Methods
		internal void __m__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTeamRequirement_c__AnonStorey2
	{
		// Fields
		internal MVTeam team;
		internal Sprite checkMark;
		internal bool enabled;

		// Constructors
		public _ShowTeamRequirement_c__AnonStorey2();

		// Methods
		internal void __m__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowLevelRequirement_c__AnonStorey3
	{
		// Fields
		internal int level;
		internal Sprite checkMark;
		internal bool enabled;

		// Constructors
		public _ShowLevelRequirement_c__AnonStorey3();

		// Methods
		internal void __m__0(INotificationRequirementPanel x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowGameTierRequirement_c__AnonStorey4
	{
		// Fields
		internal GamePassTier tier;
		internal Sprite checkMark;
		internal bool enabled;

		// Constructors
		public _ShowGameTierRequirement_c__AnonStorey4();

		// Methods
		internal void __m__0(INotificationRequirementPanel x, BaseEventData y);
	}

	// Constructors
	public RequirementNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private void ShowGameCoinRequirement(int gameCoins);
	private void ShowStarRequirement(int stars);
	private void ShowTeamRequirement(MVTeam team);
	private void ShowLevelRequirement(int level);
	private void ShowGameTierRequirement(GamePassTier tier);
	private GameObject InstantiatePanel(NotificationRequirementPanel panel);
	[CompilerGenerated]
	private static void _Initialize_m__0(GameObject x);
}

